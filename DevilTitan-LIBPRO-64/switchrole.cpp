
#include "ui_switchrole.h"
#include "LIBPRO.h"

SwitchRole::SwitchRole(QWidget *parent,User* curUser) :
    QDialog(parent),
    ui(new Ui::SwitchRole)
{
    ui->setupUi(this);
    this->curUser = new User(*curUser);

    this->parent=parent;


    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

SwitchRole::~SwitchRole()
{
    delete ui;
    delete curUser;

}


void SwitchRole::on_reader_clicked()
{
    this->role = QString("reader");
    this->ui->reader->setStyleSheet("background-color: rgba(86,95,109, .5);");
    this->ui->librarian->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    this->ui->admin->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    this->ui->data->setStyleSheet("background-color: rgba(255,255,255,0.5)");
}

void SwitchRole::on_librarian_clicked()
{
    this->role = QString("librarian");
    this->ui->librarian->setStyleSheet("background-color: rgba(86,95,109, .5);");
    this->ui->reader->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    this->ui->admin->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    this->ui->data->setStyleSheet("background-color: rgba(255,255,255,0.5)");
}

void SwitchRole::on_admin_clicked()
{
    this->role = QString("administrator");
    this->ui->admin->setStyleSheet("background-color: rgba(86,95,109, .5);");
    this->ui->librarian->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    this->ui->reader->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    this->ui->data->setStyleSheet("background-color: rgba(255,255,255,0.5)");
}

void SwitchRole::on_data_clicked()
{
    this->role = QString("dataProcessing");
    this->ui->data->setStyleSheet("background-color: rgba(86,95,109, .5);");
    this->ui->librarian->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    this->ui->admin->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    this->ui->reader->setStyleSheet("background-color: rgba(255,255,255,0.5)");
}

void SwitchRole::on_cancel_clicked()
{
    this->close();

}

void SwitchRole::on_continue_2_clicked()
{
    if(this->curUser->is(this->role))
    {
        /// mở cửa sổ tương ứng


        if ( this->role == "reader")
        {

            Reader *w = new Reader (0,curUser);
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
            this->close();
           if (parent!=0) parent->close();

        }

        if ( this->role == "administrator")
        {

            Administrator *w = new Administrator (0,curUser);
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
            this->close();
           if (parent!=0) parent->close();


        }


        if ( this->role == "librarian")
        {

            Librarian *w = new Librarian(0,curUser);
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
            this->close();
            if (parent!=0) parent->close();

        }


    }

    else 
    {
       ui->errorlbl->setText("Bạn éo có quyền này.........");
    }


}
