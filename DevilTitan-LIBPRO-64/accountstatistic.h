#ifndef ACCOUNTSTATISTIC_H
#define ACCOUNTSTATISTIC_H

#include <QDialog>
#include "user.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "global.h"

namespace Ui {
class AccountStatistic;
}

class AccountStatistic : public QDialog
{
    Q_OBJECT

public:
    AccountStatistic(QWidget *parent = Q_NULLPTR,User* curUser = Q_NULLPTR);
    ~AccountStatistic();

private slots:
    void makePlot();
private:
    Ui::AccountStatistic *ui;
    User* curUser ;

};

#endif // ACCOUNTSTATISTIC_H
