/********************************************************************************
** Form generated from reading UI file 'DataProcessingTechnician.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAPROCESSINGTECHNICIAN_H
#define UI_DATAPROCESSINGTECHNICIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataProcessingTechnician
{
public:

    void setupUi(QWidget *DataProcessingTechnician)
    {
        if (DataProcessingTechnician->objectName().isEmpty())
            DataProcessingTechnician->setObjectName(QStringLiteral("DataProcessingTechnician"));
        DataProcessingTechnician->resize(400, 300);

        retranslateUi(DataProcessingTechnician);

        QMetaObject::connectSlotsByName(DataProcessingTechnician);
    } // setupUi

    void retranslateUi(QWidget *DataProcessingTechnician)
    {
        DataProcessingTechnician->setWindowTitle(QApplication::translate("DataProcessingTechnician", "DataProcessingTechnician", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataProcessingTechnician: public Ui_DataProcessingTechnician {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROCESSINGTECHNICIAN_H
