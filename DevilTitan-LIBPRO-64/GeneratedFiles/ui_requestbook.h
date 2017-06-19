/********************************************************************************
** Form generated from reading UI file 'requestbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTBOOK_H
#define UI_REQUESTBOOK_H

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

class Ui_RequestBook
{
public:
    QFrame *frame;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *username;
    QLabel *label_6;
    QPushButton *btn1;
    QLabel *label_7;
    QPushButton *change;
    QLineEdit *oldPassword;
    QPushButton *btn2;
    QLineEdit *newPassword;
    QPushButton *btn3;
    QLineEdit *confirm;

    void setupUi(QDialog *RequestBook)
    {
        if (RequestBook->objectName().isEmpty())
            RequestBook->setObjectName(QStringLiteral("RequestBook"));
        RequestBook->resize(587, 716);
        RequestBook->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(RequestBook);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 591, 731));
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
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 240, 141, 16));
        label_4->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:white"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 350, 121, 16));
        label_5->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"color:white;"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 591, 201));
        frame_3->setStyleSheet(QLatin1String("background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #494949, stop: 1 #ffffff);\n"
"background-color: transparent;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        username = new QLabel(frame_3);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(220, 150, 151, 31));
        username->setStyleSheet(QLatin1String("color:white;\n"
"font: 25 20px  \"Ubuntu Light\";\n"
"text-decoration: bold;\n"
"background-color: transparent;\n"
"text-align:center;"));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 30, 111, 111));
        label_6->setStyleSheet(QStringLiteral("background-color: transparent;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/barIcon/Resources/icon/user (1).png")));
        label_6->setScaledContents(true);
        btn1 = new QPushButton(frame);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(30, 270, 41, 41));
        btn1->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/open-book.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn1->setIcon(icon);
        btn1->setIconSize(QSize(20, 35));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 450, 401, 16));
        label_7->setStyleSheet(QLatin1String("font-size: 16px;\n"
"font-family:Roboto;\n"
"background-color: transparent;\n"
"\n"
"color:rgb(55,55,55);\n"
"color:white;"));
        change = new QPushButton(frame);
        change->setObjectName(QStringLiteral("change"));
        change->setGeometry(QRect(40, 600, 501, 61));
        change->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:0px;\n"
"\n"
"color:white;\n"
"font-family:Roboto"));
        oldPassword = new QLineEdit(frame);
        oldPassword->setObjectName(QStringLiteral("oldPassword"));
        oldPassword->setGeometry(QRect(71, 260, 471, 51));
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
        oldPassword->setEchoMode(QLineEdit::Normal);
        btn2 = new QPushButton(frame);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(20, 480, 61, 41));
        btn2->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/house.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn2->setIcon(icon1);
        btn2->setIconSize(QSize(20, 35));
        newPassword = new QLineEdit(frame);
        newPassword->setObjectName(QStringLiteral("newPassword"));
        newPassword->setGeometry(QRect(70, 360, 471, 51));
        newPassword->setStyleSheet(QLatin1String("border-top: 0px solid rgb(250, 250, 250);\n"
"border-left: 0px solid rgb(250, 250, 250);\n"
"border-right: 0px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid white;\n"
"border-radius:0px;\n"
"margin:5px;\n"
"background-color: transparent;\n"
"font-family:Ubuntu Light;\n"
"font-size:16px;\n"
"color:white;"));
        newPassword->setEchoMode(QLineEdit::Normal);
        btn3 = new QPushButton(frame);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(30, 370, 31, 41));
        btn3->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"background-color:transparent;\n"
"border-radius: 2px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/quill.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn3->setIcon(icon2);
        btn3->setIconSize(QSize(20, 35));
        confirm = new QLineEdit(frame);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(70, 470, 471, 51));
        confirm->setStyleSheet(QLatin1String("border-top: 0px solid rgb(250, 250, 250);\n"
"border-left: 0px solid rgb(250, 250, 250);\n"
"border-right: 0px solid rgb(250, 250, 250);\n"
"border-bottom: 1px solid white;\n"
"border-radius:0px;\n"
"margin:5px;\n"
"background-color: transparent;\n"
"font-family:Comic Sans;\n"
"font-size:16px;\n"
"color:white;"));
        confirm->setEchoMode(QLineEdit::Normal);
        frame_3->raise();
        frame->raise();

        retranslateUi(RequestBook);

        QMetaObject::connectSlotsByName(RequestBook);
    } // setupUi

    void retranslateUi(QDialog *RequestBook)
    {
        RequestBook->setWindowTitle(QApplication::translate("RequestBook", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("RequestBook", "Book Name:", Q_NULLPTR));
        label_5->setText(QApplication::translate("RequestBook", "Author:", Q_NULLPTR));
        username->setText(QApplication::translate("RequestBook", "Jaedong", Q_NULLPTR));
        label_6->setText(QString());
        btn1->setText(QString());
        label_7->setText(QApplication::translate("RequestBook", "Link to the book (Amazon,GoodRead,Tiki,....)", Q_NULLPTR));
        change->setText(QApplication::translate("RequestBook", "SEND REQUEST", Q_NULLPTR));
        oldPassword->setText(QString());
        btn2->setText(QString());
        newPassword->setText(QString());
        btn3->setText(QString());
        confirm->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RequestBook: public Ui_RequestBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTBOOK_H
