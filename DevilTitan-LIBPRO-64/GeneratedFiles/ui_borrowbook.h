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
        borrowBook->setStyleSheet(QLatin1String("#removebtn:hover{background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(173,31,43), stop: 1 rgb(212, 38, 61));\n"
"color: white;}\n"
"#cancelbtn:hover{background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(229,104,62), stop: 1 rgb(238, 51, 75));\n"
"color: white}\n"
"#borrowBook{\n"
"background-image: url(:/appscreen/Resources/appscreen/2.jpg);}\n"
"#requestbtn:hover{background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(170,214,171), stop: 1 rgb(50, 181, 92));\n"
"color: white}\n"
"QPushButton {\n"
"border:0px;\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255, 255, 255, .5);\n"
"font-size: 11pt;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border:0px;\n"
"background: qradialg"
                        "radient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(238,226,191), stop: 1 #e5efff);\n"
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
        requestbtn->setGeometry(QRect(410, 400, 131, 71));
        requestbtn->setStyleSheet(QLatin1String("border:0px;\n"
"font-family: Roboto;"));
        cancelbtn = new QPushButton(borrowBook);
        cancelbtn->setObjectName(QStringLiteral("cancelbtn"));
        cancelbtn->setGeometry(QRect(560, 440, 101, 31));
        cancelbtn->setStyleSheet(QLatin1String("border:0px;\n"
""));
        removebtn = new QPushButton(borrowBook);
        removebtn->setObjectName(QStringLiteral("removebtn"));
        removebtn->setGeometry(QRect(560, 400, 101, 31));
        removebtn->setStyleSheet(QLatin1String("border:0px;\n"
""));
        increasebtn = new QPushButton(borrowBook);
        increasebtn->setObjectName(QStringLiteral("increasebtn"));
        increasebtn->setGeometry(QRect(690, 40, 91, 31));
        increasebtn->setStyleSheet(QLatin1String("border:0px;\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        increasebtn->setIcon(icon);
        decreasebtn = new QPushButton(borrowBook);
        decreasebtn->setObjectName(QStringLiteral("decreasebtn"));
        decreasebtn->setGeometry(QRect(690, 80, 94, 31));
        decreasebtn->setStyleSheet(QLatin1String("border:0px;\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        decreasebtn->setIcon(icon1);
        bookList = new QTableView(borrowBook);
        bookList->setObjectName(QStringLiteral("bookList"));
        bookList->setGeometry(QRect(20, 40, 641, 331));

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
