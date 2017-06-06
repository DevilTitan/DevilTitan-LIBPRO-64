#include "DataProcessingTechnician.h"

DataProcessingTechnician::DataProcessingTechnician(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
    QPixmap bkgnd(":/appscreen/Resources/appscreen/2.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

DataProcessingTechnician::~DataProcessingTechnician()
{
}
