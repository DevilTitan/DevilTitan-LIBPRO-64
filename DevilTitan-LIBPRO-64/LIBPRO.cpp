#include "LIBPRO.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QString>
#include <QDebug>

LIBPRO::LIBPRO(QWidget *parent, User* curUser)
    : QMainWindow(parent), ui(new Ui::LIBPRO)
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

    LIBPRO::~LIBPRO()
    {
        delete ui;
        delete curUser;

    }


    void LIBPRO::on_reader_clicked()
    {
        this->role = QString("reader");
        ui->reader->setStyleSheet("background-color: rgba(86,95,109, .5);");
        ui->librarian->setStyleSheet("background-color: rgba(255,255,255,0.5)");
        ui->admin->setStyleSheet("background-color: rgba(255,255,255,0.5)");
        this->ui->data->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    }

    void LIBPRO::on_librarian_clicked()
    {
        this->role = QString("librarian");
        ui->librarian->setStyleSheet("background-color: rgba(86,95,109, .5);");
        ui->reader->setStyleSheet("background-color: rgba(255,255,255,0.5)");
        ui->admin->setStyleSheet("background-color: rgba(255,255,255,0.5)");
        ui->data->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    }

    void LIBPRO::on_admin_clicked()
    {
        this->role = QString("administrator");
        ui->admin->setStyleSheet("background-color: rgba(86,95,109, .5);");
        ui->librarian->setStyleSheet("background-color: rgba(255,255,255,0.5)");
        ui->reader->setStyleSheet("background-color: rgba(255,255,255,0.5)");
        ui->data->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    }

    void LIBPRO::on_data_clicked()
    {
        this->role = QString("dataProcessing");
        ui->data->setStyleSheet("background-color: rgba(86,95,109, .5);");
        ui->librarian->setStyleSheet("background-color: rgba(255,255,255,0.5)");
        ui->admin->setStyleSheet("background-color: rgba(255,255,255,0.5)");
        ui->reader->setStyleSheet("background-color: rgba(255,255,255,0.5)");
    }

void LIBPRO::on_loginButton_clicked()
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

            Librarian *w = new Librarian(0, curUser);
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
            this->close();
            if (parent!=0) parent->close();

        }


    }

    else
    {
       ui->errorlbl->setText("Authorization failed, You don't have permission to use this role. Please change to another role"
                             "or contact to the administrator for more information.");
    }


}
