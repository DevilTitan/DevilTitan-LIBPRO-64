/********************************************************************************
** Form generated from reading UI file 'notification.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATION_H
#define UI_NOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Notification
{
public:
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QPushButton *publicChat;
    QPushButton *publicChat_2;
    QPushButton *publicChat_3;
    QPushButton *publicChat_4;

    void setupUi(QDialog *Notification)
    {
        if (Notification->objectName().isEmpty())
            Notification->setObjectName(QStringLiteral("Notification"));
        Notification->resize(855, 581);
        Notification->setStyleSheet(QLatin1String("QTableWidget:item\n"
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
        tableWidget = new QTableWidget(Notification);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 180, 751, 351));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Light"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        tableWidget->setFont(font);
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setStyleSheet(QLatin1String("background-color:rgba(55,55,55,0.5);\n"
"font: 25 9pt \"Ubuntu Light\";\n"
"border-radius:0px;\n"
"gridline-color: rgba(55,55,55,0.5);\n"
"color:white;\n"
"border:0px;"));
        lineEdit = new QLineEdit(Notification);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 50, 751, 51));
        lineEdit->setStyleSheet(QLatin1String("border-radius:5px;\n"
"background-color:rgba(55,55,55,0.33);\n"
"color:white;\n"
"font-weight:600;\n"
"font-family:\"Lato\";\n"
""));
        publicChat = new QPushButton(Notification);
        publicChat->setObjectName(QStringLiteral("publicChat"));
        publicChat->setGeometry(QRect(50, 120, 181, 61));
        publicChat->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-top-left-radius:7px;\n"
"background-color:rgba(55,55,55,0.5);\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"font-size:15px;\n"
"\n"
""));
        publicChat->setIconSize(QSize(50, 50));
        publicChat_2 = new QPushButton(Notification);
        publicChat_2->setObjectName(QStringLiteral("publicChat_2"));
        publicChat_2->setGeometry(QRect(231, 120, 571, 61));
        publicChat_2->setStyleSheet(QLatin1String("border: none;\n"
"border-radius:0;\n"
"border-top-right-radius:7px;\n"
"background-color:rgba(55,55,55,0.5);\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"font-size:15px;\n"
"border-bottom:rgba(55,55,55,0.25);\n"
""));
        publicChat_2->setText(QStringLiteral("Notification"));
        publicChat_2->setIconSize(QSize(50, 50));
        publicChat_3 = new QPushButton(Notification);
        publicChat_3->setObjectName(QStringLiteral("publicChat_3"));
        publicChat_3->setGeometry(QRect(230, 530, 571, 16));
        publicChat_3->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-bottom-right-radius:7px;\n"
"background-color:rgba(55,55,55,0.5);\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"font-size:15px;\n"
"\n"
""));
        publicChat_3->setText(QStringLiteral(""));
        publicChat_3->setIconSize(QSize(50, 50));
        publicChat_4 = new QPushButton(Notification);
        publicChat_4->setObjectName(QStringLiteral("publicChat_4"));
        publicChat_4->setGeometry(QRect(49, 530, 181, 16));
        publicChat_4->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-bottom-left-radius:7px;\n"
"background-color:rgba(55,55,55,0.5);\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:600;\n"
"font-size:15px;\n"
"\n"
""));
        publicChat_4->setIconSize(QSize(50, 50));

        retranslateUi(Notification);

        QMetaObject::connectSlotsByName(Notification);
    } // setupUi

    void retranslateUi(QDialog *Notification)
    {
        Notification->setWindowTitle(QApplication::translate("Notification", "Dialog", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Notification", "   Search here.....", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat->setToolTip(QApplication::translate("Notification", "Public Chat", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat->setWhatsThis(QApplication::translate("Notification", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat->setText(QApplication::translate("Notification", "Time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat_2->setToolTip(QApplication::translate("Notification", "Account statistic", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_2->setWhatsThis(QApplication::translate("Notification", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        publicChat_3->setToolTip(QApplication::translate("Notification", "Account statistic", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_3->setWhatsThis(QApplication::translate("Notification", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        publicChat_4->setToolTip(QApplication::translate("Notification", "Public Chat", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_4->setWhatsThis(QApplication::translate("Notification", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Notification: public Ui_Notification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATION_H
