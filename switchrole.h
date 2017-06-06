#ifndef SWITCHROLE_H
#define SWITCHROLE_H

#include <QDialog>
#include "user.h"

namespace Ui {
class SwitchRole;
}

class SwitchRole : public QDialog
{
    Q_OBJECT

public:
    explicit SwitchRole(QWidget *parent = 0,User* curUser = NULL);
    ~SwitchRole();
    inline bool is(QString);

private slots:


    void on_reader_clicked();

    void on_librarian_clicked();

    void on_admin_clicked();

    void on_data_clicked();

    void on_cancel_clicked();

    void on_continue_2_clicked();

private:
    Ui::SwitchRole *ui;
    User* curUser;
    QString role;
    
};

#endif // SWITCHROLE_H
