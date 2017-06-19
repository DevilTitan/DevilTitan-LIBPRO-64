#include "LIBPRO.h"
#include "ui_changepassword.h"
#include <QDebug>
ChangePassword::ChangePassword(QWidget *parent,User *curUser) :
    QDialog(parent),
    ui(new Ui::ChangePassword)
{
    ui->setupUi(this);
    this->curUser = new User(*curUser);

    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    ui->username->setText(curUser->getUsername());
    ui->username->setAlignment(Qt::AlignCenter);

    ui->btn1->setEnabled(false);
    ui->btn2->setEnabled(false);
    ui->btn3->setEnabled(false);
    ui->error->setAlignment(Qt::AlignCenter);

}

ChangePassword::~ChangePassword()
{
    delete ui;
    delete curUser;
}

void ChangePassword::on_change_clicked()
{
    qDebug() << curUser->getpassword();
    QString newPassword = ui->newPassword->text();
    QString confirm = ui->confirm->text();
    QString currentPassword = ui->oldPassword->text();
    if(currentPassword!= curUser->getpassword())
    {
        ui->error->setText("Your old password is incorrect!!!");
        return;
    }
    if (newPassword!=confirm)
    {
        ui->error->setText("Your confirm password is incorrect!!!");
        return;
    }

    if (newPassword.size() < 10)
    {
        ui->error->setText("Your password is too short!!!!");
        return;
    }

    if(newPassword == currentPassword)
    {
         ui->error->setText("Your new password is same as your old password !!!");
         return;
    }
    else
    {
        QSqlQuery qry (QSqlDatabase::database("libpro_user"));
        qry.prepare("update user_account set password = '"+newPassword +"' where account_name = '" + curUser->getUsername()+"'");
        qry.exec();
        ui->error->setText("Your password has been changed!!!");
    }

}
