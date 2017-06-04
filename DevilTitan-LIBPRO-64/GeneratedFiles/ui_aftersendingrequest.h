/********************************************************************************
** Form generated from reading UI file 'aftersendingrequest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFTERSENDINGREQUEST_H
#define UI_AFTERSENDINGREQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_afterSendingRequest
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *afterSendingRequest)
    {
        if (afterSendingRequest->objectName().isEmpty())
            afterSendingRequest->setObjectName(QStringLiteral("afterSendingRequest"));
        afterSendingRequest->resize(496, 96);
        afterSendingRequest->setStyleSheet(QStringLiteral("QLabel { font-family: Roboto; font-size: 13px;}"));
        label = new QLabel(afterSendingRequest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 341, 21));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(afterSendingRequest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 50, 371, 21));
        label_3 = new QLabel(afterSendingRequest);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 71, 71));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/20170301_58b63a30bf6d4.png")));
        label_3->setScaledContents(true);

        retranslateUi(afterSendingRequest);

        QMetaObject::connectSlotsByName(afterSendingRequest);
    } // setupUi

    void retranslateUi(QDialog *afterSendingRequest)
    {
        afterSendingRequest->setWindowTitle(QApplication::translate("afterSendingRequest", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("afterSendingRequest", "Your request has just been sent.", Q_NULLPTR));
        label_2->setText(QApplication::translate("afterSendingRequest", "Please check your notification regularly to get furthur information!", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class afterSendingRequest: public Ui_afterSendingRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFTERSENDINGREQUEST_H
