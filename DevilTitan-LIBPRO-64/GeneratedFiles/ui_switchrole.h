/********************************************************************************
** Form generated from reading UI file 'switchrole.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCHROLE_H
#define UI_SWITCHROLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SwitchRole
{
public:
    QPushButton *librarian;
    QPushButton *admin;
    QPushButton *data;
    QPushButton *continue_2;
    QPushButton *reader;
    QPushButton *cancel;
    QLabel *errorlbl;

    void setupUi(QDialog *SwitchRole)
    {
        if (SwitchRole->objectName().isEmpty())
            SwitchRole->setObjectName(QStringLiteral("SwitchRole"));
        SwitchRole->resize(683, 313);
        SwitchRole->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"color: #333;\n"
"border: 0;\n"
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
""));
        librarian = new QPushButton(SwitchRole);
        librarian->setObjectName(QStringLiteral("librarian"));
        librarian->setGeometry(QRect(210, 70, 111, 111));
        admin = new QPushButton(SwitchRole);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setGeometry(QRect(360, 70, 111, 111));
        data = new QPushButton(SwitchRole);
        data->setObjectName(QStringLiteral("data"));
        data->setGeometry(QRect(510, 70, 111, 111));
        continue_2 = new QPushButton(SwitchRole);
        continue_2->setObjectName(QStringLiteral("continue_2"));
        continue_2->setGeometry(QRect(220, 250, 94, 28));
        reader = new QPushButton(SwitchRole);
        reader->setObjectName(QStringLiteral("reader"));
        reader->setGeometry(QRect(50, 70, 111, 111));
        cancel = new QPushButton(SwitchRole);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(360, 250, 94, 28));
        errorlbl = new QLabel(SwitchRole);
        errorlbl->setObjectName(QStringLiteral("errorlbl"));
        errorlbl->setGeometry(QRect(260, 200, 211, 31));
        errorlbl->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));

        retranslateUi(SwitchRole);

        QMetaObject::connectSlotsByName(SwitchRole);
    } // setupUi

    void retranslateUi(QDialog *SwitchRole)
    {
        SwitchRole->setWindowTitle(QApplication::translate("SwitchRole", "Dialog", Q_NULLPTR));
        librarian->setText(QApplication::translate("SwitchRole", "Librarian", Q_NULLPTR));
        admin->setText(QApplication::translate("SwitchRole", "Administrator", Q_NULLPTR));
        data->setText(QApplication::translate("SwitchRole", "Data Processor", Q_NULLPTR));
        continue_2->setText(QApplication::translate("SwitchRole", "Continue", Q_NULLPTR));
        reader->setText(QApplication::translate("SwitchRole", "Reader", Q_NULLPTR));
        cancel->setText(QApplication::translate("SwitchRole", "Cancel", Q_NULLPTR));
        errorlbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SwitchRole: public Ui_SwitchRole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SWITCHROLE_H
