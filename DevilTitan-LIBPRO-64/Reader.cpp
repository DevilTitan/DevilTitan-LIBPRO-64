#include "Reader.h"
#include <QPixmap>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QVariant>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <algorithm>
#include <string>
#include <QtAlgorithms>
Reader::Reader(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);


        rdb = QSqlDatabase::addDatabase("QMYSQL");
        rdb.setHostName("127.0.0.1");
        rdb.setUserName("DevilTitan");
        rdb.setPassword("DevilTitan");
        rdb.setDatabaseName("book_data");

        if (rdb.open()) qDebug() << "loz";


        // update tableview
        QSqlQuery *qry = new QSqlQuery ;
        qry->prepare("select * from book_info");
        qry->exec();
        QSqlQueryModel * modal = new QSqlQueryModel;
        modal ->setQuery(*qry);
        ui.bookList->setModel(modal);
        ui.bookList->hideColumn(0);
        ui.bookList->hideColumn(4);
        ui.bookList->hideColumn(2);
        ui.bookList->hideColumn(3);
        ui.bookList->resizeColumnToContents(1);
        //

}

Reader::~Reader()
{
}

void Reader::on_bookList_doubleClicked(const QModelIndex &index) // update label when double click on bookList
{
    const QAbstractItemModel * model = index.model();
    QString currentISBN =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
    QSqlQuery *qry = new QSqlQuery;
    qry->prepare("select * from book_info where isbn ='"+currentISBN + "'");


    if(qry->exec())
    {
        while(qry->next())
        {
        isbn = qry->value(0).toString();
        name = qry->value(1).toString();
        author = qry->value(2).toString();
        year =  qry->value(3).toString();
        publisher = qry->value(4).toString();
        quantity = qry->value(5).toInt();
        ui.bookName->setWordWrap(true);
        ui.author->setWordWrap(true);

        ui.bookName->setText(name);
        ui.author -> setText(author);
        ui.description->setText("the book was published in " + year + " by " + publisher );

        }
    }


}

void Reader::on_searchBar_textChanged(const QString &cur) // search bar
{
    QString search;
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery ;
    qry->prepare("select * from book_info where book_name like '%" + search + "%'");
    qry->exec();
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);
    ui.bookList->setModel(modal);
    ui.bookList->hideColumn(0);
    ui.bookList->resizeColumnToContents(1);
}

void Reader::on_pushButton_2_clicked() // add book
{
    if(quantity)
    {
        --quantity;

        qDebug() << quantity;

        QSqlQuery query("UPDATE book_info SET quantity = " +QString::number(quantity)+ " WHERE isbn = '" +isbn+"'");


        // update tableview
        QSqlQuery *qry = new QSqlQuery ;
        qry->prepare("select * from book_info");
        qry->exec();
        QSqlQueryModel * modal = new QSqlQueryModel;
        modal ->setQuery(*qry);
        ui.bookList->setModel(modal);
        ui.bookList->hideColumn(0);
        ui.bookList->hideColumn(4);
        ui.bookList->hideColumn(2);
        ui.bookList->hideColumn(3);
        ui.bookList->resizeColumnToContents(1);
        //

        borrow.push_back(name);

    }
}

