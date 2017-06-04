#include "borrowbook.h"
#include "ui_borrowbook.h"
#include <QStandardItemModel>
#include <QTableView>
#include <QSqlQuery>
#include <QAbstractItemView>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QDate>
#include "aftersendingrequest.h"
#include <QTimer>

borrowBook::borrowBook(QWidget* parent, QMap<QString,int>& _borrow,Reader* _par,User* curUser):
QDialog(parent),borrow(_borrow),par(_par),ui(new Ui::borrowBook)

{

    ui->setupUi(this);

    QPixmap bkgnd(":/appscreen/Resources/appscreen/qb4Ddyc.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    auto model = createmodel(ui->bookList,this->borrow);
    this->borrow=_borrow;
    this->curUser= new User(*curUser);
    ui->bookList->setModel(model);
    ui->bookList->setColumnWidth(0,537);
    ui->bookList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantity"));


    clearptr = &_borrow;

}


borrowBook::~borrowBook()
{
    delete ui;
    par->displaybook();
}


void borrowBook::on_requestbtn_clicked() // gửi yêu cầu mượn sách 
{
    afterSendingRequest* a = new afterSendingRequest();

    // reset value for database(chưa xóa borrow)

     for (auto it = borrow.begin(); it!=borrow.end(); ++it) 
     {

         int currentQuantity;

         QSqlQuery *selectquantity = new QSqlQuery (QSqlDatabase::database("book_data"));
         selectquantity->prepare("select * from book_info where book_name = '" + it.key()+"'");


         if(selectquantity->exec())
         {
              while(selectquantity->next())
             {

                 currentQuantity = selectquantity->value(5).toInt();

             }
         }

         int x = currentQuantity + it.value();
         QSqlQuery query(QSqlDatabase::database("book_data"));
         query.prepare("UPDATE book_info SET quantity = " + QString::number(x) + " WHERE book_name = '" +it.key()+"'");
         query.exec();
 
         delete selectquantity;

    }

    // gửi yêu cầu đến thủ thư

    book curbook;

    for (auto it = borrow.begin(); it!=borrow.end();++it)
    {
 //*********************** 1) lấy thông tin đầy đủ của sách 
         
         QSqlQuery* searchBookInfo = new QSqlQuery(QSqlDatabase::database("book_data"));
        
         searchBookInfo->prepare("select * from book_info where book_name = '" + it.key()+"'");
        
         if(searchBookInfo->exec())
         {
             while (searchBookInfo->next())
             {
                  curbook.isbn      =  searchBookInfo->value(0).toString();
                  curbook.name      =  searchBookInfo->value(1).toString();
                  curbook.author    =  searchBookInfo->value(2).toString();
                  curbook.year      =  searchBookInfo->value(3).toString();
                  curbook.publisher =  searchBookInfo->value(4).toString();
                  curbook.quantity  =  searchBookInfo->value(5).toInt();

             }
         }
         
         delete searchBookInfo;

//*********************** 2) thêm yêu cầu vào database

        QSqlQuery* insertDb = new QSqlQuery(QSqlDatabase::database("libpro_user"));

        QDate date = QDate::currentDate();
        
        insertDb->prepare("INSERT INTO `book_request`(`username`, `number`,  `book_request`, `author`, `publisher`, `day_of_request`) VALUES (:username, :number, :bookname, :author, :publisher, :date)");
        insertDb->bindValue(":username",curUser->getUsername());
        insertDb->bindValue(":number",QString::number(it.value()));
        insertDb->bindValue(":bookname",it.key());
        insertDb->bindValue(":author",curbook.author);
        insertDb->bindValue(":publisher",curbook.publisher);
        insertDb->bindValue(":date",date.toString("yyyy-MM-dd"));

        if(!insertDb->exec()) qDebug() << insertDb->lastError();

        delete insertDb;
    }

    // xóa borrow list




    clear(); // clear borrow book list


    a->exec();
    this->close();
}

void borrowBook::on_removebtn_clicked() // xóa toàn bộ khỏi giỏ 
{

    for (auto it = borrow.begin(); it!=borrow.end(); ++it) // reset value for database
    {

         int currentQuantity;

         QSqlQuery *selectquantity = new QSqlQuery (QSqlDatabase::database("book_data")) ;
         selectquantity->prepare("select * from book_info where book_name = '" + it.key()+"'");


         if(selectquantity->exec())
         {
             while(selectquantity->next())
             {

                 currentQuantity = selectquantity->value(5).toInt();

             }
         }





         int x = currentQuantity + it.value();
         QSqlQuery query ( QSqlDatabase::database("book_data"));
         query.prepare("UPDATE book_info SET quantity = " + QString::number(x) + " WHERE book_name = '" +it.key()+"'");
         query.exec();

         delete selectquantity;


    }


    clear(); // clear borrow book list



    this->close();

}

void borrowBook::on_increasebtn_clicked() // tăng số lượng
{


    if(curbook.name=="") return;

    if(curbook.quantity)
    {
        --curbook.quantity;


        QSqlQuery query (QSqlDatabase::database("book_data"));
        query.prepare("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        ++par->borrow[curbook.name];
        ++borrow[curbook.name];

        ui->bookList->setModel(createmodel(ui->bookList,this->borrow));
        ui->bookList->setColumnWidth(0,495);


    }

}

void borrowBook::on_bookList_clicked(const QModelIndex &index) //click vào table
{



    const QAbstractItemModel * model = index.model();
    QString currentBookName =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
    QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("book_data"));
    qry->prepare("select * from book_info where book_name ='"+ currentBookName + "'");


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


        }
    }

   // delete model;
    delete qry;
}


void borrowBook::on_decreasebtn_clicked() // giảm số lượng 
{


    if(curbook.name=="") return;

    if(curbook.quantity)
    {
        ++curbook.quantity;


        QSqlQuery query(QSqlDatabase::database("book_data"));
        query.prepare("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        --par->borrow[curbook.name];
        --borrow[curbook.name];

        ui->bookList->setModel(createmodel(ui->bookList,this->borrow));
        ui->bookList->setColumnWidth(0,495);


    }


}

void borrowBook::on_cancelbtn_clicked()
{
    this->close();
}
