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
#include <QDateTime>
#include "requestbook.h"
#include "user.h"
#include "switchrole.h"
#include "notification.h"
#include "rentingbook.h"
#include "queuebook.h"
#include "accountstatistic.h"
#include "rating.h"
#include "global.h"
#include "changetheme.h"

class Reader : public QWidget
{
	Q_OBJECT

public:
     Reader(QWidget *parent = Q_NULLPTR,User* curUser = Q_NULLPTR);
	 ~Reader();
     QMap<QString,int> borrow;
     void displaybook();
     Ui::Reader ui;
     void displayNotify();

     
public slots:

     void on_addbtn_clicked();

     void on_removebtn_clicked();

     void on_requestbtn_clicked();

     void on_logout_clicked();

private slots:



   void on_searchBar_textChanged(const QString &arg1);

    void on_bookListbtn_clicked();

    void on_borrowBook_clicked(const QModelIndex &index);

    void on_rolebtn_clicked();

    void on_accountbtn_clicked();

    void on_publicChat_3_clicked();

    void on_publicChat_clicked();

      void on_bookList_clicked(const QModelIndex &index);

      void on_logout_2_clicked();

      void on_publicChat_4_clicked();



      void on_rate_clicked();

    void on_publicChat_5_clicked();

private:

    User* curUser ; 

    book curbook;

   
};

QStandardItemModel* createmodel(QObject* parent,QMap<QString,int> borrow) ;

#endif
