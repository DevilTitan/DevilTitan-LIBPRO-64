#pragma once

#include <QWidget>
#include "ui_Reader.h"
#include <QVector>
#include <QString>
#include <QSqlDatabase>
#include <Qset>


class Reader : public QWidget
{
	Q_OBJECT

public:
	Reader(QWidget *parent = Q_NULLPTR);
	~Reader();


private slots:

    void on_bookList_doubleClicked(const QModelIndex &index);

    void on_searchBar_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

private:
	Ui::Reader ui;
    QVector<QString> borrow;
    QString isbn ;
    QString name ;
    QString author ;
    QString year ;
    QString publisher;
    int quantity;
    QSqlDatabase rdb;

};
