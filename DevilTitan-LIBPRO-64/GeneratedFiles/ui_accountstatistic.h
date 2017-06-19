/********************************************************************************
** Form generated from reading UI file 'accountstatistic.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSTATISTIC_H
#define UI_ACCOUNTSTATISTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_AccountStatistic
{
public:
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *account;
    QLabel *email;
    QLabel *status;
    QLabel *label_9;
    QFrame *frame_2;
    QLabel *label;
    QFrame *frame_3;
    QLabel *username;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *gender;
    QLabel *label_6;
    QLabel *phone;
    QPushButton *pushButton_6;
    QFrame *frame_4;
    QCustomPlot *customPlot;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_8;
    QCustomPlot *customPlot1;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_4;

    void setupUi(QDialog *AccountStatistic)
    {
        if (AccountStatistic->objectName().isEmpty())
            AccountStatistic->setObjectName(QStringLiteral("AccountStatistic"));
        AccountStatistic->resize(921, 684);
        AccountStatistic->setStyleSheet(QLatin1String("\n"
"QDialog:\n"
"{\n"
"background-image: url(:/appscreen/Resources/appscreen/flat2 - Copy.png);\n"
"font: 25 8pt \"Ubuntu Light\";\n"
"}"));
        frame = new QFrame(AccountStatistic);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(60, 50, 371, 611));
        frame->setStyleSheet(QLatin1String("background-color: rgba(250, 250, 250, 0.5);\n"
"border-radius: 3px;\n"
"QLabel:\n"
"\n"
"{\n"
"font-size:16px;\n"
"font-family:Roboto\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 220, 71, 16));
        label_3->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:rgb(55,55,55)"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 300, 71, 16));
        label_5->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:rgb(55,55,55)"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 390, 71, 16));
        label_7->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:rgb(55,55,55)"));
        account = new QLabel(frame);
        account->setObjectName(QStringLiteral("account"));
        account->setGeometry(QRect(70, 240, 271, 51));
        account->setStyleSheet(QLatin1String("background-color: rgb(239, 239, 239);\n"
"border: 0;\n"
"text-indent: 10px;\n"
"border-radius: 2px;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"padding:5px;\n"
""));
        email = new QLabel(frame);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(70, 320, 271, 51));
        email->setStyleSheet(QLatin1String("background-color: rgb(239, 239, 239);\n"
"border: 0;\n"
"text-indent: 10px;\n"
"border-radius: 2px;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"padding:5px;"));
        status = new QLabel(frame);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(70, 410, 81, 41));
        status->setStyleSheet(QLatin1String("background-color: rgb(239, 239, 239);\n"
"border: 0;\n"
"text-indent: 10px;\n"
"border-radius: 2px;\n"
"padding:5px;\n"
"font-size:17px;\n"
"font-family:Roboto"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(180, 390, 71, 16));
        label_9->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:rgb(55,55,55)"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 371, 51));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgba(0, 0,0, 0.9);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 81, 31));
        label->setStyleSheet(QLatin1String("font-size: 25px;\n"
"color: white;\n"
"background-color: transparent;"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 50, 371, 161));
        frame_3->setStyleSheet(QLatin1String("background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #494949, stop: 1 #ffffff);\n"
"background-color: transparent;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        username = new QLabel(frame_3);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(110, 110, 151, 31));
        username->setStyleSheet(QLatin1String("\n"
"font: 25 20px  \"Ubuntu Light\";\n"
"text-decoration: bold;\n"
"background-color: transparent;\n"
""));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 20, 71, 71));
        label_2->setStyleSheet(QStringLiteral("background-color: transparent;"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/barIcon/Resources/icon/user (1).png")));
        label_2->setScaledContents(true);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 240, 51, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"border-radius: 2px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/19073730_1922262664698614_862710217_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(35, 35));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 320, 51, 51));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"border-radius: 2px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/19113043_1922262658031948_1030609975_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(35, 35));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 410, 51, 41));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"border-radius: 2px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/19073774_1922262661365281_2146484065_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(30, 30));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 410, 51, 41));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"border-radius: 2px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/19073874_1922262651365282_1694282943_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(30, 30));
        gender = new QLabel(frame);
        gender->setObjectName(QStringLiteral("gender"));
        gender->setGeometry(QRect(230, 410, 111, 41));
        gender->setStyleSheet(QLatin1String("background-color: rgb(239, 239, 239);\n"
"border: 0;\n"
"text-indent: 10px;\n"
"border-radius: 2px;\n"
"padding:5px;\n"
"font-size:17px;\n"
"font-family:Roboto"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 470, 71, 16));
        label_6->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:rgb(55,55,55)"));
        phone = new QLabel(frame);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(70, 490, 271, 51));
        phone->setStyleSheet(QLatin1String("background-color: rgb(239, 239, 239);\n"
"border: 0;\n"
"text-indent: 10px;\n"
"border-radius: 2px;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"padding:5px;"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 490, 51, 51));
        pushButton_6->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"border-radius: 2px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/phone-call.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(30, 30));
        frame_4 = new QFrame(AccountStatistic);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(450, 50, 421, 611));
        frame_4->setStyleSheet(QStringLiteral(""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        customPlot = new QCustomPlot(frame_4);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(0, 0, 421, 301));
        customPlot->setStyleSheet(QStringLiteral("background-color:transparent;"));
        label_11 = new QLabel(customPlot);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, -10, 421, 51));
        label_11->setStyleSheet(QLatin1String("background-color: rgba(0, 0,0,0.9);\n"
"border-bottom-right-radius: 3px;\n"
"border-bottom-left-radius: 3px;"));
        label_12 = new QLabel(customPlot);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 10, 81, 20));
        label_12->setStyleSheet(QLatin1String("color: white;\n"
"font-size: 16px;\n"
"font-familu:Roboto;"));
        label_15 = new QLabel(customPlot);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(160, 0, 31, 21));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/lifeline-hand-drawn-status-line (2).png")));
        label_15->setScaledContents(true);
        label_8 = new QLabel(customPlot);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(170, 10, 21, 20));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/19113160_1922262654698615_196996906_n.png")));
        label_8->setScaledContents(true);
        customPlot1 = new QCustomPlot(frame_4);
        customPlot1->setObjectName(QStringLiteral("customPlot1"));
        customPlot1->setGeometry(QRect(0, 320, 421, 291));
        label_13 = new QLabel(customPlot1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 0, 421, 41));
        label_13->setStyleSheet(QLatin1String("background-color: rgba(0, 0,0,0.9);\n"
"border-bottom-right-radius: 3px;\n"
"border-bottom-left-radius: 3px;"));
        label_14 = new QLabel(customPlot1);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(210, 0, 47, 41));
        label_14->setStyleSheet(QLatin1String("color: white;\n"
"font-size: 16px;\n"
"font-family:Roboto;"));
        label_4 = new QLabel(customPlot1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 10, 21, 20));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/19113252_1922262668031947_720430524_n.png")));
        label_4->setScaledContents(true);

        retranslateUi(AccountStatistic);

        QMetaObject::connectSlotsByName(AccountStatistic);
    } // setupUi

    void retranslateUi(QDialog *AccountStatistic)
    {
        AccountStatistic->setWindowTitle(QApplication::translate("AccountStatistic", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("AccountStatistic", "Account:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AccountStatistic", "E-mail:", Q_NULLPTR));
        label_7->setText(QApplication::translate("AccountStatistic", "Status:", Q_NULLPTR));
        account->setText(QApplication::translate("AccountStatistic", "jaedong.cute.deptrai", Q_NULLPTR));
        email->setText(QApplication::translate("AccountStatistic", "jaedong.cute.deptrai@gmail.com", Q_NULLPTR));
        status->setText(QApplication::translate("AccountStatistic", "Active", Q_NULLPTR));
        label_9->setText(QApplication::translate("AccountStatistic", "Gender:", Q_NULLPTR));
        label->setText(QApplication::translate("AccountStatistic", "Profile", Q_NULLPTR));
        username->setText(QApplication::translate("AccountStatistic", "Jaedong", Q_NULLPTR));
        label_2->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        gender->setText(QApplication::translate("AccountStatistic", "Male", Q_NULLPTR));
        label_6->setText(QApplication::translate("AccountStatistic", "Phone:", Q_NULLPTR));
        phone->setText(QApplication::translate("AccountStatistic", "0169369696", Q_NULLPTR));
        pushButton_6->setText(QString());
        label_11->setText(QString());
        label_12->setText(QApplication::translate("AccountStatistic", "Frequency", Q_NULLPTR));
        label_15->setText(QString());
        label_8->setText(QString());
        label_13->setText(QString());
        label_14->setText(QApplication::translate("AccountStatistic", "Genre", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccountStatistic: public Ui_AccountStatistic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTSTATISTIC_H
