/********************************************************************************
** Form generated from reading UI file 'confirmpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMPASSWORD_H
#define UI_CONFIRMPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_confirmPassword
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *confirmPassword)
    {
        if (confirmPassword->objectName().isEmpty())
            confirmPassword->setObjectName(QStringLiteral("confirmPassword"));
        confirmPassword->resize(400, 84);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(confirmPassword->sizePolicy().hasHeightForWidth());
        confirmPassword->setSizePolicy(sizePolicy);
        confirmPassword->setMinimumSize(QSize(0, 0));
        confirmPassword->setStyleSheet(QLatin1String("color: white;\n"
"font-family: Roboto;\n"
"font-size: 13px;"));
        label = new QLabel(confirmPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 61, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/padlock.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(confirmPassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 20, 181, 21));
        label_3 = new QLabel(confirmPassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 50, 181, 21));

        retranslateUi(confirmPassword);

        QMetaObject::connectSlotsByName(confirmPassword);
    } // setupUi

    void retranslateUi(QDialog *confirmPassword)
    {
        confirmPassword->setWindowTitle(QApplication::translate("confirmPassword", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("confirmPassword", "Passwords do not match.", Q_NULLPTR));
        label_3->setText(QApplication::translate("confirmPassword", "Please re-enter your password!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class confirmPassword: public Ui_confirmPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPASSWORD_H
