/********************************************************************************
** Form generated from reading UI file 'Reader.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_H
#define UI_READER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reader
{
public:
    QFrame *frame;
    QLabel *Usernamelbl_4;
    QPushButton *addbtn;
    QLabel *Usernamelbl_7;
    QLabel *Usernamelbl_2;
    QPushButton *removebtn;
    QLineEdit *searchBar;
    QLabel *Usernamelbl_3;
    QLabel *Usernamelbl_6;
    QTableWidget *bookList;
    QLabel *Usernamelbl_5;
    QWidget *horizontalWidget_3;
    QLabel *description;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *bookName;
    QLabel *author;
    QLabel *label_6;
    QLabel *rating2;
    QLabel *rating;
    QLabel *label_2;
    QTableWidget *borrowBook;
    QFrame *frame_3;
    QPushButton *publicChat_3;
    QPushButton *publicChat;
    QPushButton *publicChat_4;
    QPushButton *logout_2;
    QPushButton *publicChat_5;
    QPushButton *rate;
    QPushButton *requestbtn;
    QFrame *frame_2;
    QPushButton *bookListbtn;
    QLabel *size;
    QLabel *Usernamelbl;
    QPushButton *rolebtn;
    QPushButton *accountbtn;
    QPushButton *logout;
    QPushButton *pushButton;
    QLabel *notify;
    QLabel *notify_2;

    void setupUi(QWidget *Reader)
    {
        if (Reader->objectName().isEmpty())
            Reader->setObjectName(QStringLiteral("Reader"));
        Reader->resize(1256, 764);
        Reader->setStyleSheet(QLatin1String("QTableWidget:item\n"
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
"}\n"
"#publicChat:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(238,226,191), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}\n"
"#accountStatistic:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(238,226,191), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}\n"
"#rentingBook:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(238,226,191), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}\n"
"#logout:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(238,226,191), stop: 1 #e5efff);\n"
"border-radius: 7px;"
                        "\n"
"}\n"
"#addbtn:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(207,188,130), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}\n"
"#removebtn:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(238,226,191), stop: 1 #e5efff);\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton {	\n"
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
"radius: 1.35, stop: 0 #fff, stop: 1 rgb(212, 236, 215));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"#Reader{\n"
""
                        "border-image: url(:/appscreen/Resources/appscreen/2.jpg);\n"
"}\n"
"\n"
"\n"
""));
        frame = new QFrame(Reader);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(150, 70, 1111, 691));
        frame->setStyleSheet(QLatin1String("QFrame{background-color:rgba(255,255,255,0.1);\n"
"border-radius:0px;}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Usernamelbl_4 = new QLabel(frame);
        Usernamelbl_4->setObjectName(QStringLiteral("Usernamelbl_4"));
        Usernamelbl_4->setGeometry(QRect(640, 78, 91, 31));
        Usernamelbl_4->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;\n"
"background-color:transparent;"));
        addbtn = new QPushButton(frame);
        addbtn->setObjectName(QStringLiteral("addbtn"));
        addbtn->setGeometry(QRect(900, 440, 90, 61));
        addbtn->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-top-right-radius:0;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/cart(4).png"), QSize(), QIcon::Normal, QIcon::Off);
        addbtn->setIcon(icon);
        addbtn->setIconSize(QSize(45, 45));
        Usernamelbl_7 = new QLabel(frame);
        Usernamelbl_7->setObjectName(QStringLiteral("Usernamelbl_7"));
        Usernamelbl_7->setGeometry(QRect(1010, 518, 91, 31));
        Usernamelbl_7->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;\n"
"background-color:transparent;"));
        Usernamelbl_2 = new QLabel(frame);
        Usernamelbl_2->setObjectName(QStringLiteral("Usernamelbl_2"));
        Usernamelbl_2->setGeometry(QRect(180, 78, 91, 31));
        Usernamelbl_2->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;\n"
"background-color:transparent;"));
        removebtn = new QPushButton(frame);
        removebtn->setObjectName(QStringLiteral("removebtn"));
        removebtn->setGeometry(QRect(990, 440, 90, 61));
        removebtn->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:6px;\n"
"border-bottom-left-radius:0px;\n"
"border-top-left-radius:0;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/cart (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        removebtn->setIcon(icon1);
        removebtn->setIconSize(QSize(45, 45));
        searchBar = new QLineEdit(frame);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(30, 18, 681, 51));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchBar->sizePolicy().hasHeightForWidth());
        searchBar->setSizePolicy(sizePolicy);
        searchBar->setMinimumSize(QSize(0, 25));
        searchBar->setStyleSheet(QLatin1String("border-radius: 3px;\n"
"background-color: rgba(255,255,255,0.7);\n"
"font-family: Roboto;\n"
"font-size:16px;\n"
"color:rgb(53, 54, 56);\n"
"font-weight:400;\n"
"padding:5px;"));
        Usernamelbl_3 = new QLabel(frame);
        Usernamelbl_3->setObjectName(QStringLiteral("Usernamelbl_3"));
        Usernamelbl_3->setGeometry(QRect(420, 78, 91, 31));
        Usernamelbl_3->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;\n"
"background-color:transparent;"));
        Usernamelbl_6 = new QLabel(frame);
        Usernamelbl_6->setObjectName(QStringLiteral("Usernamelbl_6"));
        Usernamelbl_6->setGeometry(QRect(790, 518, 91, 31));
        Usernamelbl_6->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;\n"
"background-color:transparent;"));
        bookList = new QTableWidget(frame);
        bookList->setObjectName(QStringLiteral("bookList"));
        bookList->setGeometry(QRect(30, 108, 681, 561));
        bookList->setStyleSheet(QLatin1String("border: 0;\n"
"	font: 10pt \"Segoe UI\";\n"
"font-weight:600;\n"
"border-radius: 5px;background-color: rgba(255, 255, 255, .4);alternate-background-color:rgba(159, 173, 201,0.2);selection-background-color:red;"));
        Usernamelbl_5 = new QLabel(frame);
        Usernamelbl_5->setObjectName(QStringLiteral("Usernamelbl_5"));
        Usernamelbl_5->setGeometry(QRect(540, 78, 91, 31));
        Usernamelbl_5->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;\n"
"background-color:transparent;"));
        horizontalWidget_3 = new QWidget(frame);
        horizontalWidget_3->setObjectName(QStringLiteral("horizontalWidget_3"));
        horizontalWidget_3->setGeometry(QRect(730, 18, 361, 401));
        horizontalWidget_3->setToolTipDuration(13);
        horizontalWidget_3->setStyleSheet(QLatin1String("#horizontalWidget_3 {border: 0;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 5px;background-color: rgba(255, 255, 255, .7);}"));
        description = new QLabel(horizontalWidget_3);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(120, 110, 231, 271));
        description->setStyleSheet(QLatin1String("font:10pt \"Comic Sans MS\";\n"
"\n"
"color:white;\n"
"background-color:transparent;color:rgb(53, 54, 56);\n"
"margin:8px;\n"
""));
        label_7 = new QLabel(horizontalWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 110, 101, 31));
        label_7->setStyleSheet(QLatin1String("font: 10pt \"Open Sans\";\n"
"\n"
"color:white;\n"
"background-color:transparent;color:rgb(53, 54, 56);\n"
"font-weight:450;"));
        label_4 = new QLabel(horizontalWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 81, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QLatin1String("font: 10pt \"Open Sans\";\n"
"\n"
"color:white;\n"
"background-color:transparent;color:rgb(53, 54, 56);\n"
"font-weight:450;"));
        bookName = new QLabel(horizontalWidget_3);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setGeometry(QRect(110, 0, 221, 61));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bookName->sizePolicy().hasHeightForWidth());
        bookName->setSizePolicy(sizePolicy2);
        bookName->setMinimumSize(QSize(200, 0));
        bookName->setContextMenuPolicy(Qt::NoContextMenu);
        bookName->setStyleSheet(QLatin1String("font: 10pt \"Comic Sans MS\";\n"
"\n"
"color:white;\n"
"background-color:transparent;color:rgb(53, 54, 56);\n"
"margin: 8"));
        author = new QLabel(horizontalWidget_3);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(70, 50, 111, 41));
        author->setStyleSheet(QLatin1String("font: 10pt \"Comic Sans MS\";\n"
"\n"
"color:white;\n"
"background-color:transparent;color:rgb(53, 54, 56);\n"
"margin: 8"));
        label_6 = new QLabel(horizontalWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 60, 71, 31));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QLatin1String("font: 10pt \"Open Sans\";\n"
"\n"
"color:white;\n"
"background-color:transparent;color:rgb(53, 54, 56);\n"
"font-weight:450;"));
        rating2 = new QLabel(horizontalWidget_3);
        rating2->setObjectName(QStringLiteral("rating2"));
        rating2->setGeometry(QRect(190, 60, 71, 31));
        sizePolicy1.setHeightForWidth(rating2->sizePolicy().hasHeightForWidth());
        rating2->setSizePolicy(sizePolicy1);
        rating2->setStyleSheet(QLatin1String("font: 10pt \"Open Sans\";\n"
"\n"
"color:white;\n"
"background-color:transparent;color:rgb(53, 54, 56);\n"
"font-weight:450;"));
        rating = new QLabel(horizontalWidget_3);
        rating->setObjectName(QStringLiteral("rating"));
        rating->setGeometry(QRect(250, 50, 111, 41));
        rating->setStyleSheet(QLatin1String("font: 10pt \"Comic Sans MS\";\n"
"\n"
"color:white;\n"
"background-color:transparent;color:rgb(53, 54, 56);\n"
"margin: 8"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(730, 450, 41, 41));
        label_2->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;\n"
"background-color:transparent;"));
        borrowBook = new QTableWidget(frame);
        borrowBook->setObjectName(QStringLiteral("borrowBook"));
        borrowBook->setGeometry(QRect(730, 550, 361, 121));
        borrowBook->setStyleSheet(QLatin1String("border: 0;\n"
"	font: 9pt \"Segoe UI\";\n"
"font-weight:600;\n"
"border-radius: 5px;background-color: rgba(255, 255, 255, .9);alternate-background-color:rgba(159, 173, 201,0.6);selection-background-color:red;"));
        frame_3 = new QFrame(Reader);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 1261, 71));
        frame_3->setStyleSheet(QLatin1String("QFrame{border-top-radius:5px;background-color:rgba(55,55,55,0.4);}\n"
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
        publicChat_3 = new QPushButton(frame_3);
        publicChat_3->setObjectName(QStringLiteral("publicChat_3"));
        publicChat_3->setGeometry(QRect(950, 0, 161, 71));
        publicChat_3->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500;\n"
"\n"
"QPushButton \n"
"{\n"
"	background-color:rgba(55,55,55,0.8)\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/open-book (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_3->setIcon(icon2);
        publicChat_3->setIconSize(QSize(35, 35));
        publicChat = new QPushButton(frame_3);
        publicChat->setObjectName(QStringLiteral("publicChat"));
        publicChat->setGeometry(QRect(790, 0, 161, 71));
        publicChat->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/books (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat->setIcon(icon3);
        publicChat->setIconSize(QSize(35, 35));
        publicChat_4 = new QPushButton(frame_3);
        publicChat_4->setObjectName(QStringLiteral("publicChat_4"));
        publicChat_4->setGeometry(QRect(150, 0, 141, 71));
        publicChat_4->setStyleSheet(QLatin1String("border: 0px;\n"
"\n"
"border-radius:0px;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/line-chart.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_4->setIcon(icon4);
        publicChat_4->setIconSize(QSize(35, 35));
        logout_2 = new QPushButton(frame_3);
        logout_2->setObjectName(QStringLiteral("logout_2"));
        logout_2->setGeometry(QRect(450, 0, 191, 71));
        logout_2->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/Resources/icon/567.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout_2->setIcon(icon5);
        logout_2->setIconSize(QSize(35, 35));
        publicChat_5 = new QPushButton(frame_3);
        publicChat_5->setObjectName(QStringLiteral("publicChat_5"));
        publicChat_5->setGeometry(QRect(290, 0, 161, 71));
        publicChat_5->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/Resources/icon/345.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_5->setIcon(icon6);
        publicChat_5->setIconSize(QSize(35, 35));
        rate = new QPushButton(frame_3);
        rate->setObjectName(QStringLiteral("rate"));
        rate->setGeometry(QRect(640, 0, 151, 71));
        rate->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500;\n"
"\n"
" QPushButton {	\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 rgb(55, 56, 55));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"\n"
"QPushButton {	\n"
"\n"
"\n"
"padding: 5px;\n"
"min-width: 80px;\n"
"background-color: rgba(55,55,55,0.8);\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/Resources/icon/starr.png"), QSize(), QIcon::Normal, QIcon::Off);
        rate->setIcon(icon7);
        rate->setIconSize(QSize(35, 35));
        requestbtn = new QPushButton(frame_3);
        requestbtn->setObjectName(QStringLiteral("requestbtn"));
        requestbtn->setGeometry(QRect(1110, 0, 151, 71));
        requestbtn->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white;\n"
"color:white;\n"
"font-family:\"Open Sans\";\n"
"font-weight:500;\n"
"\n"
"QPushButton \n"
"{\n"
"	background-color:rgba(55,55,55,0.8)\n"
"}"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/Resources/icon/6969.png"), QSize(), QIcon::Normal, QIcon::Off);
        requestbtn->setIcon(icon8);
        requestbtn->setIconSize(QSize(35, 35));
        frame_2 = new QFrame(Reader);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 70, 151, 691));
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
"background-color: rgba(55,55,55, .3);\n"
"}\n"
"QPushButton:hover {\n"
"background-color:rgba(55,55,55,1)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        bookListbtn = new QPushButton(frame_2);
        bookListbtn->setObjectName(QStringLiteral("bookListbtn"));
        bookListbtn->setGeometry(QRect(-10, 220, 161, 81));
        bookListbtn->setStyleSheet(QLatin1String("border: 0px;\n"
"font: 87 8pt \"Ubuntu Light\";\n"
"color:rgb(126, 131, 140);\n"
"\n"
"font-weight:500;\n"
"border-radius:0px;\n"
"font-size:15px;"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icon/Resources/icon/basket(3).png"), QSize(), QIcon::Normal, QIcon::Off);
        bookListbtn->setIcon(icon9);
        bookListbtn->setIconSize(QSize(50, 50));
        size = new QLabel(frame_2);
        size->setObjectName(QStringLiteral("size"));
        size->setGeometry(QRect(40, 270, 21, 20));
        size->setStyleSheet(QLatin1String("background-color:transparent;color: red; \n"
""));
        Usernamelbl = new QLabel(frame_2);
        Usernamelbl->setObjectName(QStringLiteral("Usernamelbl"));
        Usernamelbl->setGeometry(QRect(30, 160, 91, 31));
        Usernamelbl->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;background-color:transparent;"));
        rolebtn = new QPushButton(frame_2);
        rolebtn->setObjectName(QStringLiteral("rolebtn"));
        rolebtn->setGeometry(QRect(0, 300, 151, 81));
        rolebtn->setStyleSheet(QLatin1String("/*border: 0px;\n"
"border-radius:55px;*/ border-radius:0px;\n"
"border:0px;\n"
"border: 0px;\n"
"font: 87 8pt \"Ubuntu Light\";\n"
"color:rgb(126, 131, 140);\n"
"\n"
"font-weight:500;\n"
"border-radius:0px;\n"
"font-size:15px;"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icon/Resources/icon/shuffle (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        rolebtn->setIcon(icon10);
        rolebtn->setIconSize(QSize(50, 50));
        accountbtn = new QPushButton(frame_2);
        accountbtn->setObjectName(QStringLiteral("accountbtn"));
        accountbtn->setGeometry(QRect(-10, 380, 161, 81));
        accountbtn->setStyleSheet(QLatin1String("/*border: 0px;\n"
"border-radius:55px;*/ border-radius:0px;\n"
"border:0px;border: 0px;\n"
"font: 87 8pt \"Ubuntu Light\";\n"
"color:rgb(126, 131, 140);\n"
"\n"
"font-weight:500;\n"
"border-radius:0px;\n"
"font-size:15px;"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icon/Resources/icon/translation.png"), QSize(), QIcon::Normal, QIcon::Off);
        accountbtn->setIcon(icon11);
        accountbtn->setIconSize(QSize(50, 50));
        logout = new QPushButton(frame_2);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(0, 460, 151, 81));
        logout->setStyleSheet(QLatin1String("/*border: 0px;\n"
"border-radius:55px;*/ border-radius:0px;\n"
"border:0px;border: 0px;\n"
"font: 87 8pt \"Ubuntu Light\";\n"
"color:rgb(126, 131, 140);\n"
"\n"
"font-weight:500;\n"
"border-radius:0px;\n"
"font-size:15px;"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icon/Resources/icon/logout (10).png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon12);
        logout->setIconSize(QSize(50, 50));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 131, 131));
        pushButton->setStyleSheet(QLatin1String("background-color: tranparent;\n"
"background:transparent;\n"
"border: 0px;\n"
"border-radius:50px;"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/barIcon/Resources/icon/user (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon13);
        pushButton->setIconSize(QSize(100, 100));
        notify = new QLabel(frame_2);
        notify->setObjectName(QStringLiteral("notify"));
        notify->setGeometry(QRect(51, 430, 20, 20));
        notify->setStyleSheet(QLatin1String("background-color:transparent;color: red; \n"
"font: 25 10pt \"Ubuntu Light\";\n"
"border-radius: 10px;"));
        notify_2 = new QLabel(Reader);
        notify_2->setObjectName(QStringLiteral("notify_2"));
        notify_2->setGeometry(QRect(560, 750, 20, 20));
        notify_2->setStyleSheet(QLatin1String("background-color:transparent;color: red; \n"
"font: 25 10pt \"Ubuntu Light\";\n"
"border-radius: 10px;"));

        retranslateUi(Reader);

        QMetaObject::connectSlotsByName(Reader);
    } // setupUi

    void retranslateUi(QWidget *Reader)
    {
        Reader->setWindowTitle(QApplication::translate("Reader", "Reader", Q_NULLPTR));
        Usernamelbl_4->setText(QApplication::translate("Reader", "Rate", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        addbtn->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        addbtn->setText(QString());
        Usernamelbl_7->setText(QApplication::translate("Reader", " Number", Q_NULLPTR));
        Usernamelbl_2->setText(QApplication::translate("Reader", "Book Name ", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        removebtn->setWhatsThis(QApplication::translate("Reader", "Remove\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        removebtn->setText(QString());
        searchBar->setText(QString());
        searchBar->setPlaceholderText(QApplication::translate("Reader", "   Search ....", Q_NULLPTR));
        Usernamelbl_3->setText(QApplication::translate("Reader", "Author", Q_NULLPTR));
        Usernamelbl_6->setText(QApplication::translate("Reader", "Book Name ", Q_NULLPTR));
        Usernamelbl_5->setText(QApplication::translate("Reader", " Number", Q_NULLPTR));
        description->setText(QString());
        label_7->setText(QApplication::translate("Reader", "Description:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Reader", "Publisher:", Q_NULLPTR));
        bookName->setText(QString());
        author->setText(QString());
        label_6->setText(QApplication::translate("Reader", "Year:", Q_NULLPTR));
        rating2->setText(QApplication::translate("Reader", "Rate:", Q_NULLPTR));
        rating->setText(QString());
        label_2->setText(QApplication::translate("Reader", "Cart:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat_3->setToolTip(QApplication::translate("Reader", "Book you have been renting (and haven't returned yet)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_3->setWhatsThis(QApplication::translate("Reader", "Renting book", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_3->setText(QApplication::translate("Reader", "   Reading", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat->setToolTip(QApplication::translate("Reader", "Your queue books  - please come to library to get them", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat->setText(QApplication::translate("Reader", "     Queue", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat_4->setToolTip(QApplication::translate("Reader", "Account statistic", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_4->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_4->setText(QApplication::translate("Reader", "    Statistic", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        logout_2->setToolTip(QApplication::translate("Reader", "set theme for current window", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        logout_2->setWhatsThis(QApplication::translate("Reader", "Change theme", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        logout_2->setText(QApplication::translate("Reader", "       Background", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat_5->setToolTip(QApplication::translate("Reader", "Change your password\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_5->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_5->setText(QApplication::translate("Reader", "   Password", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rate->setToolTip(QApplication::translate("Reader", "Switch role \n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        rate->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        rate->setText(QApplication::translate("Reader", "  Rate book", Q_NULLPTR));
        requestbtn->setText(QApplication::translate("Reader", "   Request", Q_NULLPTR));
        bookListbtn->setText(QApplication::translate("Reader", "  Chosen", Q_NULLPTR));
        size->setText(QString());
        Usernamelbl->setText(QApplication::translate("Reader", "Username", Q_NULLPTR));
        rolebtn->setText(QApplication::translate("Reader", "    Switch", Q_NULLPTR));
        accountbtn->setText(QApplication::translate("Reader", "  Notify", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        logout->setToolTip(QApplication::translate("Reader", "Log out\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        logout->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        logout->setText(QApplication::translate("Reader", "  Logout", Q_NULLPTR));
        pushButton->setText(QString());
        notify->setText(QString());
        notify_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Reader: public Ui_Reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
