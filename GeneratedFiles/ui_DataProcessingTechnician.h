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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataProcessingTechnician
{
public:
    QTabWidget *tabWidget;
    QWidget *request_list;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add;
    QPushButton *delete_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *user_id;
    QLineEdit *user_id_line;
    QVBoxLayout *verticalLayout_2;
    QLabel *no_of_request;
    QLineEdit *no_of_request_line;
    QVBoxLayout *verticalLayout_3;
    QLabel *book_request;
    QLineEdit *book_request_line;
    QVBoxLayout *verticalLayout_4;
    QLabel *author;
    QLineEdit *author_line;
    QVBoxLayout *verticalLayout_5;
    QLabel *publisher;
    QLineEdit *publisher_line;
    QVBoxLayout *verticalLayout_6;
    QLabel *day_of_arrival;
    QLineEdit *day_of_arrival_line;
    QWidget *book_managerment;
    QTableView *tableView_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *isbn;
    QLineEdit *isbn_line;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEdit_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_11;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_14;
    QLineEdit *lineEdit_14;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *DataProcessingTechnician)
    {
        if (DataProcessingTechnician->objectName().isEmpty())
            DataProcessingTechnician->setObjectName(QStringLiteral("DataProcessingTechnician"));
        DataProcessingTechnician->resize(973, 460);
        DataProcessingTechnician->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"\n"
"border-radius:2px;\n"
"}\n"
"QLabel{\n"
"font: 9pt \"Segoe UI\";\n"
"\n"
"}\n"
"QPushButton{\n"
"font: 9pt \"Segoe UI\";\n"
"	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"\n"
"}\n"
"QCheckBox{\n"
"font: 9pt \"Segoe UI\";\n"
"\n"
"}\n"
"\n"
"#DataProcessingTechnician{\n"
"background-image: url(:/appscreen/D:/TLBK/ASSIGNMENT 2 TITAN/image/aqua-blue-gradient-background.jpg);\n"
"}"));
        tabWidget = new QTabWidget(DataProcessingTechnician);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 40, 951, 411));
        tabWidget->setStyleSheet(QLatin1String("#request_list{\n"
"	background-color:  rgba(255, 255, 255,0.6);\n"
"\n"
"	border-radius:2px;\n"
"}\n"
"#book_managerment{\n"
"background-color:  rgba(255, 255, 255,0.6);\n"
"border-radius:2px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"width: 200px;\n"
"background-color:  rgba(255, 255, 255,0.6);\n"
"}\n"
"QTabBar::tab:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"width: 200px;\n"
"background-color: rgba(255, 255, 255,0.6);\n"
"}\n"
""));
        request_list = new QWidget();
        request_list->setObjectName(QStringLiteral("request_list"));
        tableView = new QTableView(request_list);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 100, 891, 271));
        layoutWidget = new QWidget(request_list);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(720, 60, 201, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        add = new QPushButton(layoutWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setStyleSheet(QLatin1String("background-color:rgb(74, 164, 203);\n"
"color:rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(add);

        delete_2 = new QPushButton(layoutWidget);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        delete_2->setStyleSheet(QLatin1String("background-color:rgb(74, 164, 203);\n"
"color:rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(delete_2);

        layoutWidget_2 = new QWidget(request_list);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 10, 891, 45));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        user_id = new QLabel(layoutWidget_2);
        user_id->setObjectName(QStringLiteral("user_id"));

        verticalLayout->addWidget(user_id);

        user_id_line = new QLineEdit(layoutWidget_2);
        user_id_line->setObjectName(QStringLiteral("user_id_line"));

        verticalLayout->addWidget(user_id_line);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        no_of_request = new QLabel(layoutWidget_2);
        no_of_request->setObjectName(QStringLiteral("no_of_request"));

        verticalLayout_2->addWidget(no_of_request);

        no_of_request_line = new QLineEdit(layoutWidget_2);
        no_of_request_line->setObjectName(QStringLiteral("no_of_request_line"));

        verticalLayout_2->addWidget(no_of_request_line);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        book_request = new QLabel(layoutWidget_2);
        book_request->setObjectName(QStringLiteral("book_request"));

        verticalLayout_3->addWidget(book_request);

        book_request_line = new QLineEdit(layoutWidget_2);
        book_request_line->setObjectName(QStringLiteral("book_request_line"));

        verticalLayout_3->addWidget(book_request_line);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        author = new QLabel(layoutWidget_2);
        author->setObjectName(QStringLiteral("author"));

        verticalLayout_4->addWidget(author);

        author_line = new QLineEdit(layoutWidget_2);
        author_line->setObjectName(QStringLiteral("author_line"));

        verticalLayout_4->addWidget(author_line);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        publisher = new QLabel(layoutWidget_2);
        publisher->setObjectName(QStringLiteral("publisher"));

        verticalLayout_5->addWidget(publisher);

        publisher_line = new QLineEdit(layoutWidget_2);
        publisher_line->setObjectName(QStringLiteral("publisher_line"));

        verticalLayout_5->addWidget(publisher_line);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        day_of_arrival = new QLabel(layoutWidget_2);
        day_of_arrival->setObjectName(QStringLiteral("day_of_arrival"));

        verticalLayout_6->addWidget(day_of_arrival);

        day_of_arrival_line = new QLineEdit(layoutWidget_2);
        day_of_arrival_line->setObjectName(QStringLiteral("day_of_arrival_line"));

        verticalLayout_6->addWidget(day_of_arrival_line);


        horizontalLayout->addLayout(verticalLayout_6);

        tabWidget->addTab(request_list, QString());
        book_managerment = new QWidget();
        book_managerment->setObjectName(QStringLiteral("book_managerment"));
        tableView_2 = new QTableView(book_managerment);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(30, 120, 891, 251));
        layoutWidget1 = new QWidget(book_managerment);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 20, 891, 45));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        isbn = new QLabel(layoutWidget1);
        isbn->setObjectName(QStringLiteral("isbn"));

        verticalLayout_7->addWidget(isbn);

        isbn_line = new QLineEdit(layoutWidget1);
        isbn_line->setObjectName(QStringLiteral("isbn_line"));
        isbn_line->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_7->addWidget(isbn_line);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_8->addWidget(label_8);

        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_8->addWidget(lineEdit_8);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_9->addWidget(label_9);

        lineEdit_9 = new QLineEdit(layoutWidget1);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_9->addWidget(lineEdit_9);


        horizontalLayout_3->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_10->addWidget(label_10);

        lineEdit_10 = new QLineEdit(layoutWidget1);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_10->addWidget(lineEdit_10);


        horizontalLayout_3->addLayout(verticalLayout_10);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_13->addWidget(label_13);

        lineEdit_13 = new QLineEdit(layoutWidget1);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_13->addWidget(lineEdit_13);


        horizontalLayout_3->addLayout(verticalLayout_13);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_11->addWidget(label_11);

        lineEdit_11 = new QLineEdit(layoutWidget1);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_11->addWidget(lineEdit_11);


        horizontalLayout_3->addLayout(verticalLayout_11);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_14->addWidget(label_14);

        lineEdit_14 = new QLineEdit(layoutWidget1);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_14->addWidget(lineEdit_14);


        horizontalLayout_3->addLayout(verticalLayout_14);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_12->addWidget(label_12);

        lineEdit_12 = new QLineEdit(layoutWidget1);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_12->addWidget(lineEdit_12);


        horizontalLayout_3->addLayout(verticalLayout_12);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_15->addWidget(label_15);

        lineEdit_15 = new QLineEdit(layoutWidget1);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 7px;"));

        verticalLayout_15->addWidget(lineEdit_15);


        horizontalLayout_3->addLayout(verticalLayout_15);

        layoutWidget2 = new QWidget(book_managerment);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(720, 70, 201, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("background-color:rgb(74, 164, 203);\n"
"color:rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("background-color:rgb(74, 164, 203);\n"
"color:rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(pushButton_4);

        tabWidget->addTab(book_managerment, QString());

        retranslateUi(DataProcessingTechnician);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DataProcessingTechnician);
    } // setupUi

    void retranslateUi(QWidget *DataProcessingTechnician)
    {
        DataProcessingTechnician->setWindowTitle(QApplication::translate("DataProcessingTechnician", "DataProcessingTechnician", Q_NULLPTR));
        add->setText(QApplication::translate("DataProcessingTechnician", "Add", Q_NULLPTR));
        delete_2->setText(QApplication::translate("DataProcessingTechnician", "Delete", Q_NULLPTR));
        user_id->setText(QApplication::translate("DataProcessingTechnician", "user_id", Q_NULLPTR));
        no_of_request->setText(QApplication::translate("DataProcessingTechnician", "no_of_request", Q_NULLPTR));
        book_request->setText(QApplication::translate("DataProcessingTechnician", "book_request", Q_NULLPTR));
        author->setText(QApplication::translate("DataProcessingTechnician", "author", Q_NULLPTR));
        publisher->setText(QApplication::translate("DataProcessingTechnician", "publisher", Q_NULLPTR));
        day_of_arrival->setText(QApplication::translate("DataProcessingTechnician", "day_of_arrival", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(request_list), QApplication::translate("DataProcessingTechnician", "Request List", Q_NULLPTR));
        isbn->setText(QApplication::translate("DataProcessingTechnician", "isbn", Q_NULLPTR));
        label_8->setText(QApplication::translate("DataProcessingTechnician", "book_name", Q_NULLPTR));
        label_9->setText(QApplication::translate("DataProcessingTechnician", "author", Q_NULLPTR));
        label_10->setText(QApplication::translate("DataProcessingTechnician", "year", Q_NULLPTR));
        label_13->setText(QApplication::translate("DataProcessingTechnician", "quantity", Q_NULLPTR));
        label_11->setText(QApplication::translate("DataProcessingTechnician", "publisher", Q_NULLPTR));
        label_14->setText(QApplication::translate("DataProcessingTechnician", "description", Q_NULLPTR));
        label_12->setText(QApplication::translate("DataProcessingTechnician", "status", Q_NULLPTR));
        label_15->setText(QApplication::translate("DataProcessingTechnician", "image", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("DataProcessingTechnician", "Add", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("DataProcessingTechnician", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(book_managerment), QApplication::translate("DataProcessingTechnician", "Book Management ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataProcessingTechnician: public Ui_DataProcessingTechnician {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROCESSINGTECHNICIAN_H
