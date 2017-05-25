#pragma once

#include <QWidget>
#include "ui_Reader.h"

class Reader : public QWidget
{
	Q_OBJECT

public:
	Reader(QWidget *parent = Q_NULLPTR);
	~Reader();

private:
	Ui::Reader ui;
};
