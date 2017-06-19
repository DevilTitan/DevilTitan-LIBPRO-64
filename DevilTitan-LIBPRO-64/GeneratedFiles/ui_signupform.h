/********************************************************************************
** Form generated from reading UI file 'signupform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signupForm
{
public:
    QFrame *frame;
    QLabel *label_5;
    QLineEdit *userName;
    QLineEdit *email;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *password;
    QLineEdit *confirm;
    QLabel *label_8;
    QPushButton *signup;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *frame_3;
    QLabel *label_9;
    QPushButton *login;
    QLabel *label_3;
    QLineEdit *identification;
    QLabel *warning;

    void setupUi(QDialog *signupForm)
    {
        if (signupForm->objectName().isEmpty())
            signupForm->setObjectName(QStringLiteral("signupForm"));
        signupForm->resize(700, 700);
        signupForm->setStyleSheet(QLatin1String("QLineEdit{font-family: Roboto; font-size: 15px; background-color: white; color:#422b25}\n"
"QLabel{font-family: Roboto; color: white;}\n"
"QFrame{background-color:rgba(250,250,250, 0.8); border-radius: 3px;\n"
"}"));
        frame = new QFrame(signupForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(170, 30, 361, 641));
        frame->setStyleSheet(QLatin1String("#signup\n"
"{\n"
"background-color: rgb(98, 175, 229);\n"
"border: 0px;\n"
"border-radius: 2px;\n"
"font-size: 15px;\n"
"font-family: Roboto;\n"
"color: white;\n"
"}\n"
"#signup:hover\n"
"{\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #1496bb, stop: 1 rgb(46, 150, 223));\n"
"/*background-color: rgb(46, 150, 223);*/\n"
"border: 0px;\n"
"border-radius: 2px;\n"
"font-size: 15px;\n"
"font-family: Roboto;\n"
"color: white;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 250, 101, 16));
        label_5->setStyleSheet(QLatin1String("font-size: 15px;\n"
"background-color: transparent;\n"
""));
        userName = new QLineEdit(frame);
        userName->setObjectName(QStringLiteral("userName"));
        userName->setGeometry(QRect(20, 270, 321, 31));
        userName->setStyleSheet(QLatin1String("border-top: 1px solid rgb(250, 250, 250);\n"
"border-left: 1px solid rgb(250, 250, 250);\n"
"border-right: 1px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid gray;\n"
"border-radius:2px;\n"
"background-color: white;"));
        email = new QLineEdit(frame);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(20, 200, 321, 31));
        email->setStyleSheet(QLatin1String("border-top: 1px solid rgb(250, 250, 250);\n"
"border-left: 1px solid rgb(250, 250, 250);\n"
"border-right: 1px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid gray;\n"
"border-radius:2px;\n"
""));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 180, 41, 16));
        label_6->setStyleSheet(QLatin1String("font-size: 15px;\n"
"\n"
"\n"
" background-color: transparent;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 320, 81, 16));
        label_7->setStyleSheet(QLatin1String("font-size: 15px;\n"
" background-color: transparent;\n"
""));
        password = new QLineEdit(frame);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(20, 340, 321, 31));
        password->setStyleSheet(QLatin1String("border-top: 1px solid rgb(250, 250, 250);\n"
"border-left: 1px solid rgb(250, 250, 250);\n"
"border-right: 1px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid gray;\n"
"border-radius:2px;"));
        password->setEchoMode(QLineEdit::Password);
        confirm = new QLineEdit(frame);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(20, 410, 321, 31));
        confirm->setStyleSheet(QLatin1String("border-top: 1px solid rgb(250, 250, 250);\n"
"border-left: 1px solid rgb(250, 250, 250);\n"
"border-right: 1px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid gray;\n"
"border-radius:2px;"));
        confirm->setEchoMode(QLineEdit::Password);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 390, 131, 16));
        label_8->setStyleSheet(QLatin1String("font-size: 15px;\n"
" background-color: transparent;\n"
"\n"
""));
        signup = new QPushButton(frame);
        signup->setObjectName(QStringLiteral("signup"));
        signup->setGeometry(QRect(20, 520, 321, 41));
        signup->setStyleSheet(QStringLiteral(""));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 361, 80));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0.8);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 50, 151, 16));
        label_2->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;\n"
"font-family: \"Ubuntu Light\";\n"
" background-color: transparent;\n"
"\n"
""));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 81, 31));
        label->setStyleSheet(QLatin1String("font-size: 20px;\n"
"font-weight: 500;\n"
"text-decoration: underline;\n"
"font-family: \"Ubuntu Light\";\n"
"color: white;\n"
" background-color: transparent;"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 60, 91, 16));
        label_10->setStyleSheet(QLatin1String(" background-color: transparent;\n"
"border-top: 2px solid white;"));
        label_10->setScaledContents(true);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(260, 60, 91, 16));
        label_11->setStyleSheet(QLatin1String(" background-color: transparent;\n"
"border-top: 2px solid white;"));
        label_11->setScaledContents(true);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 600, 361, 41));
        frame_3->setStyleSheet(QLatin1String("#frame_3{\n"
"background-color: rgba(104, 120, 130, 0.9);\n"
"}\n"
"#login\n"
"{\n"
"border-radius: 2px;\n"
"\n"
"	background-color: rgb(0,189, 155);\n"
"font-family: Roboto;\n"
"font-size: 15px;\n"
"color: white;\n"
"}\n"
"#login:hover\n"
"{\n"
"background-color: rgb(120, 218, 0);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 201, 16));
        label_9->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: white;\n"
"background-color: tranparent;\n"
"background-color: rgba(104, 120, 130, 0);"));
        login = new QPushButton(frame_3);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(274, 10, 71, 23));
        login->setStyleSheet(QStringLiteral(""));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 91, 41));
        label_3->setStyleSheet(QLatin1String("font-size: 15px;\n"
"background-color: transparent;\n"
""));
        identification = new QLineEdit(frame);
        identification->setObjectName(QStringLiteral("identification"));
        identification->setGeometry(QRect(20, 130, 321, 31));
        identification->setStyleSheet(QLatin1String("border-top: 1px solid rgb(250, 250, 250);\n"
"border-left: 1px solid rgb(250, 250, 250);\n"
"border-right: 1px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid gray;\n"
"border-radius:2px;\n"
"background-color: white;"));
        warning = new QLabel(frame);
        warning->setObjectName(QStringLiteral("warning"));
        warning->setGeometry(QRect(50, 460, 261, 31));
        warning->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0.7);\n"
"border: 2px solid rgb(235, 76, 75);\n"
"font-size: 15px;\n"
"border-radius: 4px;\n"
"color: red;\n"
"font-family: \"Ubuntu Light\""));
        warning->setScaledContents(true);
        warning->setAlignment(Qt::AlignCenter);
        warning->setMargin(3);
        QWidget::setTabOrder(identification, email);
        QWidget::setTabOrder(email, userName);
        QWidget::setTabOrder(userName, password);
        QWidget::setTabOrder(password, confirm);
        QWidget::setTabOrder(confirm, signup);
        QWidget::setTabOrder(signup, login);

        retranslateUi(signupForm);

        QMetaObject::connectSlotsByName(signupForm);
    } // setupUi

    void retranslateUi(QDialog *signupForm)
    {
        signupForm->setWindowTitle(QApplication::translate("signupForm", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("signupForm", "Account name:", Q_NULLPTR));
        email->setText(QString());
        label_6->setText(QApplication::translate("signupForm", "Email:", Q_NULLPTR));
        label_7->setText(QApplication::translate("signupForm", "Password:", Q_NULLPTR));
        password->setText(QString());
        confirm->setText(QString());
        label_8->setText(QApplication::translate("signupForm", "Confirm password:", Q_NULLPTR));
        signup->setText(QApplication::translate("signupForm", "SIGN UP", Q_NULLPTR));
        label_2->setText(QApplication::translate("signupForm", "Create a new account", Q_NULLPTR));
        label->setText(QApplication::translate("signupForm", "Sign Up", Q_NULLPTR));
        label_10->setText(QString());
        label_11->setText(QString());
        label_9->setText(QApplication::translate("signupForm", "Already have an account?", Q_NULLPTR));
        login->setText(QApplication::translate("signupForm", "Log In", Q_NULLPTR));
        label_3->setText(QApplication::translate("signupForm", "Identification:", Q_NULLPTR));
        warning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signupForm: public Ui_signupForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
