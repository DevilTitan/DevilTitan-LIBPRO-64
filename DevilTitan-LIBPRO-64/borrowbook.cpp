#include "borrowbook.h"
#include "ui_borrowbook.h"
#include <QStandardItemModel>
#include <QTableView>
#include "dialog.h"
#include "ui_dialog.h"
#include <QSqlQuery>
#include "Reader.cpp"

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

borrowBook::borrowBook(QWidget* parent, QMap<QString,int> _borrow,Ui::Reader _par):
QDialog(parent),borrow(_borrow),par(_par),
ui(new Ui::borrowBook)

{

    ui->setupUi(this);
    this->borrow=_borrow;
    ui->bookList->setModel(createmodel(ui->bookList,this->borrow));
    ui->bookList->setColumnWidth(0,495);





















}

borrowBook::~borrowBook()
{
    delete ui;
}

void borrowBook::on_requestbtn_clicked()
{
    for (auto it = borrow.begin(); it!=borrow.end(); ++it)
    {

         int currentQuantity;
         QSqlQuery selectquantity ("select * from book_info where book_name = '" + it.key()+"'");
         selectquantity.exec();

         currentQuantity = selectquantity.value(5).toInt();

         int x = currentQuantity + it.value();
         QSqlQuery query("UPDATE book_info SET quantity = " + QString::number(x) + " WHERE book_name = '" +it.key()+"'");
         query.exec();


    }
    displayBook(par);
    this->close();
}
