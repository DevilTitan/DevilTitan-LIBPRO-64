#include "Librarian.h"

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

Librarian::Librarian(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
    displayBook();
    QPixmap bkgnd(":/appscreen/Resources/appscreen/2.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


}

void Librarian::displayBook()

{
    QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("libpro_user")) ;
      qry->prepare("select * from book_request");
      qry->exec();

      QSqlQueryModel * modal = new QSqlQueryModel;
      modal ->setQuery(*qry);

      ui.borrowTable->setModel(modal);

      ui.borrowTable->setColumnWidth(2,300);
      ui.borrowTable->setColumnWidth(5,150);


      modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Username"));
      modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Number"));
      modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Book Name"));
      modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Author"));
      modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Publisher"));
      modal->setHeaderData(5, Qt::Horizontal, QObject:: tr("Date of request"));





}

Librarian::~Librarian(){
}

void Librarian::on_borrowTable_clicked(const QModelIndex &index)
{
      const QAbstractItemModel * model = index.model();
      curBookRequestIndex = model->data(model->index(index.row(),7),Qt::DisplayRole).toInt();
}

void Librarian::on_violationTable_clicked(const QModelIndex &index)
{

}



void Librarian::on_waitTable_clicked(const QModelIndex &index)
{
    const QAbstractItemModel * model = index.model();
    curWaitIndex=model->data(model->index(index.row(),7),Qt::DisplayRole).toInt();
}

void Librarian::on_readerIDLe_textChanged(const QString &cur)
{
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from book_request where username like '%" + search + "%'");
    qry->exec();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.borrowTable->setModel(modal);
    ui.borrowTable->setColumnWidth(2,300);
    ui.borrowTable->setColumnWidth(5,150);
    modal->setHeaderData(0, Qt::Horizontal, QObject::tr("Username"));
    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Number"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Book Name"));
    modal->setHeaderData(3, Qt::Horizontal, QObject::tr("Author"));
    modal->setHeaderData(4, Qt::Horizontal, QObject::tr("Publisher"));
    modal->setHeaderData(5, Qt::Horizontal, QObject:: tr("Date of request"));

}
