#include "LIBPRO.h"
#include "Librarian.h"
#include "Reader.h"
#include <QtWidgets/QApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
QSqlDatabase book_data;
QSqlDatabase libpro_user;



int main(int argc, char *argv[])
{
    book_data = QSqlDatabase::addDatabase("QMYSQL","book_data");
    book_data.setHostName("127.0.0.1");
    book_data.setUserName("DevilTitan");
    book_data.setPassword("DevilTitan");
    book_data.setDatabaseName("book_data");

    libpro_user = QSqlDatabase::addDatabase("QMYSQL","libpro_user"); ;
    libpro_user.setHostName("127.0.0.1");
    libpro_user.setUserName("DevilTitan");
    libpro_user.setPassword("DevilTitan");
    libpro_user.setDatabaseName("libpro_user");
    libpro_user.open();

    QApplication a(argc, argv);
    Reader w(0,new User(QString("Donald Trump")));
    w.show();
	return a.exec();
}
