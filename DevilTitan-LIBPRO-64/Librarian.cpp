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
#include <algorithm>
#include <QStandardItemModel>
#include <QSet>

Librarian::Librarian(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	displayBook(ui);
	QPixmap bkgnd(":/appscreen/Resources/appscreen/1.png");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
}

void displayBook(Ui::Librarian ui)

{
	QSqlDatabase rdb;
	rdb = QSqlDatabase::addDatabase("QMYSQL");
	rdb.setHostName("127.0.0.1");
	rdb.setUserName("DevilTitan");
	rdb.setPassword("DevilTitan");
	rdb.setDatabaseName("libpro_user");
	rdb.open();

	QSqlQuery *qry = new QSqlQuery;
	qry->prepare("SELECT * FROM reader_rent ORDER BY due_date DESC");
	qry->exec();

	QSqlQueryModel * modal = new QSqlQueryModel;
	modal->setQuery(*qry);

	ui.borrowTable->setModel(modal);


	ui.borrowTable->resizeColumnToContents(1);
	ui.borrowTable->setColumnWidth(0, 380);
	ui.borrowTable->setColumnWidth(1, 165);
	ui.borrowTable->setColumnWidth(2, 75);
	ui.borrowTable->setColumnWidth(3, 50);

	modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Tên sách"));
	modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Tác giả"));
	modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Số lượng"));
	modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Xếp hạng"));

}

Librarian::~Librarian(){
}
