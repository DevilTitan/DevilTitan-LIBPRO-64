
#include "ui_signupform.h"
#include "LIBPRO.h"
#include <QGraphicsEffect>
#include <QSqlQuery>
#include <QVariant>
#include <QSqlDatabase>
signupForm::signupForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signupForm)
{
    ui->setupUi(this);

    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setColor(QColor("#c1c1c1"));
    effect->setOffset(1, 1);
    ui->login->setGraphicsEffect(effect);

    ui->warning->hide();
    ui->warning->setAlignment(Qt::AlignHCenter);

    this->setWindowTitle("Sign Up");
}

signupForm::~signupForm()
{
    delete ui;
}

void signupForm::on_userName_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->userName->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500; background-color: white; border-radius: 2px;");
    }
    else
    {
        ui->userName->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
    }
}

void signupForm::on_userName_editingFinished()
{
    ui->userName->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_email_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->email->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500;background-color: white; border-radius: 2px;");
    }
    else
        ui->email->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_email_editingFinished()
{
    ui->email->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_password_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->password->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500;background-color: white; border-radius: 2px;");
    }
    else
        ui->password->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_password_editingFinished()
{
    ui->password->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_confirm_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->confirm->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500;background-color: white; border-radius: 2px;");
    }
    else
        ui->confirm->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");

}

void signupForm::on_confirm_editingFinished()
{
    ui->confirm->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}

void signupForm::on_signup_clicked()
{
    bool identificationCheck = true;
    bool accountNameCheck = true;

    QSqlQuery qry (QSqlDatabase::database("libpro_user")) ;
    qry.prepare("select * from user_account");

    if (qry.exec())
    {
        while (qry.next())
        {
            if (qry.value(0).toString() == ui->identification->text())
                identificationCheck = false;
            if (qry.value(1).toString() == ui->userName->text())
                accountNameCheck = false;
        }
    }

    bool check = false;
    for (int i = 0; i < ui->email->text().size(); i++)
    {
        if (ui->email->text()[i] == '@')
            check = true;
    }

    if (ui->identification->text() == "" || ui->userName->text() ==  "" || ui->password->text() == ""
            || ui->confirm->text() == "" || ui->email->text()  == "")
    {
        ui->warning->setText("SOME FIELD IS MISSING!");
        ui->warning->show();
        QTimer::singleShot(3000, this, SLOT(hideLabel()));
    }
    else if (ui->identification->text().size() != 9)
    {
        ui->warning->setText("INVALID IDENTIFICATION");
        ui->warning->show();
        QTimer::singleShot(3000, this, SLOT(hideLabel()));
    }
    else if (!check)
    {
        ui->warning->setText("INVALID EMAIL");
        ui->warning->show();
        QTimer::singleShot(3000, this, SLOT(hideLabel()));
    }
    else if (!identificationCheck)
    {
        ui->warning->setText("IDENTIFICATION ALREADY EXISTS!");
        ui->warning->show();
        QTimer::singleShot(3000, this, SLOT(hideLabel()));
    }
    else if (ui->identification->text().size() < 5 || ui->userName->text().size() < 5 || ui->password->text().size() < 5
             || ui->confirm->text().size() < 5 || ui->email->text().size() < 5)
    {
        ui->warning->setText("SHORT ACCOUNT AND PASSWORD");
        ui->warning->show();
        QTimer::singleShot(3000, this, SLOT(hideLabel()));
    }
    else if (!accountNameCheck)
    {
        ui->warning->setText("ACCOUNT NAME ALREADY EXISTS");
        ui->warning->show();
        QTimer::singleShot(3000, this, SLOT(hideLabel()));
    }
    else if (ui->password->text() != ui->confirm->text())
    {
        ui->warning ->setText("PASSWORDS DO NOT MATCH");
        ui->warning->show();
        QTimer::singleShot(3000, this, SLOT(hideLabel()));
    }
    else
    {
        QSqlQuery qry1 (QSqlDatabase::database("libpro_user"));
        qry1.exec("insert into `user_account` (`user_id`, `account_name`, `password`) values "
                           "(" + ui->identification->text() + ", " + ui->userName->text() + ", " + ui->password->text() + ")");
        qry1.exec("insert into `user_info` (`user_id`, `email`) values (" + ui->identification->text() + ", " + ui->email->text() + ")");

        QSqlQuery qry2 (QSqlDatabase::database("graph"));
        qry2.exec("CREATE TABLE IF NOT EXISTS " + ui->userName->text() + " (date DATE PRIMARY KEY, quantity int(5) NOT NULL DEFAULT '0')");

    }
}

void signupForm::on_login_clicked()
{
    LoginForm*w = new LoginForm;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->show();
    this->close();
}

void signupForm::hideLabel()
{
    ui->warning->hide();
}

void signupForm::on_identification_textChanged(const QString &arg1)
{
    if (arg1 != "")
    {
        ui->identification->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 3px solid #25D500; background-color: white; border-radius: 2px;");
    }
    else
    {
        ui->identification->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
    }

}


void signupForm::on_identification_editingFinished()
{
    ui->identification->setStyleSheet("border-top: 1px solid rgb(250, 250, 250);border-left: 1px solid rgb(250, 250, 250);border-right: 1px solid rgb(250, 250, 250);border-bottom: 1px solid gray;background-color: white; border-radius: 2px;");
}
