#pragma once
#ifndef Librarian_H
#define Librarian_H
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
    void displayBook();

private slots:
    void on_borrowTable_clicked(const QModelIndex &index);

    void on_violationTable_clicked(const QModelIndex &index);


    void on_waitTable_clicked(const QModelIndex &index);

    void on_readerIDLe_textChanged(const QString &arg1);

private:
	QSqlDatabase *rdb,*vdb;
    int curBookRequestIndex;
    int curWaitIndex;
	Ui::Librarian ui;
};
#endif
