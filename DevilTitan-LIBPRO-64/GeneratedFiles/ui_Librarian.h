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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Librarian
{
public:
    QTabWidget *tabWidget;
    QWidget *ReaderRent;
    QTableView *borrowTable;
    QPushButton *insertButton;
    QPushButton *searchButton;
    QLabel *label;
    QLineEdit *readerIDLe;
    QLabel *error2;
    QLineEdit *readerIDLe_4;
    QLabel *label_10;
    QWidget *tab;
    QTableView *waitTable;
    QLabel *label_2;
    QPushButton *insertButton_3;
    QPushButton *searchButton_3;
    QLineEdit *readerIDLe_3;
    QLabel *Usernamelbl_7;
    QLabel *Usernamelbl_8;
    QLabel *Usernamelbl_9;
    QLabel *Usernamelbl_10;
    QLabel *Usernamelbl_11;
    QLineEdit *book_name;
    QLineEdit *number;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *error;
    QWidget *violation;
    QTableView *renting;
    QPushButton *insertButton_4;
    QLabel *label_6;
    QLineEdit *violationLe;
    QLabel *label_5;
    QLineEdit *readerIDLe_2;
    QLabel *Usernamelbl_2;
    QLabel *Usernamelbl_3;
    QLabel *Usernamelbl_4;
    QLabel *Usernamelbl_5;
    QLabel *Usernamelbl_6;
    QLabel *Usernamelbl_12;
    QLabel *Usernamelbl_13;
    QLabel *error3;
    QPushButton *insertButton_5;
    QFrame *frame_2;
    QLabel *notify_2;
    QLabel *Usernamelbl;
    QPushButton *pushButton;
    QPushButton *publicChat_3;
    QPushButton *logout;
    QPushButton *publicChat_2;
    QPushButton *theme;
    QPushButton *publicChat_6;
    QLabel *notify;
    QFrame *frame_3;
    QFrame *frame_4;
    QLabel *Usernamelbl_17;
    QLabel *greeting;
    QLabel *time;

    void setupUi(QWidget *Librarian)
    {
        if (Librarian->objectName().isEmpty())
            Librarian->setObjectName(QStringLiteral("Librarian"));
        Librarian->resize(1239, 750);
        Librarian->setStyleSheet(QLatin1String("#Librarian{\n"
"\n"
"background-image: url(:/appscreen/Resources/appscreen/flat2 - Copy.png);\n"
"\n"
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
"background-color: rgba(77, 166, 255,0.6)\n"
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
"}"));
        tabWidget = new QTabWidget(Librarian);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(180, 70, 1061, 691));
        tabWidget->setStyleSheet(QLatin1String("#tabWidget{\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .4);border-color:rgba(255, 255, 255, .5);\n"
"\n"
"\n"
"}\n"
"#violation\n"
"{\n"
"\n"
"	border-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 0px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 12px;background-color: rgba(255, 255, 255, .3);border-color:rgba(255, 255, 255, .3);\n"
"border-top-left-radius:0px;\n"
"border-radius:0px;\n"
"}\n"
"#ReaderRent{\n"
"\n"
"	border-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 0px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 12px;background-color: rgba(255, 255, 255, .3);border-color:rgba(255, 255, 255, .3);\n"
"border-top-left-radius:0px;\n"
"border-radius:0px;}\n"
"#tab{\n"
"	border-radius:5px;\n"
"	border-top-left-radius:0px;\n"
"border: 0px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 12px;background-color: rgba(255, 255, 255, .3);border-color:rgba(255, 255, 255, .3);\n"
""
                        "border-top-left-radius:0px;\n"
"border-radius:0px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 353.45px;\n"
"height:70px;\n"
"\n"
"border: 0px solid black;\n"
"	font: 10pt \"Open Sans\";\n"
"border-radius: 0px;background-color: rgba(66, 134, 244, .2);border-color:rgba(255, 255, 255, .3);background-color:rgba(55,55,55,0.5);\n"
"font-family:Comic Sans;\n"
"}\n"
"QTabBar::tab:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"\n"
"border: 0px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .3);border-color:rgba(66, 134, 244, .2); color:rgb(55,55,55) ; font-weight:500;border:0px;\n"
"background-color:rgba(255,255,255,0.3);color:white; font-weight:500; font-size:17px;font-family:Open Sans;\n"
" text-decoration:underline\n"
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
""
                        "radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"\n"
"\n"
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
""));
        ReaderRent = new QWidget();
        ReaderRent->setObjectName(QStringLiteral("ReaderRent"));
        ReaderRent->setStyleSheet(QStringLiteral("#tabWidget{border-radius:0px;}"));
        borrowTable = new QTableView(ReaderRent);
        borrowTable->setObjectName(QStringLiteral("borrowTable"));
        borrowTable->setGeometry(QRect(40, 120, 991, 431));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(borrowTable->sizePolicy().hasHeightForWidth());
        borrowTable->setSizePolicy(sizePolicy);
        borrowTable->setStyleSheet(QLatin1String("background-color: rgba(255,255,255,0.5);\n"
"gridline-color:white;"));
        borrowTable->horizontalHeader()->setMinimumSectionSize(200);
        insertButton = new QPushButton(ReaderRent);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setGeometry(QRect(835, 31, 90, 61));
        insertButton->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:4px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        insertButton->setIcon(icon);
        insertButton->setIconSize(QSize(30, 30));
        searchButton = new QPushButton(ReaderRent);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(940, 30, 90, 61));
        searchButton->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:4px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/unchecked.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon1);
        searchButton->setIconSize(QSize(30, 40));
        label = new QLabel(ReaderRent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 75, 20));
        label->setStyleSheet(QStringLiteral(""));
        readerIDLe = new QLineEdit(ReaderRent);
        readerIDLe->setObjectName(QStringLiteral("readerIDLe"));
        readerIDLe->setGeometry(QRect(40, 40, 621, 51));
        readerIDLe->setStyleSheet(QLatin1String("border-radius:3px;\n"
"background-color:rgba(255,255,255,0.7);"));
        error2 = new QLabel(ReaderRent);
        error2->setObjectName(QStringLiteral("error2"));
        error2->setGeometry(QRect(50, 570, 981, 31));
        error2->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        readerIDLe_4 = new QLineEdit(ReaderRent);
        readerIDLe_4->setObjectName(QStringLiteral("readerIDLe_4"));
        readerIDLe_4->setGeometry(QRect(700, 40, 101, 51));
        readerIDLe_4->setStyleSheet(QLatin1String("border-radius:5px;\n"
"background-color:rgba(255,255,255,0.7);"));
        label_10 = new QLabel(ReaderRent);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(690, 10, 141, 20));
        label_10->setStyleSheet(QStringLiteral(""));
        tabWidget->addTab(ReaderRent, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        waitTable = new QTableView(tab);
        waitTable->setObjectName(QStringLiteral("waitTable"));
        waitTable->setGeometry(QRect(30, 140, 991, 411));
        sizePolicy.setHeightForWidth(waitTable->sizePolicy().hasHeightForWidth());
        waitTable->setSizePolicy(sizePolicy);
        waitTable->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"gridline-color:white;"));
        waitTable->horizontalHeader()->setMinimumSectionSize(200);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 10, 75, 20));
        label_2->setStyleSheet(QStringLiteral(""));
        insertButton_3 = new QPushButton(tab);
        insertButton_3->setObjectName(QStringLiteral("insertButton_3"));
        insertButton_3->setGeometry(QRect(830, 30, 90, 61));
        insertButton_3->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:4px;"));
        insertButton_3->setIcon(icon);
        insertButton_3->setIconSize(QSize(30, 30));
        searchButton_3 = new QPushButton(tab);
        searchButton_3->setObjectName(QStringLiteral("searchButton_3"));
        searchButton_3->setGeometry(QRect(935, 29, 90, 61));
        searchButton_3->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:4px;"));
        searchButton_3->setIcon(icon1);
        searchButton_3->setIconSize(QSize(30, 40));
        readerIDLe_3 = new QLineEdit(tab);
        readerIDLe_3->setObjectName(QStringLiteral("readerIDLe_3"));
        readerIDLe_3->setGeometry(QRect(42, 39, 301, 51));
        readerIDLe_3->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.4);\n"
"border-radius:5px;"));
        Usernamelbl_7 = new QLabel(tab);
        Usernamelbl_7->setObjectName(QStringLiteral("Usernamelbl_7"));
        Usernamelbl_7->setGeometry(QRect(920, 100, 111, 31));
        Usernamelbl_7->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_8 = new QLabel(tab);
        Usernamelbl_8->setObjectName(QStringLiteral("Usernamelbl_8"));
        Usernamelbl_8->setGeometry(QRect(700, 100, 101, 31));
        Usernamelbl_8->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_9 = new QLabel(tab);
        Usernamelbl_9->setObjectName(QStringLiteral("Usernamelbl_9"));
        Usernamelbl_9->setGeometry(QRect(840, 100, 91, 31));
        Usernamelbl_9->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_10 = new QLabel(tab);
        Usernamelbl_10->setObjectName(QStringLiteral("Usernamelbl_10"));
        Usernamelbl_10->setGeometry(QRect(90, 100, 131, 31));
        Usernamelbl_10->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_11 = new QLabel(tab);
        Usernamelbl_11->setObjectName(QStringLiteral("Usernamelbl_11"));
        Usernamelbl_11->setGeometry(QRect(310, 100, 91, 31));
        Usernamelbl_11->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        book_name = new QLineEdit(tab);
        book_name->setObjectName(QStringLiteral("book_name"));
        book_name->setGeometry(QRect(370, 40, 301, 51));
        book_name->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.4);\n"
"border-radius:5px;"));
        number = new QLineEdit(tab);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(730, 40, 61, 51));
        number->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.4);\n"
"border-radius:5px;"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 10, 81, 20));
        label_3->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(694, 10, 131, 20));
        label_4->setStyleSheet(QStringLiteral(""));
        error = new QLabel(tab);
        error->setObjectName(QStringLiteral("error"));
        error->setGeometry(QRect(250, 570, 641, 31));
        error->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        tabWidget->addTab(tab, QString());
        violation = new QWidget();
        violation->setObjectName(QStringLiteral("violation"));
        renting = new QTableView(violation);
        renting->setObjectName(QStringLiteral("renting"));
        renting->setGeometry(QRect(40, 150, 991, 401));
        renting->setStyleSheet(QLatin1String("background-color:rgba(255,255,255,0.5);\n"
"gridline-color:white;"));
        renting->horizontalHeader()->setMinimumSectionSize(300);
        insertButton_4 = new QPushButton(violation);
        insertButton_4->setObjectName(QStringLiteral("insertButton_4"));
        insertButton_4->setGeometry(QRect(820, 30, 211, 61));
        insertButton_4->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:5px;\n"
"color:rgb(55,55,55);\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"font-weight: 500;\n"
"\n"
"border:0px;\n"
"border-radius:4px;"));
        insertButton_4->setIcon(icon);
        insertButton_4->setIconSize(QSize(30, 30));
        label_6 = new QLabel(violation);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(320, 10, 111, 20));
        violationLe = new QLineEdit(violation);
        violationLe->setObjectName(QStringLiteral("violationLe"));
        violationLe->setGeometry(QRect(311, 39, 251, 51));
        violationLe->setStyleSheet(QStringLiteral("background-color:rgba(255,255,255,0.5);"));
        label_5 = new QLabel(violation);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(49, 8, 75, 20));
        readerIDLe_2 = new QLineEdit(violation);
        readerIDLe_2->setObjectName(QStringLiteral("readerIDLe_2"));
        readerIDLe_2->setGeometry(QRect(42, 39, 231, 51));
        readerIDLe_2->setStyleSheet(QStringLiteral("background-color:rgba(255,255,255,0.5);"));
        Usernamelbl_2 = new QLabel(violation);
        Usernamelbl_2->setObjectName(QStringLiteral("Usernamelbl_2"));
        Usernamelbl_2->setGeometry(QRect(80, 110, 91, 31));
        Usernamelbl_2->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_3 = new QLabel(violation);
        Usernamelbl_3->setObjectName(QStringLiteral("Usernamelbl_3"));
        Usernamelbl_3->setGeometry(QRect(190, 110, 91, 31));
        Usernamelbl_3->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_4 = new QLabel(violation);
        Usernamelbl_4->setObjectName(QStringLiteral("Usernamelbl_4"));
        Usernamelbl_4->setGeometry(QRect(380, 110, 91, 31));
        Usernamelbl_4->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_5 = new QLabel(violation);
        Usernamelbl_5->setObjectName(QStringLiteral("Usernamelbl_5"));
        Usernamelbl_5->setGeometry(QRect(630, 110, 101, 31));
        Usernamelbl_5->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_6 = new QLabel(violation);
        Usernamelbl_6->setObjectName(QStringLiteral("Usernamelbl_6"));
        Usernamelbl_6->setGeometry(QRect(760, 110, 91, 31));
        Usernamelbl_6->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_12 = new QLabel(violation);
        Usernamelbl_12->setObjectName(QStringLiteral("Usernamelbl_12"));
        Usernamelbl_12->setGeometry(QRect(870, 110, 101, 31));
        Usernamelbl_12->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_13 = new QLabel(violation);
        Usernamelbl_13->setObjectName(QStringLiteral("Usernamelbl_13"));
        Usernamelbl_13->setGeometry(QRect(970, 110, 91, 31));
        Usernamelbl_13->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        error3 = new QLabel(violation);
        error3->setObjectName(QStringLiteral("error3"));
        error3->setGeometry(QRect(440, 570, 231, 31));
        error3->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        insertButton_5 = new QPushButton(violation);
        insertButton_5->setObjectName(QStringLiteral("insertButton_5"));
        insertButton_5->setGeometry(QRect(610, 30, 191, 61));
        insertButton_5->setStyleSheet(QLatin1String("border:0px;\n"
"border-radius:5px;\n"
"color:rgb(55,55,55);\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"font-weight: 500;\n"
""));
        insertButton_5->setIconSize(QSize(45, 45));
        tabWidget->addTab(violation, QString());
        frame_2 = new QFrame(Librarian);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 70, 181, 691));
        frame_2->setStyleSheet(QLatin1String("QFrame{background-color:rgba(55,55,55,0.6);\n"
"border-bottom-left-radius:5px;border-bottom-right-radius:5px;}QPushButton {	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(55,55,55,0.4)\n"
"}\n"
"QPushButton:hover {\n"
"background-color:rgba(77, 166, 255,0.6)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        notify_2 = new QLabel(frame_2);
        notify_2->setObjectName(QStringLiteral("notify_2"));
        notify_2->setGeometry(QRect(50, 490, 21, 20));
        notify_2->setStyleSheet(QLatin1String("background-color:transparent;color: red; \n"
""));
        Usernamelbl = new QLabel(frame_2);
        Usernamelbl->setObjectName(QStringLiteral("Usernamelbl"));
        Usernamelbl->setGeometry(QRect(60, 20, 131, 31));
        Usernamelbl->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;background-color:transparent;"));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 90, 51));
        pushButton->setMinimumSize(QSize(90, 0));
        pushButton->setStyleSheet(QLatin1String("background-color: tranparent;\n"
"background:transparent;\n"
"border: 0px;\n"
"border-radius:50px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/barIcon/Resources/icon/user (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(30, 100));
        publicChat_3 = new QPushButton(frame_2);
        publicChat_3->setObjectName(QStringLiteral("publicChat_3"));
        publicChat_3->setGeometry(QRect(0, 250, 181, 61));
        publicChat_3->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/shuffle (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_3->setIcon(icon3);
        publicChat_3->setIconSize(QSize(30, 30));
        logout = new QPushButton(frame_2);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(0, 310, 181, 61));
        logout->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/logout (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon4);
        logout->setIconSize(QSize(35, 35));
        publicChat_2 = new QPushButton(frame_2);
        publicChat_2->setObjectName(QStringLiteral("publicChat_2"));
        publicChat_2->setGeometry(QRect(0, 190, 181, 61));
        publicChat_2->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/Resources/icon/translation.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_2->setIcon(icon5);
        publicChat_2->setIconSize(QSize(35, 35));
        theme = new QPushButton(frame_2);
        theme->setObjectName(QStringLiteral("theme"));
        theme->setGeometry(QRect(0, 130, 181, 61));
        theme->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/Resources/icon/567.png"), QSize(), QIcon::Normal, QIcon::Off);
        theme->setIcon(icon6);
        theme->setIconSize(QSize(30, 30));
        theme->setAutoDefault(false);
        publicChat_6 = new QPushButton(frame_2);
        publicChat_6->setObjectName(QStringLiteral("publicChat_6"));
        publicChat_6->setGeometry(QRect(0, 70, 181, 61));
        publicChat_6->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/Resources/icon/345.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_6->setIcon(icon7);
        publicChat_6->setIconSize(QSize(32, 32));
        notify = new QLabel(frame_2);
        notify->setObjectName(QStringLiteral("notify"));
        notify->setGeometry(QRect(30, 220, 16, 16));
        notify->setStyleSheet(QLatin1String("background-color:transparent;color: red; \n"
"font: 25 10pt \"Ubuntu Light\";\n"
"border-radius: 10px;"));
        frame_3 = new QFrame(Librarian);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 1241, 71));
        frame_3->setStyleSheet(QLatin1String("QFrame{border-top-radius:5px;background-color:rgba(55,55,55,0.8);}\n"
"QPushButton {	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(55,55,55, .3);\n"
"}\n"
"QPushButton:hover {\n"
"background-color:rgba(55,55,55,1);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 1241, 71));
        frame_4->setStyleSheet(QLatin1String("QFrame{border-top-radius:5px;background-color:rgba(55,55,55,0.8);}\n"
"QPushButton {	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(55,55,55, .3);\n"
"}\n"
"QPushButton:hover {\n"
"background-color:rgba(55,55,55,1);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        Usernamelbl_17 = new QLabel(frame_4);
        Usernamelbl_17->setObjectName(QStringLiteral("Usernamelbl_17"));
        Usernamelbl_17->setGeometry(QRect(30, 20, 131, 31));
        Usernamelbl_17->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;background-color:transparent;"));
        greeting = new QLabel(frame_4);
        greeting->setObjectName(QStringLiteral("greeting"));
        greeting->setGeometry(QRect(230, 20, 371, 31));
        greeting->setStyleSheet(QLatin1String("font: 10pt \"Roboto\";\n"
"font-weight:500;\n"
"color:white;background-color:transparent;"));
        time = new QLabel(frame_4);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(900, 20, 271, 31));
        time->setStyleSheet(QLatin1String("font: 10pt \"Roboto\";\n"
"font-weight:500;\n"
"color:white;background-color:transparent;"));

        retranslateUi(Librarian);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Librarian);
    } // setupUi

    void retranslateUi(QWidget *Librarian)
    {
        Librarian->setWindowTitle(QApplication::translate("Librarian", "Librarian", Q_NULLPTR));
        insertButton->setText(QString());
        searchButton->setText(QString());
        label->setText(QApplication::translate("Librarian", "Reader's ID", Q_NULLPTR));
        error2->setText(QString());
        label_10->setText(QApplication::translate("Librarian", "Set number accept", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ReaderRent), QApplication::translate("Librarian", "Request ", Q_NULLPTR));
        label_2->setText(QApplication::translate("Librarian", "Username", Q_NULLPTR));
        insertButton_3->setText(QString());
        searchButton_3->setText(QString());
        Usernamelbl_7->setText(QApplication::translate("Librarian", "Accepted date", Q_NULLPTR));
        Usernamelbl_8->setText(QApplication::translate("Librarian", "Author", Q_NULLPTR));
        Usernamelbl_9->setText(QApplication::translate("Librarian", " Number", Q_NULLPTR));
        Usernamelbl_10->setText(QApplication::translate("Librarian", "Username", Q_NULLPTR));
        Usernamelbl_11->setText(QApplication::translate("Librarian", "Book Name ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Librarian", "Book name", Q_NULLPTR));
        label_4->setText(QApplication::translate("Librarian", "Set number of days", Q_NULLPTR));
        error->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Librarian", "Waiting...", Q_NULLPTR));
        insertButton_4->setText(QApplication::translate("Librarian", "    Returned", Q_NULLPTR));
        label_6->setText(QApplication::translate("Librarian", "Book name", Q_NULLPTR));
        label_5->setText(QApplication::translate("Librarian", "Username", Q_NULLPTR));
        Usernamelbl_2->setText(QApplication::translate("Librarian", "Username", Q_NULLPTR));
        Usernamelbl_3->setText(QApplication::translate("Librarian", " Number", Q_NULLPTR));
        Usernamelbl_4->setText(QApplication::translate("Librarian", "Book Name ", Q_NULLPTR));
        Usernamelbl_5->setText(QApplication::translate("Librarian", "Borrow date", Q_NULLPTR));
        Usernamelbl_6->setText(QApplication::translate("Librarian", "Due date", Q_NULLPTR));
        Usernamelbl_12->setText(QApplication::translate("Librarian", "Return date", Q_NULLPTR));
        Usernamelbl_13->setText(QApplication::translate("Librarian", "Status", Q_NULLPTR));
        error3->setText(QString());
        insertButton_5->setText(QApplication::translate("Librarian", "    Violation", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(violation), QApplication::translate("Librarian", "Renting", Q_NULLPTR));
        notify_2->setText(QString());
        Usernamelbl->setText(QApplication::translate("Librarian", "Username", Q_NULLPTR));
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        publicChat_3->setToolTip(QApplication::translate("Librarian", "Renting book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_3->setWhatsThis(QApplication::translate("Librarian", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_3->setText(QApplication::translate("Librarian", "      Switch              ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        logout->setToolTip(QApplication::translate("Librarian", "Log out\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        logout->setWhatsThis(QApplication::translate("Librarian", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        logout->setText(QApplication::translate("Librarian", "     Logout              ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat_2->setToolTip(QApplication::translate("Librarian", "Account statistic", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_2->setWhatsThis(QApplication::translate("Librarian", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_2->setText(QApplication::translate("Librarian", "      Notify                ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        theme->setToolTip(QApplication::translate("Librarian", "Renting book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        theme->setWhatsThis(QApplication::translate("Librarian", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        theme->setText(QApplication::translate("Librarian", "      Theme              ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat_6->setToolTip(QApplication::translate("Librarian", "Change your password\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_6->setWhatsThis(QApplication::translate("Librarian", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_6->setText(QApplication::translate("Librarian", "       Password        ", Q_NULLPTR));
        notify->setText(QString());
        Usernamelbl_17->setText(QApplication::translate("Librarian", "LIBPRO", Q_NULLPTR));
        greeting->setText(QString());
        time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Librarian: public Ui_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
