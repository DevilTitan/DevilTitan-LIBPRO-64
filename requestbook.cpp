#include "requestbook.h"
#include "ui_requestbook.h"
#include <QSqlDatabase>
#include <QSqlQuery>

RequestBook::RequestBook(QWidget *parent,User* curUser) :
    QDialog(parent),
    ui(new Ui::RequestBook)
{
    ui->setupUi(this);
    this->curUser = new User(*curUser);
}

RequestBook::~RequestBook()
{
    delete this->ui;
    delete this->curUser;
}

void RequestBook::on_pushButton_clicked()
{



}
