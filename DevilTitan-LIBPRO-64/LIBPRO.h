#ifndef LIBPRO_H
#define LIBPRO_H
#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LIBPRO.h"
#include "Administrator.h"
#include "bookData.h"
#include "borrowbook.h"
#include "DataProcessingTechnician.h"
#include "global.h"
#include "Librarian.h"
#include "Reader.h"
#include "requestbook.h"
#include "Role.h"
#include "switchrole.h"
#include "accountstatistic.h"
#include "changepassword.h"
#include "changetheme.h"
#include "loginform.h"
#include "notification.h"
#include "user.h"
#include "qcustomplot.h"
#include "queuebook.h"
#include "rating.h"
#include "rentingbook.h"
#include "signupform.h"
#include "tooshort.h"
#include "sendNotification.h"

namespace Ui {
class LIBPRO;
}

class LIBPRO : public QMainWindow
{
	Q_OBJECT

public:
    explicit LIBPRO(QWidget *parent = 0,User* curUser = NULL);
    ~LIBPRO();
    inline bool is(QString);

private slots:


    void on_reader_clicked();

    void on_librarian_clicked();

    void on_admin_clicked();

    void on_data_clicked();

    void on_loginButton_clicked();

private:
    Ui::LIBPRO *ui;
    User* curUser;
    QString role;

    QWidget* parent;


};

#endif
