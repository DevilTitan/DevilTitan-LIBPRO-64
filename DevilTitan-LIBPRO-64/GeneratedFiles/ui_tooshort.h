/********************************************************************************
** Form generated from reading UI file 'tooshort.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOSHORT_H
#define UI_TOOSHORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_tooShort
{
public:
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *tooShort)
    {
        if (tooShort->objectName().isEmpty())
            tooShort->setObjectName(QStringLiteral("tooShort"));
        tooShort->resize(400, 100);
        tooShort->setStyleSheet(QLatin1String("font-family: Roboto;\n"
"font-size: 14px;\n"
"color:white;"));
        label_2 = new QLabel(tooShort);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 30, 311, 41));
        label_2->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(tooShort);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 61, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/tooshort.png")));
        label_4->setScaledContents(true);

        retranslateUi(tooShort);

        QMetaObject::connectSlotsByName(tooShort);
    } // setupUi

    void retranslateUi(QDialog *tooShort)
    {
        tooShort->setWindowTitle(QApplication::translate("tooShort", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("tooShort", "Username and password must be greater than 5!", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class tooShort: public Ui_tooShort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOSHORT_H
