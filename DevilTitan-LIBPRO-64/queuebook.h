#ifndef QUEUEBOOK_H
#define QUEUEBOOK_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "user.h"
#include "global.h"
namespace Ui {
class QueueBook;
}

class QueueBook : public QDialog
{
    Q_OBJECT

public:
    explicit QueueBook(QWidget *parent = 0,User* curUser = NULL );
    void display();
    ~QueueBook();

private slots:
    void on_tableWidget_clicked(const QModelIndex &index);

    void on_removebtn_clicked();

private:
    Ui::QueueBook *ui;
    User* curUser;

    int curWaitIndex = -1;
};

#endif // QUEUEBOOK_H
