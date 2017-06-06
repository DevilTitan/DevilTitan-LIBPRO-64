#pragma once

#include "ui_Librarian.h"

#include <QWidget>
#include <QVector>
#include <QString>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QMap>


class Librarian : public QWidget, public Ui::Librarian{
	Q_OBJECT

public:
	Librarian(QWidget *parent = Q_NULLPTR);
	~Librarian();
	void displayBook(Ui::Librarian ui);

private:
	QSqlDatabase *rdb,*vdb;
	Ui::Librarian ui;
};
