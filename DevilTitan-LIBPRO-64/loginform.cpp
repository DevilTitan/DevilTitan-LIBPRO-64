#include "LIBPRO.h"
#include "ui_loginform.h"
#include <QTime>
#include <QDebug>

LoginForm::LoginForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    QTime now;
    if(now.currentTime().hour() >= 5  && now.currentTime().hour() < 13)
    {
        ui->greeting->setText("Good morning!");
        ui->subgreeting->setText("It will be an awesome day!");
    }
    else if (now.currentTime().hour() < 17)
    {
        ui->greeting->setText("Good afternoon!");
        ui->subgreeting->setText("How have you been?");
    }
    else if (now.currentTime().hour() < 23)
    {
        ui->greeting->setText("Good evening!");
        ui->subgreeting->setText("Seems you've been working hard, it's time to have a rest!");
    }
    else
    {
        ui->greeting->setText("Good night!");
        ui->subgreeting->setText("Good night, nice dreams, love and peace!");
    }

    ui->warning->hide();
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_lineEdit_textChanged(const QString &arg1)
{
    ui->lineEdit->setStyleSheet("border: 2px solid green; border-radius: 2px; font-size: 15px;");
    ui->lineEdit_2->setStyleSheet("background-color: rgb(239, 239, 239);border: 0;text-indent: 10px;border-radius: 2px;font-family:Roboto;font-size:16px;padding:5px;");
}

void LoginForm::on_lineEdit_2_textChanged(const QString &arg1)
{
    ui->lineEdit_2->setStyleSheet("border: 2px solid green; border-radius: 2px;font-size: 15px;");
    ui->lineEdit->setStyleSheet("background-color: rgb(239, 239, 239);border: 0;text-indent: 10px;border-radius: 2px;font-family:Roboto;font-size:16px;padding:5px;");
}

void LoginForm::hideLabel()
{
    ui->warning->hide();
}

void LoginForm::on_login_clicked()
{

    bool matchCondition = 1;

    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    User current(username);
//    if(current.getpassword()=="")   //tên đăng nhập k  tồn tại
//        matchCondition = 0;
//    else if (current.getpassword()!= password)  // sai password
//        matchCondition=0;
//    else  // đúng
//        matchCondition =1;


    if (!matchCondition)
    {
        ui->warning->show();
        QTimer::singleShot(4000, this, SLOT(hideLabel()));
    }
    else
    {
        this->close();
        LIBPRO* x = new LIBPRO(0, &current);
//        SwitchRole*x = new SwitchRole(0, &current);
        x->show();
    }

}

void LoginForm::on_signup_clicked()
{
    signupForm *w = new signupForm;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}
