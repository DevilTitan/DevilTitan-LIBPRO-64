#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "ui_Administrator.h"
#include "user.h"
#include "switchrole.h"

#include <QWidget>
#include <QVector>
#include <QString>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QMap>

class Administrator : public QWidget, public Ui::Administrator{
	Q_OBJECT

public:
    Administrator(QWidget *parent, User* curUser);
	~Administrator();
    void displayUserInfo(QString code);
    void displayAccountInfo(QString code);
    void data_collector(QString *value);
    void account_collector(QString *value);
    void errorInsert(int state);
    void qry_exec(QSqlQuery *&qry, QString code);

private slots:
    void on_maleCheckBox_stateChanged(int arg1);

    void on_femaleCheckBox_stateChanged(int arg1);

    void on_deleteButton_clicked();

    bool on_insertButton_clicked();

    bool on_searchButton_clicked();

    bool on_updateButton_clicked();

    bool on_insertButton_2_clicked();

    bool on_searchButton_2_clicked();

    void on_deleteButton_2_clicked();

    bool on_updateButton_2_clicked();

    void on_logOutButton_clicked();

    void on_roleButton_clicked();

    void on_messageButton_clicked();
private:
	Ui::Administrator ui;
    User *curuser;
};

#endif


