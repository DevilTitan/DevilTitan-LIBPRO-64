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
#include "book.h"
#include <algorithm>
#include <QStandardItemModel>
#include "borrowbook.h"
#include <QStandardItemModel>
#include <QSet>
QStandardItemModel* createModel(QObject* parent,QMap<QString,int> borrow)
{
    const int numRows = borrow.size();
    const int numColumns = 2;
    auto it = borrow.begin();

    QStandardItemModel* model = new QStandardItemModel(numRows, numColumns);
    for (int row = 0; row < numRows; ++row)
    {

            QString book = it.key();
            QStandardItem* bookitm = new QStandardItem(book);
            model->setItem(row, 0 , bookitm);

            QString number = QString::number(it.value());
            QStandardItem* numberitm = new QStandardItem(number);
            model->setItem(row, 1 , numberitm);

            ++it;

     }

    return model;
}

void displayBook(Ui::Reader ui);

Reader::Reader(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
    displayBook(ui);
    QPixmap bkgnd(":/appscreen/Resources/appscreen/1.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

Reader::~Reader()
{
}

void Reader::on_bookList_clicked(const QModelIndex &index) // update label when double click on bookList
{
    const QAbstractItemModel * model = index.model();
    QString currentISBN =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
    QSqlQuery *qry = new QSqlQuery;
    qry->prepare("select * from book_info where isbn ='"+currentISBN + "'");


    if(qry->exec())
    {
        while(qry->next())
        {
        curbook.isbn = qry->value(0).toString();
        curbook.name = qry->value(1).toString();
        curbook.author = qry->value(2).toString();
        curbook.year =  qry->value(3).toString();
        curbook.publisher = qry->value(4).toString();
        curbook.quantity = qry->value(5).toInt();

        ui.bookName->setWordWrap(true);
        ui.author->setWordWrap(true);
        ui.description->setWordWrap(true);
        ui.bookName->setText(curbook.name);
        ui.author -> setText(curbook.author);
        ui.description->setText("the book was published in " + curbook.year + " by " + curbook.publisher );

        }
    }


}

void Reader::on_searchBar_textChanged(const QString &cur) // search bar
{
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery ;
    qry->prepare("select * from book_info where book_name like '%" + search + "%' or "+"author like '%"+search+"%'");
    qry->exec();

    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);
    ui.bookList->setModel(modal);

    ui.bookList->hideColumn(0);
    ui.bookList->hideColumn(4);
    ui.bookList->hideColumn(3);


    ui.bookList->setColumnWidth(1,380);
    ui.bookList->setColumnWidth(2,165);
    ui.bookList->setColumnWidth(5,75);
    ui.bookList->setColumnWidth(6,50);

}

void Reader::on_addbtn_clicked() // add book
{
    if(curbook.name=="") return;
    if(curbook.quantity)
    {
        --curbook.quantity;

        qDebug() << curbook.quantity;

        //CHÚ Ý: Không update database mà chỉ update table (khi nào thủ thư đồng ý mới chỉnh sửa database(chưa sửa)

        //QSqlQuery query("UPDATE book_info SET quantity = " +QString::number(quantity)+ " WHERE isbn = '" +isbn+"'");

        displayBook(ui);

        borrow[curbook.name]++;
        if (borrow.size())
            ui.size->setStyleSheet("background-color: red; border: 0px; border-radius: 7px; color: white; font-size: 12px;");
        ui.size->setText(" " + QString::number(borrow.size()));
        auto model = createModel(ui.borrowBook,this->borrow);
        ui.borrowBook->setModel(model);
        ui.borrowBook->setColumnWidth(0,250);
        ui.borrowBook->setColumnWidth(1,90);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Tên sách"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Số lượng"));
    }
}

void displayBook(Ui::Reader ui)

{
    QSqlDatabase rdb;
    rdb = QSqlDatabase::addDatabase("QMYSQL");
    rdb.setHostName("127.0.0.1");
    rdb.setUserName("DevilTitan");
    rdb.setPassword("DevilTitan");
    rdb.setDatabaseName("book_data");
    rdb.open();

    QSqlQuery *qry = new QSqlQuery ;
    qry->prepare("select * from book_info");
    qry->exec();

    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.bookList->setModel(modal);
    ui.bookList->hideColumn(0);
    ui.bookList->hideColumn(4);
    ui.bookList->hideColumn(3);

    ui.bookList->resizeColumnToContents(1);
    ui.bookList->setColumnWidth(1,380);
    ui.bookList->setColumnWidth(2,165);
    ui.bookList->setColumnWidth(5,75);
    ui.bookList->setColumnWidth(6,50);

    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Tên sách"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Tác giả"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Số lượng"));
    modal->setHeaderData(6, Qt::Horizontal, QObject:: tr("Xếp hạng"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Ghi chú"));

}



void Reader::on_bookListbtn_clicked()
{
     borrowBook w (NULL,this->borrow);
     w.exec();
}

void Reader::on_removebtn_clicked()
{
    if(curbook.name=="") return;
    if(curbook.quantity)
    {
        int rowidx = ui.bookList->selectionModel()->currentIndex().row();

        QItemSelectionModel *select = ui.bookList->selectionModel();

        ui.bookList->model()->setData(ui.bookList->model()->index(rowidx ,5),1+curbook.quantity);
        //
        //++curbook.quantity;

        qDebug() << curbook.quantity;

        //CHÚ Ý: Không update database mà chỉ update table (khi nào thủ thư đồng ý mới chỉnh sửa database(chưa sửa)

        //QSqlQuery query("UPDATE book_info SET quantity = " +QString::number(quantity)+ " WHERE isbn = '" +isbn+"'");

        displayBook(ui);

        borrow[curbook.name]++;

        // display basket label
        if (borrow.size())
        ui.size->setStyleSheet("background-color: red; border: 0px; border-radius: 7px; color: white; font-size: 12px;");
        ui.size->setText(" " + QString::number(borrow.size()));
        auto model = createModel(ui.borrowBook,this->borrow);
        ui.borrowBook->setModel(model);
        ui.borrowBook->setColumnWidth(0,250);
        ui.borrowBook->setColumnWidth(1,90);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Tên sách"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Số lượng"));

    }
}
