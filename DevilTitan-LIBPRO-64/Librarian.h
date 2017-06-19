#ifndef Librarian_H
#define Librarian_H
#include "ui_Librarian.h"
#include <QSqlError>
#include <QWidget>
#include <QVector>
#include <QString>
#include <QSqlDatabase>
#include <QStandardItemModel>
#include <QMap>
#include <QTime>
#include <QDateTime>
#include "user.h"
#include "global.h"

class Librarian : public QWidget, public Ui::Librarian{
	Q_OBJECT

public:
    Librarian(QWidget *parent = Q_NULLPTR,User* curUser = NULL);
	~Librarian();
    void displayBook();
    void displayNotify();

private slots:
    void on_borrowTable_clicked(const QModelIndex &index);



    void on_waitTable_clicked(const QModelIndex &index);

    void on_readerIDLe_textChanged(const QString &arg1);

    void on_insertButton_clicked();

    void on_readerIDLe_3_textChanged(const QString &arg1);

    void on_searchButton_3_clicked();

    void on_searchButton_clicked();

    void on_insertButton_3_clicked();

    void on_insertButton_4_clicked();

    void on_renting_clicked(const QModelIndex &index);

    void on_readerIDLe_2_textChanged(const QString &arg1);

    void on_yearLe_textChanged(const QString &arg1);

    void on_publicChat_2_clicked();

    void on_publicChat_3_clicked();

    void on_number_textChanged(const QString &arg1);


    void on_readerIDLe_4_textChanged(const QString &arg1);

    void on_insertButton_5_clicked();

    void on_readerIDLe_2_cursorPositionChanged(int arg1, int arg2);

    void on_violationLe_textChanged(const QString &arg1);

    void on_book_name_textChanged(const QString &arg1);

    void on_book_name_cursorPositionChanged(int arg1, int arg2);

    void on_readerIDLe_3_cursorPositionChanged(int arg1, int arg2);

    void on_theme_clicked();

    void on_logout_clicked();

    void on_publicChat_6_clicked();

    void updateTime();

private:

    int curBookRequestIndex = -1;
    int curWaitIndex = -1 ;
    int curRentIndex = -1;
    bool isViolation = false;
    User* curUser;
	Ui::Librarian ui;
    int number_of_day = 14;
    int number_of_book = -1;
    QTimer *count;
    QTime now;
    QDateTime date;
};
#endif
