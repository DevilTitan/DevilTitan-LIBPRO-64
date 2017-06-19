#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlDatabase>
#include "user.h"
#include "global.h"

namespace Ui {
class Notification;
}

class Notification : public QDialog
{
    Q_OBJECT

public:
    explicit Notification(QWidget *parent = 0,User* curUser= NULL);
    ~Notification();
    void display();

private slots:


private:
    Ui::Notification *ui;
    User* curUser;

};

#endif // NOTIFICATION_H
