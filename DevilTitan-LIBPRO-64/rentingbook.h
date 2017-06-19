#ifndef RENTINGBOOK_H
#define RENTINGBOOK_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include "user.h"
#include "global.h"
namespace Ui {
class RentingBook;
}

class RentingBook : public QDialog
{
    Q_OBJECT

public:
    void display();
    explicit RentingBook(QWidget *parent = 0,User* curUser = NULL);
    ~RentingBook();

private:
    Ui::RentingBook *ui;
    User* curUser;

};

#endif // RENTINGBOOK_H
