#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>
#include <QTimer>
#include "switchrole.h"
#include "signupform.h"
#include "LIBPRO.h"

namespace Ui {
class LoginForm;
}

class LoginForm : public QDialog
{
    Q_OBJECT

public:
    explicit LoginForm(QWidget *parent = 0);
    ~LoginForm();

private slots:

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_login_clicked();

    void hideLabel();

    void on_signup_clicked();

private:
    Ui::LoginForm *ui;
};

#endif // LOGINFORM_H
