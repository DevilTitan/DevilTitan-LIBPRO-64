/********************************************************************************
** Form generated from reading UI file 'Librarian.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIAN_H
#define UI_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Librarian
{
public:
    QTabWidget *tabWidget;
    QWidget *ReaderRent;
    QTableView *borrowTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *readerIDLe;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *isbnLe;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *dueDateLe;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *borrowDateLe;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_3;
    QPushButton *insertButton;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_4;
    QPushButton *searchButton;
    QWidget *violation;
    QTableView *violationTable;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *readerIDLe_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *violationLe;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *yearLe;
    QLabel *label_8;
    QLineEdit *monthLe;
    QLabel *label_9;
    QLineEdit *dayLe;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer;
    QPushButton *insertButton_2;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_2;
    QPushButton *searchButton_2;

    void setupUi(QWidget *Librarian)
    {
        if (Librarian->objectName().isEmpty())
            Librarian->setObjectName(QStringLiteral("Librarian"));
        Librarian->resize(1126, 574);
        Librarian->setStyleSheet(QLatin1String("#Librarian{\n"
"background-image: url(:/appscreen/Resources/appscreen/librarian-background.jpg);\n"
"}\n"
"QLabel{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"font: 9pt \"Segoe UI\";\n"
"}\n"
"QTabWidget::pane{\n"
"border:0;\n"
"}\n"
"QTabWidget::tab{\n"
"background-color:  rgba(85, 170, 0, 0.3);\n"
"}\n"
"QLineEdit{\n"
"border-radius: 2px;\n"
"}"));
        tabWidget = new QTabWidget(Librarian);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 120, 1071, 441));
        tabWidget->setStyleSheet(QLatin1String("#tabWidget{\n"
"	background-color: rgba(85, 170, 0, 0.5);\n"
"}\n"
"#ReaderRent{\n"
"	background-color:  rgba(85, 170, 0, 0.5);\n"
"	border-radius:2px;\n"
"}\n"
"#violation{\n"
"	background-color:  rgba(85, 170, 0, 0.5);\n"
"	border-radius:2px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 200px;\n"
"background-color: rgba(85, 170, 0, 0.2);  \n"
"}\n"
"QTabBar::tab:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 200px;\n"
"background-color:  rgba(85, 170, 0, 0.5);\n"
"}\n"
""));
        ReaderRent = new QWidget();
        ReaderRent->setObjectName(QStringLiteral("ReaderRent"));
        borrowTable = new QTableView(ReaderRent);
        borrowTable->setObjectName(QStringLiteral("borrowTable"));
        borrowTable->setGeometry(QRect(10, 70, 1051, 331));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(borrowTable->sizePolicy().hasHeightForWidth());
        borrowTable->setSizePolicy(sizePolicy);
        borrowTable->horizontalHeader()->setMinimumSectionSize(200);
        layoutWidget = new QWidget(ReaderRent);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 1011, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(label);

        readerIDLe = new QLineEdit(layoutWidget);
        readerIDLe->setObjectName(QStringLiteral("readerIDLe"));

        verticalLayout_4->addWidget(readerIDLe);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        isbnLe = new QLineEdit(layoutWidget);
        isbnLe->setObjectName(QStringLiteral("isbnLe"));

        verticalLayout_3->addWidget(isbnLe);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        dueDateLe = new QLineEdit(layoutWidget);
        dueDateLe->setObjectName(QStringLiteral("dueDateLe"));

        verticalLayout_2->addWidget(dueDateLe);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        borrowDateLe = new QLineEdit(layoutWidget);
        borrowDateLe->setObjectName(QStringLiteral("borrowDateLe"));

        verticalLayout->addWidget(borrowDateLe);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        insertButton = new QPushButton(layoutWidget);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setStyleSheet(QLatin1String("#insertButton{\n"
"background-color: rgba(255, 255, 255,0.6);\n"
"}\n"
"#insertButton:pressed{\n"
"background-color: rgba(255, 255, 255,1);\n"
"}"));

        verticalLayout_10->addWidget(insertButton);


        horizontalLayout_2->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setStyleSheet(QLatin1String("#searchButton{\n"
"background-color: rgba(255, 255, 255,0.6);\n"
"}\n"
"#searchButton:pressed{\n"
"background-color: rgba(255, 255, 255,1);\n"
"}"));

        verticalLayout_11->addWidget(searchButton);


        horizontalLayout_2->addLayout(verticalLayout_11);

        tabWidget->addTab(ReaderRent, QString());
        violation = new QWidget();
        violation->setObjectName(QStringLiteral("violation"));
        violationTable = new QTableView(violation);
        violationTable->setObjectName(QStringLiteral("violationTable"));
        violationTable->setGeometry(QRect(10, 80, 1051, 311));
        violationTable->horizontalHeader()->setMinimumSectionSize(300);
        layoutWidget1 = new QWidget(violation);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 10, 1001, 49));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        readerIDLe_2 = new QLineEdit(layoutWidget1);
        readerIDLe_2->setObjectName(QStringLiteral("readerIDLe_2"));

        verticalLayout_5->addWidget(readerIDLe_2);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_6->addWidget(label_6);

        violationLe = new QLineEdit(layoutWidget1);
        violationLe->setObjectName(QStringLiteral("violationLe"));

        verticalLayout_6->addWidget(violationLe);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(label_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        yearLe = new QLineEdit(layoutWidget1);
        yearLe->setObjectName(QStringLiteral("yearLe"));
        sizePolicy1.setHeightForWidth(yearLe->sizePolicy().hasHeightForWidth());
        yearLe->setSizePolicy(sizePolicy1);
        yearLe->setMinimumSize(QSize(50, 0));
        yearLe->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(yearLe);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMinimumSize(QSize(10, 0));
        label_8->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_3->addWidget(label_8);

        monthLe = new QLineEdit(layoutWidget1);
        monthLe->setObjectName(QStringLiteral("monthLe"));
        sizePolicy1.setHeightForWidth(monthLe->sizePolicy().hasHeightForWidth());
        monthLe->setSizePolicy(sizePolicy1);
        monthLe->setMinimumSize(QSize(50, 0));
        monthLe->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(monthLe);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(10, 0));
        label_9->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_3->addWidget(label_9);

        dayLe = new QLineEdit(layoutWidget1);
        dayLe->setObjectName(QStringLiteral("dayLe"));
        sizePolicy1.setHeightForWidth(dayLe->sizePolicy().hasHeightForWidth());
        dayLe->setSizePolicy(sizePolicy1);
        dayLe->setMinimumSize(QSize(50, 0));
        dayLe->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(dayLe);


        verticalLayout_7->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer = new QSpacerItem(72, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        insertButton_2 = new QPushButton(layoutWidget1);
        insertButton_2->setObjectName(QStringLiteral("insertButton_2"));
        insertButton_2->setStyleSheet(QLatin1String("#insertButton_2{\n"
"background-color: rgba(255, 255, 255,0.6);\n"
"}\n"
"#insertButton_2:pressed{\n"
"background-color: rgba(255, 255, 255,1);\n"
"}"));

        verticalLayout_8->addWidget(insertButton_2);


        horizontalLayout->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        searchButton_2 = new QPushButton(layoutWidget1);
        searchButton_2->setObjectName(QStringLiteral("searchButton_2"));
        searchButton_2->setStyleSheet(QLatin1String("#searchButton_2{\n"
"background-color: rgba(255, 255, 255,0.6);\n"
"}\n"
"#searchButton_2:pressed{\n"
"background-color: rgba(255, 255, 255,1);\n"
"}"));

        verticalLayout_9->addWidget(searchButton_2);


        horizontalLayout->addLayout(verticalLayout_9);

        tabWidget->addTab(violation, QString());

        retranslateUi(Librarian);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Librarian);
    } // setupUi

    void retranslateUi(QWidget *Librarian)
    {
        Librarian->setWindowTitle(QApplication::translate("Librarian", "Librarian", Q_NULLPTR));
        label->setText(QApplication::translate("Librarian", "Reader's ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Librarian", "ISBN", Q_NULLPTR));
        label_4->setText(QApplication::translate("Librarian", "Due date", Q_NULLPTR));
        label_3->setText(QApplication::translate("Librarian", "Borrow date", Q_NULLPTR));
        insertButton->setText(QApplication::translate("Librarian", "Insert", Q_NULLPTR));
        searchButton->setText(QApplication::translate("Librarian", "Search", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReaderRent), QApplication::translate("Librarian", "Rental list", Q_NULLPTR));
        label_5->setText(QApplication::translate("Librarian", "Reader's ID", Q_NULLPTR));
        label_6->setText(QApplication::translate("Librarian", "Violation", Q_NULLPTR));
        label_7->setText(QApplication::translate("Librarian", "Date of infringement(yyyy/mm/dd)", Q_NULLPTR));
        label_8->setText(QApplication::translate("Librarian", "/", Q_NULLPTR));
        label_9->setText(QApplication::translate("Librarian", "/", Q_NULLPTR));
        insertButton_2->setText(QApplication::translate("Librarian", "Insert", Q_NULLPTR));
        searchButton_2->setText(QApplication::translate("Librarian", "Search", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(violation), QApplication::translate("Librarian", "Reader's violation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Librarian: public Ui_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
