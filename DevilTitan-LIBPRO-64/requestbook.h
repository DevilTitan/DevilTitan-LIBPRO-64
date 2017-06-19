#ifndef REQUESTBOOK_H
#define REQUESTBOOK_H

#include <QDialog>
#include "user.h"
#include "global.h"
namespace Ui {
class RequestBook;
}

class RequestBook : public QDialog
{
    Q_OBJECT

public:
    explicit RequestBook(QWidget *parent = 0, User* curUser = NULL);
    ~RequestBook();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RequestBook *ui;
    User* curUser ;

};

#endif // REQUESTBOOK_H
