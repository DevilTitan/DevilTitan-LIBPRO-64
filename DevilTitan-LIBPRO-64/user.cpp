#include "LIBPRO.h"
#include <QSqlQuery>
#include <QVariant>
#include <QSqlDatabase>
#include <QDebug>
User::User(QString username)
{

    this->username = username;

    QSqlQuery qry (QSqlDatabase::database("libpro_user")) ;
    qry.prepare("select * from user_account where account_name = '"+ username +"'");
    if(qry.exec())
    {
        while (qry.next())
        {

             password = qry.value(2).toString();
             userID   = qry.value(0).toString();
             role[QString("reader")]=qry.value(4).toBool();
             role["librarian"]=qry.value(5).toBool();
             role["administrator"] = qry.value(6).toBool();
             role["dataProcessing"] = qry.value(7).toBool();

        }
    }



}

User::User()
{


}

bool User::is(QString str)
{
    return role[str];
}
