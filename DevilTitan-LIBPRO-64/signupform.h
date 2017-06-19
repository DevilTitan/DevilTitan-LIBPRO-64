#ifndef SIGNUPFORM_H
#define SIGNUPFORM_H

#include <QDialog>
#include <QGraphicsEffect>
#include "loginform.h"
#include "global.h"
namespace Ui {
class signupForm;
}

class signupForm : public QDialog
{
    Q_OBJECT

public:
    explicit signupForm(QWidget *parent = 0);
    ~signupForm();

private slots:

    void on_userName_textChanged(const QString &arg1);

    void on_userName_editingFinished();

    void on_email_textChanged(const QString &arg1);

    void on_email_editingFinished();

    void on_password_textChanged(const QString &arg1);

    void on_password_editingFinished();

    void on_confirm_textChanged(const QString &arg1);

    void on_confirm_editingFinished();

    void on_signup_clicked();

    void on_login_clicked();

    void hideLabel();
    void on_identification_textChanged(const QString &arg1);

    void on_identification_editingFinished();

private:
    Ui::signupForm *ui;
    QGraphicsDropShadowEffect* effect;

};

#endif // SIGNUPFORM_H
