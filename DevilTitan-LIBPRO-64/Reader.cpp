
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
#include <QTableView>
#include <QStandardItemModel>
#include <QSet>

QStandardItemModel* createmodel(QObject* parent,QMap<QString,int> borrow)
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



Reader::Reader(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    QPixmap bkgnd(":/appscreen/Resources/appscreen/2.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    displaybook();
}

Reader::~Reader()
{

    open();

    for (auto it = borrow.begin(); it!=borrow.end(); ++it) // reset value for database
    {

         int currentQuantity;

         QSqlQuery *selectquantity = new QSqlQuery;
         selectquantity->prepare("select * from book_info where book_name = '" + it.key()+"'");


         if(selectquantity->exec())
         {
             while(selectquantity->next())
             {

                 currentQuantity = selectquantity->value(5).toInt();

             }
         }





         int x = currentQuantity + it.value();
         QSqlQuery query("UPDATE book_info SET quantity = " + QString::number(x) + " WHERE book_name = '" +it.key()+"'");
         query.exec();


    }

    if(isOpen) rdb.close();

}

void Reader::on_bookList_clicked(const QModelIndex &index) // update label when double click on bookList
{

    this->open();

    const QAbstractItemModel * model = index.model();
    QString currentISBN =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
    QSqlQuery *qry = new QSqlQuery;
    qry->prepare("select * from book_info where isbn ='"+ currentISBN + "'");


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

    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Tên sách"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Tác giả"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Số lượng"));
    modal->setHeaderData(6, Qt::Horizontal, QObject:: tr("Rate"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Ghi chú"));

}

void Reader::on_addbtn_clicked() // add book
{
    this->open();

    if(curbook.name=="") return;

    if(curbook.quantity)
    {
        --curbook.quantity;


        QSqlQuery query("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        this->displaybook();



        if (borrow.count(curbook.name) > 0) ++borrow[curbook.name];
        else borrow[curbook.name] = 1;

        if (borrow.size())
            ui.size->setStyleSheet("background-color: #c14934; border: 0px; border-radius: 6px; color: white; font-size: 12px;");

        ui.size->setText(" " + QString::number(borrow.size()));
        auto model = createModel(ui.borrowBook,this->borrow);
        ui.borrowBook->setModel(model);
        ui.borrowBook->setColumnWidth(0,250);
        ui.borrowBook->setColumnWidth(1,90);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Tên sách"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Số lượng"));


    }

}


void Reader::on_bookListbtn_clicked()
{
    borrowBook w (NULL,this->borrow,this);
    w.exec();


}


void Reader::on_removebtn_clicked()
{
    this->open();

    if(curbook.name=="") return;

    if(borrow[curbook.name]>0)
    {
        ++curbook.quantity;


        QSqlQuery query("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        this->displaybook();



        --borrow[curbook.name];

        if (borrow.size()>0) ui.size->setStyleSheet("background-color: #c14934; border: 0px; border-radius: 0px; color: white; font-size: 12px;");
        ui.size->setText(" " + QString::number(borrow.size()));

        auto model = createModel(ui.borrowBook,this->borrow);
        ui.borrowBook->setModel(model);
        ui.borrowBook->setColumnWidth(0,250);
        ui.borrowBook->setColumnWidth(1,90);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Tên sách"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Số lượng"));


    }
    else
    {
        for (auto it = borrow.begin(); it != borrow.end(); ) {
            if (it.key() == curbook.name) {
                it = borrow.erase(it);
                displaybook();
            } else {
                ++it;
            }
        }
    }
}

void Reader::displaybook() //displaybook at both booklist and borrowbook tableview
{

    this->open();

    // display all book in database
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
    ui.bookList->setColumnWidth(6,40);

    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Tên sách"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Tác giả"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Số lượng"));
    modal->setHeaderData(6, Qt::Horizontal, QObject:: tr("Rate"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Ghi chú"));


    // display those book in basket



    QStandardItemModel* model = createmodel(ui.borrowBook,borrow);
    ui.borrowBook->setModel(model);
    ui.borrowBook->setColumnWidth(0,250);
    ui.borrowBook->setColumnWidth(1,90);
    ui.borrowBook->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Tên sách"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Số lượng"));
}


void Reader::open() // open database (rdb)
{
   if(!isOpen)
   {
     rdb.setHostName("127.0.0.1");
     rdb.setUserName("DevilTitan");
     rdb.setPassword("DevilTitan");
     rdb.setDatabaseName("book_data");
     rdb.open();
     isOpen = true;
   }

}


