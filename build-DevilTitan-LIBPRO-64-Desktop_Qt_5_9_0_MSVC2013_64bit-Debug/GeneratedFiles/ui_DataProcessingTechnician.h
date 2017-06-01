/********************************************************************************
** Form generated from reading UI file 'DataProcessingTechnician.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAPROCESSINGTECHNICIAN_H
#define UI_DATAPROCESSINGTECHNICIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataProcessingTechnician
{
public:
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *DataProcessingTechnician)
    {
        if (DataProcessingTechnician->objectName().isEmpty())
            DataProcessingTechnician->setObjectName(QStringLiteral("DataProcessingTechnician"));
        DataProcessingTechnician->resize(800, 600);
        tableWidget = new QTableWidget(DataProcessingTechnician);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 120, 721, 401));
        widget = new QWidget(DataProcessingTechnician);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 761, 43));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_3->addWidget(lineEdit_3);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_4->addWidget(lineEdit_6);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_5->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_6->addWidget(lineEdit_5);


        horizontalLayout->addLayout(verticalLayout_6);

        widget1 = new QWidget(DataProcessingTechnician);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(600, 70, 181, 41));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(DataProcessingTechnician);

        QMetaObject::connectSlotsByName(DataProcessingTechnician);
    } // setupUi

    void retranslateUi(QWidget *DataProcessingTechnician)
    {
        DataProcessingTechnician->setWindowTitle(QApplication::translate("DataProcessingTechnician", "DataProcessingTechnician", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DataProcessingTechnician", "user_id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DataProcessingTechnician", "no_of_request", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DataProcessingTechnician", "book_request", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DataProcessingTechnician", "author", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DataProcessingTechnician", "publisher", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DataProcessingTechnician", "day_of_arrival", Q_NULLPTR));
        label->setText(QApplication::translate("DataProcessingTechnician", "user_id", Q_NULLPTR));
        label_2->setText(QApplication::translate("DataProcessingTechnician", "no_of_request", Q_NULLPTR));
        label_3->setText(QApplication::translate("DataProcessingTechnician", "book_request", Q_NULLPTR));
        label_4->setText(QApplication::translate("DataProcessingTechnician", "author", Q_NULLPTR));
        label_5->setText(QApplication::translate("DataProcessingTechnician", "publisher", Q_NULLPTR));
        label_6->setText(QApplication::translate("DataProcessingTechnician", "day_of_arrival", Q_NULLPTR));
        pushButton->setText(QApplication::translate("DataProcessingTechnician", "Add", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("DataProcessingTechnician", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataProcessingTechnician: public Ui_DataProcessingTechnician {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROCESSINGTECHNICIAN_H
