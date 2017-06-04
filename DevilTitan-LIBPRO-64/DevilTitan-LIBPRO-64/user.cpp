#include "user.h"
#include <QSqlQuery>
#include <QVariant>
User::User(QString username)
{
    this->username = username;


    QSqlQuery qry ;
    qry.prepare("select * from user_account where username = '"+username+"'");
    if(qry.exec())
    {
        while (qry.next())
        {
             password = qry.value(2).toString();
             userID = qry.value(0).toString();
             // **************************
             //bổ sung role vào db////////
             //***************************


        }
    }


}

bool User::is(QString str)
{
    return role[str];
}
