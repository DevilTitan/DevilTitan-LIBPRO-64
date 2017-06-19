#include "LIBPRO.h"
#include <QtWidgets/QApplication>
#include <QDebug>
#include <Qtime>


QSqlDatabase book_data;
QSqlDatabase libpro_user;
QSqlDatabase graph;
QString curTheme = ":/appscreen/Resources/appscreen/flat2 - Copy.png";

int main(int argc, char *argv[])
{
    book_data = QSqlDatabase::addDatabase("QMYSQL","book_data");

    book_data.setHostName("127.0.0.1");
    book_data.setUserName("DevilTitan");
    book_data.setPassword("DevilTitan");
    book_data.setDatabaseName("book_data");
    book_data.open();

    libpro_user = QSqlDatabase::addDatabase("QMYSQL","libpro_user"); ;
    libpro_user.setHostName("127.0.0.1");
    libpro_user.setUserName("DevilTitan");
    libpro_user.setPassword("DevilTitan");
    libpro_user.setDatabaseName("libpro_user");
    libpro_user.open();

    graph = QSqlDatabase::addDatabase("QMYSQL","graph"); ;
    graph.setHostName("127.0.0.1");
    graph.setUserName("DevilTitan");
    graph.setPassword("DevilTitan");
    graph.setDatabaseName("graph");
    graph.open();

    QApplication a(argc, argv);
    //DataProcessingTechnician x(0,new User(QString("Jaedong")));
   // Reader x(0,new User(QString("Jaedong")));
    LoginForm x;
    //signupForm x;
    //LIBPRO x(0,new User(QString("Jaedong")));
    x.show();
    return a.exec();
}


