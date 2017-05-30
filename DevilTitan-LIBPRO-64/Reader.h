#pragma once

#include <QWidget>
#include "ui_Reader.h"
#include <QVector>
#include <QString>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QMap>
#include "book.h"
#include "borrowbook.h"


class Reader : public QWidget
{
	Q_OBJECT

public:
	Reader(QWidget *parent = Q_NULLPTR);
	~Reader();
     QMap<QString,int> borrow;


private slots:

    void on_bookList_clicked(const QModelIndex &index);

    void on_searchBar_textChanged(const QString &arg1);

    void on_addbtn_clicked();





    void on_bookListbtn_clicked();

    void on_removebtn_clicked();

private:
	Ui::Reader ui;

    book curbook;
    //QSqlDatabase rdb;
};
