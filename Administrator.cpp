#include "Administrator.h"

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

Administrator::Administrator(QWidget *parent)
	: QWidget(parent)
{
    ui.setupUi(this);
    displayUserInfo();
    displayAccountInfo();
    QPixmap bkgnd(":/appscreen/Resources/appscreen/2.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

}

void Administrator::displayUserInfo(){
      QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("libpro_user")) ;
      qry->prepare("select * from user_info");
      qry->exec();

      QSqlQueryModel * modal = new QSqlQueryModel;
      modal ->setQuery(*qry);

      ui.userView->setModel(modal);

      ui.userView->setColumnWidth(2,300);
      ui.userView->setColumnWidth(5,150);


      modal->setHeaderData(0, Qt::Horizontal, QObject::tr("User ID"));
      modal->setHeaderData(1, Qt::Horizontal, QObject::tr("First name"));
      modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Last name"));
      modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Gender"));
      modal->setHeaderData(4, Qt::Horizontal, QObject::tr("date of birth"));
      modal->setHeaderData(5, Qt::Horizontal, QObject:: tr("Phone number"));
      modal->setHeaderData(6, Qt::Horizontal, QObject:: tr("Email"));
      modal->setHeaderData(7, Qt::Horizontal, QObject:: tr("Occupation"));
      modal->setHeaderData(8, Qt::Horizontal, QObject:: tr("Company/School"));
      modal->setHeaderData(9, Qt::Horizontal, QObject:: tr("Address"));
}

void Administrator::displayAccountInfo(){
    QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from user_account");
    qry->exec();

    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.accountView->setModel(modal);


    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("User ID"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Account name"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Password"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Active?"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Banned?"));
}

Administrator::~Administrator()
{
}
