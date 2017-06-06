#include "aftersendingrequest.h"
#include "ui_aftersendingrequest.h"

afterSendingRequest::afterSendingRequest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afterSendingRequest)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/appscreen/Resources/appscreen/2.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

afterSendingRequest::~afterSendingRequest()
{
    delete ui;
}
