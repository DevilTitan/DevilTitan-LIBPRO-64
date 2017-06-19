#include "LIBPRO.h"
#include "ui_changetheme.h"

ChangeTheme::ChangeTheme(QWidget *parent,User* curUser) :
    QDialog(parent),
    ui(new Ui::ChangeTheme)
{
    this->parent=parent;
    ui->setupUi(this);
    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    this->setWindowTitle("Change Theme");
}

ChangeTheme::~ChangeTheme()
{
    delete ui;
}

void ChangeTheme::on_theme2_clicked()
{
    choice = 2;
    //ui->frame->setStyleSheet("border: 8px solid #C02F1D;");
  //  ui->frame_2->setStyleSheet("border: 8px solid #43ABC9;");
    //ui->frame_3->setStyleSheet("border: 8px solid #43ABC9;");
}

void ChangeTheme::on_theme3_clicked()
{
    choice = 3;
    //ui->frame_2->setStyleSheet("border: 8px solid #C02F1D;");
    //ui->frame->setStyleSheet("border: 8px solid #43ABC9;");
    //ui->frame_3->setStyleSheet("border: 8px solid #43ABC9;");
}

void ChangeTheme::on_theme4_clicked()
{
    choice = 4;
    //ui->frame_3->setStyleSheet("border: 8px solid #C02F1D;");
    //ui->frame->setStyleSheet("border: 8px solid #43ABC9;");
   //ui->frame_2->setStyleSheet("border: 8px solid #43ABC9;");
}

void ChangeTheme::changeTheme()
{
    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QPixmap bkgnd2(curTheme);
    bkgnd2 = bkgnd2.scaled(this->parent->size(), Qt::IgnoreAspectRatio);
    QPalette palette2;
    palette2.setBrush(QPalette::Background, bkgnd2);


    this->parent->setPalette(palette2);
}

void ChangeTheme::on_change_clicked()
{
    switch(choice)
    {
    case 2:
        curTheme = ":/appscreen/Resources/appscreen/2a.jpg";
        changeTheme();
        break;
    case 3:
        curTheme = ":/appscreen/Resources/appscreen/3a.jpg";
        changeTheme();
        break;
    case 4:
        curTheme = ":/appscreen/Resources/appscreen/flat2 - Copy.png";
        changeTheme();
        break;
    }
}

void ChangeTheme::on_cancel_clicked()
{
    this->close();
}
