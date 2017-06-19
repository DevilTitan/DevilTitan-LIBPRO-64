/********************************************************************************
** Form generated from reading UI file 'borrowbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWBOOK_H
#define UI_BORROWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_borrowBook
{
public:
    QPushButton *requestbtn;
    QPushButton *cancelbtn;
    QPushButton *removebtn;
    QPushButton *increasebtn;
    QPushButton *decreasebtn;
    QTableView *bookList;

    void setupUi(QWidget *borrowBook)
    {
        if (borrowBook->objectName().isEmpty())
            borrowBook->setObjectName(QStringLiteral("borrowBook"));
        borrowBook->resize(800, 523);
        borrowBook->setStyleSheet(QLatin1String("/*#borrowBook{\n"
"background-image: url(:/appscreen/Resources/appscreen/2.jpg);}*/\n"
"QPushButton {\n"
"border:0px;\n"
"color: #333;\n"
"border: 2px solid #555;\n"
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
"border:0px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border:0px;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
""));
        requestbtn = new QPushButton(borrowBook);
        requestbtn->setObjectName(QStringLiteral("requestbtn"));
        requestbtn->setGeometry(QRect(310, 390, 171, 101));
        requestbtn->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:5px;\n"
""));
        cancelbtn = new QPushButton(borrowBook);
        cancelbtn->setObjectName(QStringLiteral("cancelbtn"));
        cancelbtn->setGeometry(QRect(500, 450, 171, 41));
        cancelbtn->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:5px;\n"
""));
        removebtn = new QPushButton(borrowBook);
        removebtn->setObjectName(QStringLiteral("removebtn"));
        removebtn->setGeometry(QRect(500, 390, 171, 41));
        removebtn->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:5px;\n"
""));
        increasebtn = new QPushButton(borrowBook);
        increasebtn->setObjectName(QStringLiteral("increasebtn"));
        increasebtn->setGeometry(QRect(690, 30, 94, 101));
        increasebtn->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:5px;\n"
""));
        decreasebtn = new QPushButton(borrowBook);
        decreasebtn->setObjectName(QStringLiteral("decreasebtn"));
        decreasebtn->setGeometry(QRect(690, 140, 94, 101));
        decreasebtn->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:5px;\n"
""));
        bookList = new QTableView(borrowBook);
        bookList->setObjectName(QStringLiteral("bookList"));
        bookList->setGeometry(QRect(30, 30, 641, 331));
        bookList->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"gridline-color:white;\n"
"selection-background-color:rgba(55,55,55,0.3);\n"
"font-family:Ubuntu Light"));

        retranslateUi(borrowBook);

        QMetaObject::connectSlotsByName(borrowBook);
    } // setupUi

    void retranslateUi(QWidget *borrowBook)
    {
        borrowBook->setWindowTitle(QApplication::translate("borrowBook", "Form", Q_NULLPTR));
        requestbtn->setText(QApplication::translate("borrowBook", "Send Request", Q_NULLPTR));
        cancelbtn->setText(QApplication::translate("borrowBook", "Cancel", Q_NULLPTR));
        removebtn->setText(QApplication::translate("borrowBook", "Remove all", Q_NULLPTR));
        increasebtn->setText(QApplication::translate("borrowBook", "Increase", Q_NULLPTR));
        decreasebtn->setText(QApplication::translate("borrowBook", "Decrease", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class borrowBook: public Ui_borrowBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWBOOK_H
