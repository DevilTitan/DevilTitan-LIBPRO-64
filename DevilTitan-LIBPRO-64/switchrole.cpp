#include "switchrole.h"
#include "ui_switchrole.h"

SwitchRole::SwitchRole(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SwitchRole)
{
    ui->setupUi(this);
}

SwitchRole::~SwitchRole()
{
    delete ui;
}
