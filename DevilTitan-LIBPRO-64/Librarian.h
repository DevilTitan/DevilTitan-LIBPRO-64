#pragma once

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QtableWidget>
#include <QTableWidgetItem>
#include "ui_Librarian.h"

class Librarian : public QWidget, public Ui::Librarian{
	Q_OBJECT

public:
	Librarian(QWidget *parent = Q_NULLPTR);
	~Librarian();
private:
	QSqlDatabase rdb;
};
