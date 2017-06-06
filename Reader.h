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
#include "user.h"
#include "LIBPRO.h"
#include "switchrole.h"

class Reader : public QWidget
{
	Q_OBJECT

public:
     Reader(QWidget *parent = Q_NULLPTR,User* curUser = Q_NULLPTR);
	 ~Reader();
     QMap<QString,int> borrow;
     void displaybook();
     Ui::Reader ui;
     
public slots:

     void on_addbtn_clicked();

     void on_removebtn_clicked();

     inline  void on_requestbtn_clicked();

     inline void on_logout_clicked();

private slots:

    void on_bookList_clicked(const QModelIndex &index);

    void on_searchBar_textChanged(const QString &arg1);

    void on_bookListbtn_clicked();

    inline void on_borrowBook_clicked(const QModelIndex &index);

    inline void on_rolebtn_clicked();

private:

    User* curUser ; 

    book curbook;

   
};

QStandardItemModel* createmodel(QObject* parent,QMap<QString,int> borrow);

 void Reader::on_requestbtn_clicked()
 {

     RequestBook a(0,this->curUser);
     a.exec();
     a.setModal(true);
 }

void Reader::on_borrowBook_clicked(const QModelIndex &index)
{


    const QAbstractItemModel * model = index.model();
    QString currentName =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
    QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("book_data"));
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


void Reader::on_logout_clicked()
{
    this->close();
    LIBPRO *w = new LIBPRO;
    w->show();
}


void Reader::on_rolebtn_clicked()
{
    SwitchRole* w = new SwitchRole(0,this->curUser);
    w->show();
    w->setModal(true);
}

#endif
