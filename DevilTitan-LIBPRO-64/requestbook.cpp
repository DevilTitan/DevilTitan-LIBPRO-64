#include "requestbook.h"
#include "ui_requestbook.h"

RequestBook::RequestBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RequestBook)
{
    ui->setupUi(this);
}

RequestBook::~RequestBook()
{
    delete ui;
}
