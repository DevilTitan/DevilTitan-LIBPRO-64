#include "LIBPRO.h"
#include "ui_requestbook.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QPixmap>
RequestBook::RequestBook(QWidget *parent,User* curUser) :
    QDialog(parent),
    ui(new Ui::RequestBook)
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


}

RequestBook::~RequestBook()
{
    delete this->ui;
    delete this->curUser;
}

void RequestBook::on_pushButton_clicked()
{



}
