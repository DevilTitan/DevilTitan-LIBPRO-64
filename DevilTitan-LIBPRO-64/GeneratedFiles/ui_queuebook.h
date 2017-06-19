/********************************************************************************
** Form generated from reading UI file 'queuebook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUEBOOK_H
#define UI_QUEUEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_QueueBook
{
public:
    QTableWidget *tableWidget;
    QLabel *Usernamelbl_9;
    QLabel *Usernamelbl_6;
    QLabel *Usernamelbl_7;
    QLabel *Usernamelbl_8;
    QPushButton *removebtn;
    QLabel *Usernamelbl_10;

    void setupUi(QDialog *QueueBook)
    {
        if (QueueBook->objectName().isEmpty())
            QueueBook->setObjectName(QStringLiteral("QueueBook"));
        QueueBook->resize(973, 609);
        QueueBook->setStyleSheet(QLatin1String("QTableWidget:item\n"
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
"selection-background-color : white;\n"
"}\n"
"\n"
"QPushButton {	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .1);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 rgb(212, 236, 215));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
""));
        tableWidget = new QTableWidget(QueueBook);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 100, 841, 411));
        tableWidget->setStyleSheet(QLatin1String("background-color:rgba(55,55,55,0.5);\n"
"border-radius:2px;\n"
"/*gridline-color: rgba(55,55,55,0.5);*/\n"
"border:0px;\n"
"selection-background-color: red;"));
        Usernamelbl_9 = new QLabel(QueueBook);
        Usernamelbl_9->setObjectName(QStringLiteral("Usernamelbl_9"));
        Usernamelbl_9->setGeometry(QRect(790, 60, 91, 31));
        Usernamelbl_9->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_6 = new QLabel(QueueBook);
        Usernamelbl_6->setObjectName(QStringLiteral("Usernamelbl_6"));
        Usernamelbl_6->setGeometry(QRect(190, 60, 91, 31));
        Usernamelbl_6->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_7 = new QLabel(QueueBook);
        Usernamelbl_7->setObjectName(QStringLiteral("Usernamelbl_7"));
        Usernamelbl_7->setGeometry(QRect(490, 60, 91, 31));
        Usernamelbl_7->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_8 = new QLabel(QueueBook);
        Usernamelbl_8->setObjectName(QStringLiteral("Usernamelbl_8"));
        Usernamelbl_8->setGeometry(QRect(650, 60, 101, 31));
        Usernamelbl_8->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        removebtn = new QPushButton(QueueBook);
        removebtn->setObjectName(QStringLiteral("removebtn"));
        removebtn->setGeometry(QRect(811, 520, 90, 61));
        removebtn->setStyleSheet(QLatin1String("border : 0px;\n"
"border-radius:6px;\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/trash-2-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        removebtn->setIcon(icon);
        removebtn->setIconSize(QSize(50, 50));
        Usernamelbl_10 = new QLabel(QueueBook);
        Usernamelbl_10->setObjectName(QStringLiteral("Usernamelbl_10"));
        Usernamelbl_10->setGeometry(QRect(230, 540, 481, 31));
        Usernamelbl_10->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));

        retranslateUi(QueueBook);

        QMetaObject::connectSlotsByName(QueueBook);
    } // setupUi

    void retranslateUi(QDialog *QueueBook)
    {
        QueueBook->setWindowTitle(QApplication::translate("QueueBook", "Dialog", Q_NULLPTR));
        Usernamelbl_9->setText(QApplication::translate("QueueBook", "Due date ", Q_NULLPTR));
        Usernamelbl_6->setText(QApplication::translate("QueueBook", "Book name", Q_NULLPTR));
        Usernamelbl_7->setText(QApplication::translate("QueueBook", "Author", Q_NULLPTR));
        Usernamelbl_8->setText(QApplication::translate("QueueBook", "Number", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        removebtn->setWhatsThis(QApplication::translate("QueueBook", "Remove\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        removebtn->setText(QString());
        Usernamelbl_10->setText(QApplication::translate("QueueBook", "                   Please come to library to take those books", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QueueBook: public Ui_QueueBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUEBOOK_H
