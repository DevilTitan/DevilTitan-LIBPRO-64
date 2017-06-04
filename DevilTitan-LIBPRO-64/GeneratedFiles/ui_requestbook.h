/********************************************************************************
** Form generated from reading UI file 'requestbook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RequestBook
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *RequestBook)
    {
        if (RequestBook->objectName().isEmpty())
            RequestBook->setObjectName(QStringLiteral("RequestBook"));
        RequestBook->resize(814, 475);
        RequestBook->setStyleSheet(QLatin1String("QDialog { \n"
"	background-image: url(:/appscreen/Resources/appscreen/2.jpg);\n"
"\n"
"}\n"
"QLabel\n"
"{\n"
"	font: 9.5pt \"Lato\";\n"
"	color:white;\n"
"font-weight:600;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	border:0px;\n"
"	border-radius:10px;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"	\n"
"color: #333;\n"
"border:0px;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255, 255, 255, .5);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"#Reader{\n"
"border-image: url(:/appscreen/Resources/appscreen/2.jpg);\n"
"}"));
        lineEdit = new QLineEdit(RequestBook);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 40, 741, 61));
        label = new QLabel(RequestBook);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 171, 31));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(RequestBook);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 161, 16));
        lineEdit_2 = new QLineEdit(RequestBook);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 150, 741, 51));
        lineEdit_3 = new QLineEdit(RequestBook);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 240, 741, 101));
        pushButton = new QPushButton(RequestBook);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(493, 380, 151, 61));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(80, 50));
        pushButton_2 = new QPushButton(RequestBook);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 380, 94, 61));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/unchecked.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(60, 40));
        label_3 = new QLabel(RequestBook);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 220, 191, 16));

        retranslateUi(RequestBook);

        QMetaObject::connectSlotsByName(RequestBook);
    } // setupUi

    void retranslateUi(QDialog *RequestBook)
    {
        RequestBook->setWindowTitle(QApplication::translate("RequestBook", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RequestBook", "Book name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("RequestBook", "Author:", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_3->setText(QApplication::translate("RequestBook", "Link to book :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RequestBook: public Ui_RequestBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTBOOK_H
