#pragma once

#include <QWidget>
#include "ui_DataProcessingTechnician.h"
#include "user.h"
#include "global.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>
#include "QSqlError"
#include <QSqlQueryModel>

class DataProcessingTechnician : public QWidget
{
	Q_OBJECT

public:
    DataProcessingTechnician(QWidget *parent = Q_NULLPTR,User * curUser = NULL);
	~DataProcessingTechnician();
    void displaybook();
    void clear();


private slots:
    void on_waitTable_clicked(const QModelIndex &index);

    void on_bookTable_clicked(const QModelIndex &index);

    void on_isbnsearch_textChanged(const QString &arg1);

    void on_booknamesearch_textChanged(const QString &arg1);

    void on_requestTable_clicked(const QModelIndex &index);

    void on_insertButton_2_clicked();

    void on_isbn_editingFinished();

    void on_searchButton_clicked();

    void on_insertButton_clicked();

    void on_searchButton_3_clicked();

private:
	Ui::DataProcessingTechnician ui;
    QString curISBN;
    int curidx;
    User* curUser;

};
