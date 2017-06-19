#ifndef CHANGETHEME_H
#define CHANGETHEME_H

#include <QDialog>
#include "user.h"
#include "global.h"

namespace Ui {
class ChangeTheme;
}

class ChangeTheme : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeTheme(QWidget *parent = Q_NULLPTR,User* curUser = Q_NULLPTR);
    ~ChangeTheme();
    void changeTheme();
private slots:
    void on_theme2_clicked();

    void on_theme3_clicked();

    void on_theme4_clicked();

    void on_change_clicked();

    void on_cancel_clicked();


private:
    Ui::ChangeTheme *ui;
    int choice;
    QWidget* parent;
};

#endif // CHANGETHEME_H
