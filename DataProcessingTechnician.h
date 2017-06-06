#pragma once

#include <QWidget>
#include "ui_DataProcessingTechnician.h"

class DataProcessingTechnician : public QWidget
{
	Q_OBJECT

public:
	DataProcessingTechnician(QWidget *parent = Q_NULLPTR);
	~DataProcessingTechnician();

private:
	Ui::DataProcessingTechnician ui;
};
