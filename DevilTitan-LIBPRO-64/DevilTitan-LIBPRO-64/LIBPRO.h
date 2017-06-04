#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LIBPRO.h"

class LIBPRO : public QMainWindow, public Ui::LIBPRO{
	Q_OBJECT

public:
	LIBPRO(QWidget *parent = Q_NULLPTR);

private:
	Ui::LIBPRO ui;
};
