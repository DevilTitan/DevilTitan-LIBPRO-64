#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LIBPRO.h"

class LIBPRO : public QMainWindow
{
	Q_OBJECT

public:
	LIBPRO(QWidget *parent = Q_NULLPTR);

private:
	Ui::LIBPROClass ui;
};
