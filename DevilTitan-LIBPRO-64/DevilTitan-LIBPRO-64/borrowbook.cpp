#include "borrowbook.h"
#include "ui_borrowbook.h"
#include <QStandardItemModel>
#include <QTableView>
#include <QSqlQuery>

#include <QAbstractItemView>


borrowBook::borrowBook(QWidget* parent, QMap<QString,int>& _borrow,Reader* _par):
QDialog(parent),borrow(_borrow),par(_par),ui(new Ui::borrowBook)

{

    ui->setupUi(this);
    this->borrow=_borrow;
    ui->bookList->setModel(createmodel(ui->bookList,this->borrow));
    ui->bookList->setColumnWidth(0,495);
    ui->bookList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    clearptr = &_borrow;

}


borrowBook::~borrowBook()
{
    delete ui;
    par->displaybook();
}


void borrowBook::on_requestbtn_clicked()
{
    par->open();

    // gửi yêu cầu đến thủ thư







    // xóa borrow list

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


    clear(); // clear borrow book list



    this->close();
}

void borrowBook::on_removebtn_clicked()
{
    par->open();
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


    clear(); // clear borrow book list



    this->close();

}

void borrowBook::on_increasebtn_clicked()
{
    par->open();

    if(curbook.name=="") return;

    if(curbook.quantity)
    {
        --curbook.quantity;


        QSqlQuery query("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        ++par->borrow[curbook.name];
        ++borrow[curbook.name];

        ui->bookList->setModel(createmodel(ui->bookList,this->borrow));
        ui->bookList->setColumnWidth(0,495);


    }

}

void borrowBook::on_bookList_clicked(const QModelIndex &index)
{

    par->open();

    const QAbstractItemModel * model = index.model();
    QString currentBookName =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
    QSqlQuery *qry = new QSqlQuery;
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
}


void borrowBook::on_decreasebtn_clicked()
{
    par->open();

    if(curbook.name=="") return;

    if(curbook.quantity)
    {
        --curbook.quantity;


        QSqlQuery query("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
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
