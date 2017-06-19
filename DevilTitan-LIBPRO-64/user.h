#ifndef USER_H
#define USER_H
#include <QString>
#include <QMap>



class User
{
    QString username;
    QString password;
    QString userID;
    

public:
    User(QString username) ;
    User();
    inline QString getID();
    inline QString getUsername();
    inline QString getpassword();
    inline void setUsername(QString str);
    inline void setID(QString str);
    inline void setpassword(QString str);
    bool is(QString str); // kiểm tra role hợp lệ   administrator reader librarian dataProcessing
    QMap<QString,bool> role;

};

QString User::getID()
{
    return userID;
}
QString User::getUsername()
{
    return username;
}
void User::setUsername(QString str)
{
    username = str;
}
void User::setID(QString str)
{
   userID = str;
}
void User::setpassword(QString str)
{
    password = str;
}

QString User::getpassword()
{
    return password;
}


#endif // USER_H
