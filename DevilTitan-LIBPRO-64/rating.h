#ifndef RATING_H
#define RATING_H

#include <QDialog>
#include "user.h"
#include <QSqlError>
#include "global.h"

namespace Ui {
class Rating;
}

class Rating : public QDialog
{
    Q_OBJECT

public:
    explicit Rating(QWidget *parent = 0,User * curUser = NULL);
    ~Rating();
    void display();
    void setRate(int n);
    void setStar(int n);

private slots:
    void on_star1_clicked();

    void on_star2_clicked();

    void on_star3_clicked();

    void on_star4_clicked();

    void on_star5_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);





private:
    Ui::Rating *ui;
    User* curUser;
    QString curbook;
    int last_rate;
    QString curID;

};

#endif // RATING_H
