#pragma once
#include "ui_Administrator.h"

#include <QWidget>
#include <QVector>
#include <QString>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QMap>

class Administrator : public QWidget, public Ui::Administrator{
	Q_OBJECT

public:
	Administrator(QWidget *parent = Q_NULLPTR);
	~Administrator();
    void displayUserInfo();
    void displayAccountInfo();

private:
	Ui::Administrator ui;
};
