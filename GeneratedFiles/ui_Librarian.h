/********************************************************************************
** Form generated from reading UI file 'Librarian.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIAN_H
#define UI_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Librarian
{
public:
    QTabWidget *tabWidget;
    QWidget *ReaderRent;
    QTableWidget *borrowTable;
    QWidget *violation;

    void setupUi(QWidget *Librarian)
    {
        if (Librarian->objectName().isEmpty())
            Librarian->setObjectName(QStringLiteral("Librarian"));
        Librarian->resize(1042, 588);
        tabWidget = new QTabWidget(Librarian);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 120, 1021, 461));
        ReaderRent = new QWidget();
        ReaderRent->setObjectName(QStringLiteral("ReaderRent"));
        borrowTable = new QTableWidget(ReaderRent);
        if (borrowTable->columnCount() < 5)
            borrowTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        borrowTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        borrowTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        borrowTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        borrowTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        borrowTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        borrowTable->setObjectName(QStringLiteral("borrowTable"));
        borrowTable->setGeometry(QRect(5, 11, 1001, 421));
        tabWidget->addTab(ReaderRent, QString());
        violation = new QWidget();
        violation->setObjectName(QStringLiteral("violation"));
        tabWidget->addTab(violation, QString());

        retranslateUi(Librarian);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Librarian);
    } // setupUi

    void retranslateUi(QWidget *Librarian)
    {
        Librarian->setWindowTitle(QApplication::translate("Librarian", "Librarian", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = borrowTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Librarian", "M\303\243 s\341\273\221 \304\221\341\273\231c gi\341\272\243", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = borrowTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Librarian", "T\303\252n s\303\241ch m\306\260\341\273\243n", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = borrowTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Librarian", "M\303\243 s\341\273\221 s\303\241ch", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = borrowTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Librarian", "Ng\303\240y m\306\260\341\273\243n", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = borrowTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Librarian", "Ng\303\240y h\341\272\277t h\341\272\241n", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReaderRent), QApplication::translate("Librarian", "Danh s\303\241ch m\306\260\341\273\243n s\303\241ch", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(violation), QApplication::translate("Librarian", "Vi ph\341\272\241m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Librarian: public Ui_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
