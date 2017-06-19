/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

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

class Ui_ChangePassword
{
public:
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *username;
    QLabel *label_2;
    QPushButton *btn1;
    QLabel *label_6;
    QPushButton *change;
    QLineEdit *oldPassword;
    QPushButton *btn2;
    QLineEdit *newPassword;
    QPushButton *btn3;
    QLineEdit *confirm;
    QLabel *error;
    QFrame *frame_2;
    QLabel *label_4;
    QLabel *label_7;
    QFrame *frame_4;
    QLabel *username_2;
    QLabel *label_8;
    QPushButton *btn1_2;
    QLabel *label_9;
    QPushButton *change_2;
    QLineEdit *oldPassword_2;
    QPushButton *btn2_2;
    QLineEdit *newPassword_2;
    QPushButton *btn3_2;
    QLineEdit *confirm_2;
    QLabel *error_2;

    void setupUi(QDialog *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(511, 604);
        frame = new QFrame(ChangePassword);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 511, 601));
        frame->setStyleSheet(QLatin1String("QFrame{background-color: rgba(0, 0, 0, 0.5);\n"
"border-radius: 3px;}\n"
"#change{\n"
"border:0px;\n"
"border-radius:5px;\n"
"background-color:rgb(94, 193, 130);\n"
"font-family:Roboto;\n"
"color:white;\n"
"font-size:16px;\n"
"	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"background-color:rgb(58, 120, 170);\n"
"}\n"
"\n"
"#change:hover {\n"
"color:black;\n"
"background: rgb(58, 86, 132)\n"
"\n"
"\n"
"}\n"
"\n"
"#change:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 220, 141, 16));
        label_3->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:white"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 300, 121, 16));
        label_5->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:white;"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 511, 181));
        frame_3->setStyleSheet(QLatin1String("background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #494949, stop: 1 #ffffff);\n"
"background-color: transparent;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        username = new QLabel(frame_3);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(180, 140, 151, 31));
        username->setStyleSheet(QLatin1String("color:white;\n"
"font: 25 20px  \"Ubuntu Light\";\n"
"text-decoration: bold;\n"
"background-color: transparent;\n"
"text-align:center;"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 20, 111, 111));
        label_2->setStyleSheet(QStringLiteral("background-color: transparent;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/barIcon/Resources/icon/user (1).png")));
        label_2->setScaledContents(true);
        btn1 = new QPushButton(frame);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(20, 250, 31, 41));
        btn1->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/key (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn1->setIcon(icon);
        btn1->setIconSize(QSize(20, 35));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 380, 181, 16));
        label_6->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"\n"
"color:rgb(55,55,55);\n"
"color:white;"));
        change = new QPushButton(frame);
        change->setObjectName(QStringLiteral("change"));
        change->setGeometry(QRect(20, 510, 461, 61));
        change->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:0px;\n"
"\n"
"color:white;\n"
"font-family:Roboto"));
        oldPassword = new QLineEdit(frame);
        oldPassword->setObjectName(QStringLiteral("oldPassword"));
        oldPassword->setGeometry(QRect(50, 240, 431, 51));
        oldPassword->setStyleSheet(QLatin1String("border-top: 0px solid rgb(250, 250, 250);\n"
"border-left: 0px solid rgb(250, 250, 250);\n"
"border-right: 0px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid white;\n"
"border-radius:0px;\n"
"margin:5px;\n"
"background-color: transparent;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"color:white;"));
        oldPassword->setEchoMode(QLineEdit::Password);
        btn2 = new QPushButton(frame);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(20, 330, 31, 41));
        btn2->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        btn2->setIcon(icon);
        btn2->setIconSize(QSize(20, 35));
        newPassword = new QLineEdit(frame);
        newPassword->setObjectName(QStringLiteral("newPassword"));
        newPassword->setGeometry(QRect(50, 320, 431, 51));
        newPassword->setStyleSheet(QLatin1String("border-top: 0px solid rgb(250, 250, 250);\n"
"border-left: 0px solid rgb(250, 250, 250);\n"
"border-right: 0px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid white;\n"
"border-radius:0px;\n"
"margin:5px;\n"
"background-color: transparent;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"color:white;"));
        newPassword->setEchoMode(QLineEdit::Password);
        btn3 = new QPushButton(frame);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(20, 410, 31, 41));
        btn3->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        btn3->setIcon(icon);
        btn3->setIconSize(QSize(20, 35));
        confirm = new QLineEdit(frame);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(50, 400, 431, 51));
        confirm->setStyleSheet(QLatin1String("border-top: 0px solid rgb(250, 250, 250);\n"
"border-left: 0px solid rgb(250, 250, 250);\n"
"border-right: 0px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid white;\n"
"border-radius:0px;\n"
"margin:5px;\n"
"background-color: transparent;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"color:white;"));
        confirm->setEchoMode(QLineEdit::Password);
        error = new QLabel(frame);
        error->setObjectName(QStringLiteral("error"));
        error->setGeometry(QRect(30, 470, 441, 20));
        error->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color:transparent;\n"
"color:white;\n"
"font-weight:500;"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(510, 360, 511, 601));
        frame_2->setStyleSheet(QLatin1String("QFrame{background-color: rgba(0, 0, 0, 0.5);\n"
"border-radius: 3px;}\n"
"#change{\n"
"border:0px;\n"
"border-radius:5px;\n"
"background-color:rgb(94, 193, 130);\n"
"font-family:Roboto;\n"
"color:white;\n"
"font-size:16px;\n"
"	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"background-color:rgb(58, 120, 170);\n"
"}\n"
"\n"
"#change:hover {\n"
"color:black;\n"
"background: rgb(58, 86, 132)\n"
"\n"
"\n"
"}\n"
"\n"
"#change:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 220, 141, 16));
        label_4->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:white"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 300, 121, 16));
        label_7->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:white;"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 511, 181));
        frame_4->setStyleSheet(QLatin1String("background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #494949, stop: 1 #ffffff);\n"
"background-color: transparent;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        username_2 = new QLabel(frame_4);
        username_2->setObjectName(QStringLiteral("username_2"));
        username_2->setGeometry(QRect(180, 140, 151, 31));
        username_2->setStyleSheet(QLatin1String("color:white;\n"
"font: 25 20px  \"Ubuntu Light\";\n"
"text-decoration: bold;\n"
"background-color: transparent;\n"
"text-align:center;"));
        label_8 = new QLabel(frame_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(200, 20, 111, 111));
        label_8->setStyleSheet(QStringLiteral("background-color: transparent;"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/barIcon/Resources/icon/user (1).png")));
        label_8->setScaledContents(true);
        btn1_2 = new QPushButton(frame_2);
        btn1_2->setObjectName(QStringLiteral("btn1_2"));
        btn1_2->setGeometry(QRect(20, 250, 31, 41));
        btn1_2->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        btn1_2->setIcon(icon);
        btn1_2->setIconSize(QSize(20, 35));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 380, 181, 16));
        label_9->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"\n"
"color:rgb(55,55,55);\n"
"color:white;"));
        change_2 = new QPushButton(frame_2);
        change_2->setObjectName(QStringLiteral("change_2"));
        change_2->setGeometry(QRect(20, 510, 461, 61));
        change_2->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:0px;\n"
"\n"
"color:white;\n"
"font-family:Roboto"));
        oldPassword_2 = new QLineEdit(frame_2);
        oldPassword_2->setObjectName(QStringLiteral("oldPassword_2"));
        oldPassword_2->setGeometry(QRect(50, 240, 431, 51));
        oldPassword_2->setStyleSheet(QLatin1String("border-top: 0px solid rgb(250, 250, 250);\n"
"border-left: 0px solid rgb(250, 250, 250);\n"
"border-right: 0px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid white;\n"
"border-radius:0px;\n"
"margin:5px;\n"
"background-color: transparent;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"color:white;"));
        oldPassword_2->setEchoMode(QLineEdit::Password);
        btn2_2 = new QPushButton(frame_2);
        btn2_2->setObjectName(QStringLiteral("btn2_2"));
        btn2_2->setGeometry(QRect(20, 330, 31, 41));
        btn2_2->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        btn2_2->setIcon(icon);
        btn2_2->setIconSize(QSize(20, 35));
        newPassword_2 = new QLineEdit(frame_2);
        newPassword_2->setObjectName(QStringLiteral("newPassword_2"));
        newPassword_2->setGeometry(QRect(50, 320, 431, 51));
        newPassword_2->setStyleSheet(QLatin1String("border-top: 0px solid rgb(250, 250, 250);\n"
"border-left: 0px solid rgb(250, 250, 250);\n"
"border-right: 0px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid white;\n"
"border-radius:0px;\n"
"margin:5px;\n"
"background-color: transparent;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"color:white;"));
        newPassword_2->setEchoMode(QLineEdit::Password);
        btn3_2 = new QPushButton(frame_2);
        btn3_2->setObjectName(QStringLiteral("btn3_2"));
        btn3_2->setGeometry(QRect(20, 410, 31, 41));
        btn3_2->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        btn3_2->setIcon(icon);
        btn3_2->setIconSize(QSize(20, 35));
        confirm_2 = new QLineEdit(frame_2);
        confirm_2->setObjectName(QStringLiteral("confirm_2"));
        confirm_2->setGeometry(QRect(50, 400, 431, 51));
        confirm_2->setStyleSheet(QLatin1String("border-top: 0px solid rgb(250, 250, 250);\n"
"border-left: 0px solid rgb(250, 250, 250);\n"
"border-right: 0px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid white;\n"
"border-radius:0px;\n"
"margin:5px;\n"
"background-color: transparent;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"color:white;"));
        confirm_2->setEchoMode(QLineEdit::Password);
        error_2 = new QLabel(frame_2);
        error_2->setObjectName(QStringLiteral("error_2"));
        error_2->setGeometry(QRect(30, 470, 441, 20));
        error_2->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color:transparent;\n"
"color:white;\n"
"font-weight:500;"));

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("ChangePassword", "Current Password:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ChangePassword", "New Password:", Q_NULLPTR));
        username->setText(QApplication::translate("ChangePassword", "Jaedong", Q_NULLPTR));
        label_2->setText(QString());
        btn1->setText(QString());
        label_6->setText(QApplication::translate("ChangePassword", "Confirm new password:", Q_NULLPTR));
        change->setText(QApplication::translate("ChangePassword", "CHANGE PASSWORD", Q_NULLPTR));
        oldPassword->setText(QString());
        btn2->setText(QString());
        newPassword->setText(QString());
        btn3->setText(QString());
        confirm->setText(QString());
        error->setText(QString());
        label_4->setText(QApplication::translate("ChangePassword", "Current Password:", Q_NULLPTR));
        label_7->setText(QApplication::translate("ChangePassword", "New Password:", Q_NULLPTR));
        username_2->setText(QApplication::translate("ChangePassword", "Jaedong", Q_NULLPTR));
        label_8->setText(QString());
        btn1_2->setText(QString());
        label_9->setText(QApplication::translate("ChangePassword", "Confirm new password:", Q_NULLPTR));
        change_2->setText(QApplication::translate("ChangePassword", "CHANGE PASSWORD", Q_NULLPTR));
        oldPassword_2->setText(QString());
        btn2_2->setText(QString());
        newPassword_2->setText(QString());
        btn3_2->setText(QString());
        confirm_2->setText(QString());
        error_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
