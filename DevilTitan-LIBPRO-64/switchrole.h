#ifndef SWITCHROLE_H
#define SWITCHROLE_H

#include <QDialog>

namespace Ui {
class SwitchRole;
}

class SwitchRole : public QDialog
{
    Q_OBJECT

public:
    explicit SwitchRole(QWidget *parent = 0);
    ~SwitchRole();

private:
    Ui::SwitchRole *ui;
};

#endif // SWITCHROLE_H
