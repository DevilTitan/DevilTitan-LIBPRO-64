#pragma once

#include <QWidget>
#include "ui_Administrator.h"

class Administrator : public QWidget
{
	Q_OBJECT

public:
	Administrator(QWidget *parent = Q_NULLPTR);
	~Administrator();

private:
	Ui::Administrator ui;
};
