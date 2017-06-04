#ifndef USER_H
#define USER_H
#include <QString>
#include <QMap>



class User
{
    QString username;
    QString password;
    QString userID;
    QMap<QString,bool> role;

public:
    User(QString username) ;
    inline QString getID();
    bool is(QString str); // kiểm tra role hợp lệ


};

QString User::getID()
{
    return userID;
}

#endif // USER_H
