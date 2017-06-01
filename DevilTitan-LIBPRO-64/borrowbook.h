#ifndef BORROWBOOK_H
#define BORROWBOOK_H

#include <QWidget>
#include <QString>
#include <QMap>
#include <QtWidgets/QMainWindow>
#include "dialog.h"
#include "ui_dialog.h"
#include "Reader.h"
namespace Ui {
class borrowBook;
}

class borrowBook : public QDialog
{
    Q_OBJECT

public:
     borrowBook(QWidget* parrent=0,QMap<QString,int> borrow = QMap<QString,int>(), Ui::Reader par = Ui::Reader());
     QMap<QString,int> borrow;
    ~borrowBook();
     Ui::Reader par;
private slots:
     void on_requestbtn_clicked();

private:
    Ui::borrowBook *ui;


};

#endif // BORROWBOOK_H
