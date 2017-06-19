#include "LIBPRO.h"
#include "ui_borrowbook.h"
#include <QStandardItemModel>
#include <QTableView>
#include <QSqlQuery>
#include <QAbstractItemView>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QDate>
#include <QPixmap>

borrowBook::borrowBook(QWidget* parent, QMap<QString,int>& _borrow,Reader* _par,User* curUser):
QDialog(parent),borrow(_borrow),par(_par),ui(new Ui::borrowBook)

{

    ui->setupUi(this);
    this->borrow=_borrow;
    this->curUser= new User(*curUser);


    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    displaybook();
    ui->bookList->setSelectionBehavior(QAbstractItemView::SelectRows);
    clearptr = &_borrow;

}


borrowBook::~borrowBook()
{
    delete ui;
    delete curUser;
    par->displaybook();

}


void borrowBook::on_requestbtn_clicked() // gửi yêu cầu mượn sách 
{

    // reset value for database(chưa xóa borrow)
     par->ui.size->setVisible(false);

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
    par->ui.size->setVisible(false);

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

        displaybook();


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
    if(!borrow.contains(curbook.name)) return;

    if(borrow[curbook.name]>1)
    {
        ++curbook.quantity;


        QSqlQuery query(QSqlDatabase::database("book_data"));
        query.prepare("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        --par->borrow[curbook.name];
        --borrow[curbook.name];

        displaybook();


    }

    else if(borrow[curbook.name]==1)
    {
        ++curbook.quantity;

        QSqlQuery query(QSqlDatabase::database("book_data"));
        query.prepare("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        --par->borrow[curbook.name];
        --borrow[curbook.name];

        for (auto it = borrow.begin(); it != borrow.end(); )
        {
            if (it.key() == curbook.name)
            {
                it = borrow.erase(it);
                displaybook();
                break;
            }
            else
                ++it;


        }

        for (auto it = par->borrow.begin(); it != par->borrow.end(); )
        {
            if (it.key() == curbook.name)
            {
                it = par->borrow.erase(it);
                displaybook();
                break;
            }
            else
                ++it;


        }
        displaybook();
    }



}

void borrowBook::on_cancelbtn_clicked()
{
    this->close();
    par->displayNotify();
    par->displaybook();
    if(borrow.empty()) par->ui.size->setVisible(false);
    else
    {
        par->ui.size->setVisible(true);
        par->ui.size->setText(QString::number(borrow.size()));
    }
}

void borrowBook::displaybook()
{

    ui->bookList->setModel(createmodel(ui->bookList,this->borrow));
    ui->bookList->setColumnWidth(0,500);
    ui->bookList->setColumnWidth(1,300);
    ui->bookList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->bookList->verticalHeader()->hide();
    ui->bookList->horizontalHeader()->hide();
    ui->bookList->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->bookList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->bookList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}
