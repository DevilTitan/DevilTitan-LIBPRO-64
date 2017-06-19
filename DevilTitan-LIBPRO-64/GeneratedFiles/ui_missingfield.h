/********************************************************************************
** Form generated from reading UI file 'missingfield.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MISSINGFIELD_H
#define UI_MISSINGFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_missingField
{
public:
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *missingField)
    {
        if (missingField->objectName().isEmpty())
            missingField->setObjectName(QStringLiteral("missingField"));
        missingField->resize(400, 100);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(missingField->sizePolicy().hasHeightForWidth());
        missingField->setSizePolicy(sizePolicy);
        missingField->setMinimumSize(QSize(400, 100));
        missingField->setStyleSheet(QLatin1String("color: white;\n"
"font-family: Roboto;\n"
"font-size: 15px;"));
        label_2 = new QLabel(missingField);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 40, 251, 21));
        label_4 = new QLabel(missingField);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 20, 61, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/missing.png")));
        label_4->setScaledContents(true);

        retranslateUi(missingField);

        QMetaObject::connectSlotsByName(missingField);
    } // setupUi

    void retranslateUi(QDialog *missingField)
    {
        missingField->setWindowTitle(QApplication::translate("missingField", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("missingField", "Some fields have not been filled yet!", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class missingField: public Ui_missingField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MISSINGFIELD_H
