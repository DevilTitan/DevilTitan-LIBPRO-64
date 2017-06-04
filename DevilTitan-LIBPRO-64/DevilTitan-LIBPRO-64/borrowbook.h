#ifndef BORROWBOOK_H
#define BORROWBOOK_H


#include <QtWidgets/QMainWindow>
#include "dialog.h"
#include "ui_dialog.h"
#include "Reader.h"
#include "book.h"


namespace Ui {
class borrowBook;
}

class borrowBook : public QDialog
{
    Q_OBJECT

public:
     borrowBook(QWidget* parrent=0,QMap<QString,int> &borrow = QMap<QString,int>(), Reader* w = 0);
     inline void clear() { clearptr->clear();};
    ~borrowBook();
     void displaybook();

private slots:
     void on_requestbtn_clicked();

     void on_removebtn_clicked();

     void on_increasebtn_clicked();

     void on_bookList_clicked(const QModelIndex &index);

     void on_decreasebtn_clicked();

     void on_cancelbtn_clicked();

private:
    Ui::borrowBook *ui;
    QMap<QString,int>* clearptr;
    Reader * par;
    QMap<QString,int> borrow;
    book curbook;
};

#endif // BORROWBOOK_H
