#ifndef Reader_H
#define Reader_H

#include <QWidget>
#include "ui_Reader.h"
#include <QVector>
#include <QString>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QMap>
#include <QStandardItemModel>
#include "book.h"
#include <QSqlQuery>
#include "requestbook.h"


class Reader : public QWidget
{
	Q_OBJECT

public:
	Reader(QWidget *parent = Q_NULLPTR);
	~Reader();
     QMap<QString,int> borrow;
     void open() ;
     void displaybook();
     Ui::Reader ui;
public slots:

     void on_addbtn_clicked();



     void on_removebtn_clicked();

     inline  void on_requestbtn_clicked();

private slots:

    void on_bookList_clicked(const QModelIndex &index);

    void on_searchBar_textChanged(const QString &arg1);

    void on_bookListbtn_clicked();





    inline void on_borrowBook_clicked(const QModelIndex &index);

private:


    book curbook;

    bool isOpen = false;

    QSqlDatabase rdb = QSqlDatabase::addDatabase("QMYSQL");
};

QStandardItemModel* createmodel(QObject* parent,QMap<QString,int> borrow);

 void Reader::on_requestbtn_clicked()
 {

     RequestBook a;
     a.exec();
     a.setModal(true);
 }
void Reader::on_borrowBook_clicked(const QModelIndex &index)
{
    this->open();

    const QAbstractItemModel * model = index.model();
    QString currentName =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
    QSqlQuery *qry = new QSqlQuery;
    qry->prepare("select * from book_info where book_name ='"+ currentName + "'");


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



#endif
