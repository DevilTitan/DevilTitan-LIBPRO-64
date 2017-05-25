#include "Reader.h"
#include <QPixmap>

Reader::Reader(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
    //QPixmap pix("C:/Users/ASUS/Downloads/DevilTitan-LIBPRO-master (1)/DevilTitan-LIBPRO-master/LIBPRO/Resources/icon/book.jpg");
    //ui->book->setPixMap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

Reader::~Reader()
{
}
