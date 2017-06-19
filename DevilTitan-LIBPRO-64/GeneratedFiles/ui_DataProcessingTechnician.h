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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataProcessingTechnician
{
public:
    QTabWidget *tabWidget;
    QWidget *request;
    QLabel *label_2;
    QPushButton *searchButton_3;
    QLineEdit *readerIDLe_3;
    QLineEdit *book_name;
    QLabel *label_3;
    QTableWidget *requestTable;
    QWidget *book;
    QLabel *label;
    QLineEdit *isbnsearch;
    QLineEdit *booknamesearch;
    QLabel *label_10;
    QLineEdit *year;
    QLabel *label_28;
    QPushButton *insertButton;
    QLineEdit *isbn;
    QLineEdit *rated_times;
    QPushButton *searchButton;
    QLabel *label_29;
    QLineEdit *quantity;
    QLineEdit *rate;
    QLabel *label_31;
    QLineEdit *author;
    QLabel *label_32;
    QLabel *label_41;
    QLabel *label_26;
    QLabel *label_30;
    QLineEdit *book_name_2;
    QLineEdit *publisher;
    QLabel *label_33;
    QCheckBox *physics;
    QCheckBox *general;
    QCheckBox *programing;
    QCheckBox *chemistry;
    QCheckBox *electronic;
    QCheckBox *technology;
    QCheckBox *environment;
    QLabel *label_34;
    QLineEdit *description;
    QTableWidget *bookTable;
    QPushButton *insertButton_2;

    void setupUi(QWidget *DataProcessingTechnician)
    {
        if (DataProcessingTechnician->objectName().isEmpty())
            DataProcessingTechnician->setObjectName(QStringLiteral("DataProcessingTechnician"));
        DataProcessingTechnician->resize(1307, 794);
        DataProcessingTechnician->setStyleSheet(QLatin1String("QTabWidget::pane{\n"
"\n"
"border-radius:7px;\n"
"}\n"
"QLabel{\n"
"font: 9pt \"Segoe UI\";\n"
"\n"
"}\n"
"\n"
"QCheckBox{\n"
"font: 9pt \"Segoe UI\";\n"
"\n"
"}\n"
"\n"
"#DataProcessingTechnician{\n"
"background-image: url(:/appscreen/Resources/appscreen/dataproscr.jpg);\n"
"}\n"
"#add:hover{\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,fx: 0.3, fy: -0.4,radius: 1.35,stop: 0 rgb(238,226,191), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}\n"
"#notipro:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(0,0,0), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"QTableWidget:item\n"
"\n"
"{\n"
"color:rgb(53, 54, 56);\n"
"padding:5px;\n"
"margin:15px;\n"
"margin-left:0px;\n"
"font-size:12px;\n"
"\n"
"font-family:\"Open Sans\";\n"
"border:0px;\n"
"\n"
"}\n"
"\n"
"QTableWidget::item:selected\n"
"{\n"
"background-color:red;\n"
"}"));
        tabWidget = new QTabWidget(DataProcessingTechnician);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 70, 1251, 691));
        tabWidget->setStyleSheet(QLatin1String("#tabWidget{\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .4)\n"
";border-color:rgba(255, 255, 255, .5);\n"
"\n"
"}\n"
"\n"
"#request{\n"
"\n"
"	border-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 12px;background-color: rgba(255, 255, 255, .1);border-color:rgba(255, 255, 255, .3);\n"
"border-top-left-radius:0px;\n"
"}\n"
"#book{\n"
"	border-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 12px;background-color: rgba(255, 255, 255, .1);border-color:rgba(255, 255, 255, .3);\n"
"border-top-left-radius:0px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 200px;\n"
"height:60px;\n"
"\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(66, 134, 244, .2);border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"QTabBar::ta"
                        "b:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 200px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .4);border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"\n"
"QPushButton {\n"
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
"QLineEdit\n"
"{\n"
"border-radius:5px;\n"
"}\n"
"QLabel{\n"
"color:white;}\n"
""));
        request = new QWidget();
        request->setObjectName(QStringLiteral("request"));
        label_2 = new QLabel(request);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 10, 75, 20));
        label_2->setStyleSheet(QStringLiteral(""));
        searchButton_3 = new QPushButton(request);
        searchButton_3->setObjectName(QStringLiteral("searchButton_3"));
        searchButton_3->setGeometry(QRect(1130, 560, 90, 61));
        searchButton_3->setStyleSheet(QStringLiteral("border:0px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/unchecked.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton_3->setIcon(icon);
        searchButton_3->setIconSize(QSize(30, 40));
        readerIDLe_3 = new QLineEdit(request);
        readerIDLe_3->setObjectName(QStringLiteral("readerIDLe_3"));
        readerIDLe_3->setGeometry(QRect(32, 39, 311, 41));
        readerIDLe_3->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.4);\n"
"border-radius:5px;"));
        book_name = new QLineEdit(request);
        book_name->setObjectName(QStringLiteral("book_name"));
        book_name->setGeometry(QRect(370, 40, 221, 41));
        book_name->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.4);\n"
"border-radius:5px;"));
        label_3 = new QLabel(request);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 10, 81, 20));
        label_3->setStyleSheet(QStringLiteral(""));
        requestTable = new QTableWidget(request);
        requestTable->setObjectName(QStringLiteral("requestTable"));
        requestTable->setGeometry(QRect(30, 110, 1191, 421));
        requestTable->setStyleSheet(QLatin1String("border: 0;\n"
"	font: 10pt \"Segoe UI\";\n"
"font-weight:600;\n"
"border-radius: 5px;background-color: rgba(255, 255, 255, .4);alternate-background-color:rgba(159, 173, 201,0.2);selection-background-color:red;"));
        tabWidget->addTab(request, QString());
        book = new QWidget();
        book->setObjectName(QStringLiteral("book"));
        book->setStyleSheet(QStringLiteral("#tabWidget{border-radius:0px;}"));
        label = new QLabel(book);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 91, 20));
        label->setStyleSheet(QStringLiteral(""));
        isbnsearch = new QLineEdit(book);
        isbnsearch->setObjectName(QStringLiteral("isbnsearch"));
        isbnsearch->setGeometry(QRect(32, 39, 141, 41));
        isbnsearch->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        booknamesearch = new QLineEdit(book);
        booknamesearch->setObjectName(QStringLiteral("booknamesearch"));
        booknamesearch->setGeometry(QRect(180, 40, 401, 41));
        booknamesearch->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_10 = new QLabel(book);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 10, 171, 20));
        label_10->setStyleSheet(QStringLiteral(""));
        year = new QLineEdit(book);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(760, 260, 81, 51));
        year->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_28 = new QLabel(book);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(630, 70, 75, 20));
        label_28->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        insertButton = new QPushButton(book);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setGeometry(QRect(940, 550, 90, 61));
        insertButton->setStyleSheet(QStringLiteral("border:0px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertButton->setIcon(icon1);
        insertButton->setIconSize(QSize(30, 30));
        isbn = new QLineEdit(book);
        isbn->setObjectName(QStringLiteral("isbn"));
        isbn->setGeometry(QRect(600, 100, 141, 51));
        isbn->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        rated_times = new QLineEdit(book);
        rated_times->setObjectName(QStringLiteral("rated_times"));
        rated_times->setGeometry(QRect(760, 350, 101, 51));
        rated_times->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        searchButton = new QPushButton(book);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(1140, 550, 90, 61));
        searchButton->setStyleSheet(QStringLiteral("border:0px;"));
        searchButton->setIcon(icon);
        searchButton->setIconSize(QSize(30, 40));
        label_29 = new QLabel(book);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(780, 80, 75, 20));
        label_29->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        quantity = new QLineEdit(book);
        quantity->setObjectName(QStringLiteral("quantity"));
        quantity->setGeometry(QRect(600, 260, 141, 51));
        quantity->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        rate = new QLineEdit(book);
        rate->setObjectName(QStringLiteral("rate"));
        rate->setGeometry(QRect(600, 350, 141, 51));
        rate->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_31 = new QLabel(book);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(780, 240, 75, 20));
        label_31->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        author = new QLineEdit(book);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(760, 100, 191, 51));
        author->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_32 = new QLabel(book);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(630, 320, 81, 20));
        label_32->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        label_41 = new QLabel(book);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(764, 320, 151, 21));
        label_41->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        label_26 = new QLabel(book);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(622, 160, 391, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);
        label_26->setStyleSheet(QLatin1String("background-color:transparent\n"
""));
        label_30 = new QLabel(book);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(620, 240, 75, 20));
        label_30->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        book_name_2 = new QLineEdit(book);
        book_name_2->setObjectName(QStringLiteral("book_name_2"));
        book_name_2->setGeometry(QRect(600, 180, 351, 51));
        book_name_2->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        publisher = new QLineEdit(book);
        publisher->setObjectName(QStringLiteral("publisher"));
        publisher->setGeometry(QRect(850, 260, 101, 51));
        publisher->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        label_33 = new QLabel(book);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(854, 240, 111, 20));
        label_33->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        physics = new QCheckBox(book);
        physics->setObjectName(QStringLiteral("physics"));
        physics->setGeometry(QRect(600, 510, 91, 20));
        physics->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        general = new QCheckBox(book);
        general->setObjectName(QStringLiteral("general"));
        general->setGeometry(QRect(600, 430, 81, 20));
        general->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        programing = new QCheckBox(book);
        programing->setObjectName(QStringLiteral("programing"));
        programing->setGeometry(QRect(720, 430, 101, 20));
        programing->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        chemistry = new QCheckBox(book);
        chemistry->setObjectName(QStringLiteral("chemistry"));
        chemistry->setGeometry(QRect(840, 430, 101, 20));
        chemistry->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        electronic = new QCheckBox(book);
        electronic->setObjectName(QStringLiteral("electronic"));
        electronic->setGeometry(QRect(720, 470, 111, 20));
        electronic->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        technology = new QCheckBox(book);
        technology->setObjectName(QStringLiteral("technology"));
        technology->setGeometry(QRect(840, 470, 101, 20));
        technology->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        environment = new QCheckBox(book);
        environment->setObjectName(QStringLiteral("environment"));
        environment->setGeometry(QRect(600, 470, 101, 20));
        environment->setStyleSheet(QLatin1String("background-color:transparent;\n"
"color:white;\n"
"font-family:\"Roboto\";\n"
"border:0px;"));
        label_34 = new QLabel(book);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(970, 80, 161, 20));
        label_34->setStyleSheet(QLatin1String("background-color:transparent;\n"
""));
        description = new QLineEdit(book);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(970, 100, 261, 431));
        description->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"font-family:Roboto;\n"
"font-size:14px;\n"
"padding-left: 8;\n"
"color:rgb(55,55,55);\n"
""));
        description->setMaxLength(600);
        description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        bookTable = new QTableWidget(book);
        bookTable->setObjectName(QStringLiteral("bookTable"));
        bookTable->setGeometry(QRect(30, 100, 551, 501));
        bookTable->setStyleSheet(QLatin1String("border: 0;\n"
"	font: 10pt \"Segoe UI\";\n"
"font-weight:600;\n"
"border-radius: 5px;background-color: rgba(255, 255, 255, .4);alternate-background-color:rgba(159, 173, 201,0.2);selection-background-color:red;"));
        insertButton_2 = new QPushButton(book);
        insertButton_2->setObjectName(QStringLiteral("insertButton_2"));
        insertButton_2->setGeometry(QRect(1040, 550, 90, 61));
        insertButton_2->setStyleSheet(QStringLiteral("border:0px;"));
        insertButton_2->setIcon(icon1);
        insertButton_2->setIconSize(QSize(30, 30));
        tabWidget->addTab(book, QString());
        QWidget::setTabOrder(tabWidget, readerIDLe_3);
        QWidget::setTabOrder(readerIDLe_3, book_name);
        QWidget::setTabOrder(book_name, requestTable);
        QWidget::setTabOrder(requestTable, searchButton_3);
        QWidget::setTabOrder(searchButton_3, isbnsearch);
        QWidget::setTabOrder(isbnsearch, booknamesearch);
        QWidget::setTabOrder(booknamesearch, isbn);
        QWidget::setTabOrder(isbn, author);
        QWidget::setTabOrder(author, book_name_2);
        QWidget::setTabOrder(book_name_2, quantity);
        QWidget::setTabOrder(quantity, year);
        QWidget::setTabOrder(year, publisher);
        QWidget::setTabOrder(publisher, rate);
        QWidget::setTabOrder(rate, rated_times);
        QWidget::setTabOrder(rated_times, general);
        QWidget::setTabOrder(general, programing);
        QWidget::setTabOrder(programing, chemistry);
        QWidget::setTabOrder(chemistry, environment);
        QWidget::setTabOrder(environment, electronic);
        QWidget::setTabOrder(electronic, technology);
        QWidget::setTabOrder(technology, physics);
        QWidget::setTabOrder(physics, description);
        QWidget::setTabOrder(description, insertButton);
        QWidget::setTabOrder(insertButton, insertButton_2);
        QWidget::setTabOrder(insertButton_2, searchButton);
        QWidget::setTabOrder(searchButton, bookTable);

        retranslateUi(DataProcessingTechnician);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DataProcessingTechnician);
    } // setupUi

    void retranslateUi(QWidget *DataProcessingTechnician)
    {
        DataProcessingTechnician->setWindowTitle(QApplication::translate("DataProcessingTechnician", "DataProcessingTechnician", Q_NULLPTR));
        label_2->setText(QApplication::translate("DataProcessingTechnician", "Username", Q_NULLPTR));
        searchButton_3->setText(QString());
        label_3->setText(QApplication::translate("DataProcessingTechnician", "Book name", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(request), QApplication::translate("DataProcessingTechnician", "request", Q_NULLPTR));
        label->setText(QApplication::translate("DataProcessingTechnician", "ISBN:", Q_NULLPTR));
        booknamesearch->setText(QString());
        label_10->setText(QApplication::translate("DataProcessingTechnician", "Book Name:", Q_NULLPTR));
        label_28->setText(QApplication::translate("DataProcessingTechnician", "ISBN", Q_NULLPTR));
        insertButton->setText(QString());
        searchButton->setText(QString());
        label_29->setText(QApplication::translate("DataProcessingTechnician", "Author", Q_NULLPTR));
        rate->setText(QString());
        label_31->setText(QApplication::translate("DataProcessingTechnician", "Year", Q_NULLPTR));
        label_32->setText(QApplication::translate("DataProcessingTechnician", "Rate", Q_NULLPTR));
        label_41->setText(QApplication::translate("DataProcessingTechnician", "Rated times", Q_NULLPTR));
        label_26->setText(QApplication::translate("DataProcessingTechnician", "Book Name", Q_NULLPTR));
        label_30->setText(QApplication::translate("DataProcessingTechnician", " Number", Q_NULLPTR));
        book_name_2->setText(QString());
        publisher->setText(QString());
        label_33->setText(QApplication::translate("DataProcessingTechnician", "Publisher", Q_NULLPTR));
        physics->setText(QApplication::translate("DataProcessingTechnician", "Physics", Q_NULLPTR));
        general->setText(QApplication::translate("DataProcessingTechnician", "General", Q_NULLPTR));
        programing->setText(QApplication::translate("DataProcessingTechnician", "Programing", Q_NULLPTR));
        chemistry->setText(QApplication::translate("DataProcessingTechnician", "Chemistry", Q_NULLPTR));
        electronic->setText(QApplication::translate("DataProcessingTechnician", "Electronic", Q_NULLPTR));
        technology->setText(QApplication::translate("DataProcessingTechnician", "Technology", Q_NULLPTR));
        environment->setText(QApplication::translate("DataProcessingTechnician", "Environment", Q_NULLPTR));
        label_34->setText(QApplication::translate("DataProcessingTechnician", "  Description", Q_NULLPTR));
        insertButton_2->setText(QApplication::translate("DataProcessingTechnician", "clear", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(book), QApplication::translate("DataProcessingTechnician", "book", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DataProcessingTechnician: public Ui_DataProcessingTechnician {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROCESSINGTECHNICIAN_H
