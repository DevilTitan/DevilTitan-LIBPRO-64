#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QDialog>
#include "user.h"
#include "global.h"
#include <QSqlQuery>
#include <QSqlDatabase>

namespace Ui {
class ChangePassword;
}

class ChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent = 0,User* curUser= NULL);
    ~ChangePassword();

private slots:
    void on_change_clicked();

private:
    Ui::ChangePassword *ui;
    User* curUser;
};

#endif // CHANGEPASSWORD_H
