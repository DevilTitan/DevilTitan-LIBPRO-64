/********************************************************************************
** Form generated from reading UI file 'rentingbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTINGBOOK_H
#define UI_RENTINGBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RentingBook
{
public:
    QTableWidget *tableWidget;
    QLabel *Usernamelbl_6;
    QLabel *Usernamelbl_7;
    QLabel *Usernamelbl_8;
    QLabel *Usernamelbl_9;

    void setupUi(QDialog *RentingBook)
    {
        if (RentingBook->objectName().isEmpty())
            RentingBook->setObjectName(QStringLiteral("RentingBook"));
        RentingBook->resize(963, 656);
        RentingBook->setStyleSheet(QLatin1String("QTableWidget:item\n"
"\n"
"{\n"
"color:white;\n"
"padding:5px;\n"
"margin:15px;\n"
"margin-left:0px;\n"
"font-size:12px;\n"
"font-weight:700;\n"
"font-family:\"Open Sans\";\n"
"border:0px;\n"
"}\n"
"QTableWidget\n"
"{\n"
"alternate-background-color: rgba(255,255,255,0.1);\n"
"}\n"
""));
        tableWidget = new QTableWidget(RentingBook);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 100, 841, 531));
        tableWidget->setStyleSheet(QLatin1String("background-color:rgba(55,55,55,0.5);\n"
"border-radius:0px;\n"
"gridline-color: rgba(55,55,55,0.5);\n"
"\n"
"border:0px;\n"
""));
        Usernamelbl_6 = new QLabel(RentingBook);
        Usernamelbl_6->setObjectName(QStringLiteral("Usernamelbl_6"));
        Usernamelbl_6->setGeometry(QRect(150, 60, 91, 31));
        Usernamelbl_6->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_7 = new QLabel(RentingBook);
        Usernamelbl_7->setObjectName(QStringLiteral("Usernamelbl_7"));
        Usernamelbl_7->setGeometry(QRect(440, 60, 91, 31));
        Usernamelbl_7->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_8 = new QLabel(RentingBook);
        Usernamelbl_8->setObjectName(QStringLiteral("Usernamelbl_8"));
        Usernamelbl_8->setGeometry(QRect(550, 60, 101, 31));
        Usernamelbl_8->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_9 = new QLabel(RentingBook);
        Usernamelbl_9->setObjectName(QStringLiteral("Usernamelbl_9"));
        Usernamelbl_9->setGeometry(QRect(770, 60, 91, 31));
        Usernamelbl_9->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));

        retranslateUi(RentingBook);

        QMetaObject::connectSlotsByName(RentingBook);
    } // setupUi

    void retranslateUi(QDialog *RentingBook)
    {
        RentingBook->setWindowTitle(QApplication::translate("RentingBook", "Dialog", Q_NULLPTR));
        Usernamelbl_6->setText(QApplication::translate("RentingBook", "Book name", Q_NULLPTR));
        Usernamelbl_7->setText(QApplication::translate("RentingBook", "Number", Q_NULLPTR));
        Usernamelbl_8->setText(QApplication::translate("RentingBook", "Borrow date", Q_NULLPTR));
        Usernamelbl_9->setText(QApplication::translate("RentingBook", "Due date", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RentingBook: public Ui_RentingBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTINGBOOK_H
