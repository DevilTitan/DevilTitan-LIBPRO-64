#include "LIBPRO.h"
#include "ui_tooshort.h"

tooShort::tooShort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tooShort)
{
    ui->setupUi(this);

    QPixmap bkgnd(":/appscreen/Resources/appscreen/signup.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    this->setWindowTitle("Too Short");
}

tooShort::~tooShort()
{
    delete ui;
}
