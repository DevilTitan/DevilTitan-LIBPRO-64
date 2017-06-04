#include "Librarian.h"
#include <qdebug.h>
Librarian::Librarian(QWidget *parent)
	: QWidget(parent)
{
	setupUi(this);

	rdb = QSqlDatabase::addDatabase("QMYSQL");
	rdb.setHostName("127.0.0.1");
	rdb.setUserName("DevilTitan");
	rdb.setPassword("DevilTitan");
	rdb.setDatabaseName("libpro_user");

	if (rdb.open()) {
		qDebug() << " opened ";
		QSqlQuery rquery(rdb);
		if (rquery.exec("SELECT * FROM reader_rent")) {
			while (rquery.next()) {
				qDebug() << rquery.value(0) << rquery.value(1) << rquery.value(2) << rquery.value(3) << rquery.value(4);

				QString user_id = rquery.value(0).toString();
				QString borrow_book = rquery.value(1).toString();
				QString isbn = rquery.value(2).toString();
				QString borrow_date = rquery.value(3).toString();
				QString due_date = rquery.value(4).toString();

				this->borrowTable->setRowCount(this->borrowTable->rowCount() + 1);

				QTableWidgetItem *user_idItem = new QTableWidgetItem(user_id);
				QTableWidgetItem *borrow_bookItem = new QTableWidgetItem(borrow_book);
				QTableWidgetItem *isbnItem = new QTableWidgetItem(isbn);
				QTableWidgetItem *borrow_dateItem = new QTableWidgetItem(borrow_date);
				QTableWidgetItem *due_dateItem = new QTableWidgetItem(due_date);

				int row = this->borrowTable->rowCount();

				this->borrowTable->setItem(row - 1, 0, user_idItem);
				this->borrowTable->setItem(row - 1, 1, borrow_bookItem);
				this->borrowTable->setItem(row - 1, 2, isbnItem);
				this->borrowTable->setItem(row - 1, 3, borrow_dateItem);
				this->borrowTable->setItem(row - 1, 4, due_dateItem);
			}
		}
	}
	else
		qDebug() << rdb.lastError();

}

Librarian::~Librarian()
{
}
