/********************************************************************************
** Form generated from reading UI file 'Reader.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_H
#define UI_READER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reader
{
public:
    QWidget *horizontalWidget_3;
    QLabel *book;
    QLabel *description;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *bookName;
    QLabel *author;
    QLabel *label_6;
    QTableView *bookList;
    QPushButton *rolebtn;
    QPushButton *accountbtn;
    QPushButton *requestbtn;
    QPushButton *addbtn;
    QPushButton *bookListbtn;
    QTableView *borrowBook;
    QLineEdit *searchBar;
    QLabel *label_2;
    QLabel *size;
    QPushButton *accountbtn_2;
    QPushButton *removebtn;
    QLabel *username;
    QLabel *username_2;
    QLabel *username_3;
    QLabel *username_4;
    QLabel *username_5;
    QPushButton *publicChat;
    QPushButton *logout;
    QPushButton *publicChat_2;
    QPushButton *publicChat_3;

    void setupUi(QWidget *Reader)
    {
        if (Reader->objectName().isEmpty())
            Reader->setObjectName(QStringLiteral("Reader"));
        Reader->resize(1229, 721);
        Reader->setStyleSheet(QLatin1String("QPushButton {\n"
"	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255, 255, 255, .5);\n"
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
"#Reader{\n"
"border-image: url(:/appscreen/Resources/appscreen/2.jpg);\n"
"}"));
        horizontalWidget_3 = new QWidget(Reader);
        horizontalWidget_3->setObjectName(QStringLiteral("horizontalWidget_3"));
        horizontalWidget_3->setGeometry(QRect(850, 100, 361, 271));
        horizontalWidget_3->setToolTipDuration(13);
        horizontalWidget_3->setStyleSheet(QLatin1String("#horizontalWidget_3 {border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 12px;background-color: rgba(255, 255, 255, .5);border-color:rgba(255, 255, 255, .5)}"));
        book = new QLabel(horizontalWidget_3);
        book->setObjectName(QStringLiteral("book"));
        book->setGeometry(QRect(195, 15, 16, 16));
        book->setMaximumSize(QSize(100, 130));
        description = new QLabel(horizontalWidget_3);
        description->setObjectName(QStringLiteral("description"));
        description->setGeometry(QRect(90, 180, 241, 61));
        description->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        label_7 = new QLabel(horizontalWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 180, 51, 16));
        label_7->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        label_4 = new QLabel(horizontalWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 30, 71, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        bookName = new QLabel(horizontalWidget_3);
        bookName->setObjectName(QStringLiteral("bookName"));
        bookName->setGeometry(QRect(100, 10, 231, 71));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bookName->sizePolicy().hasHeightForWidth());
        bookName->setSizePolicy(sizePolicy1);
        bookName->setMinimumSize(QSize(200, 0));
        bookName->setContextMenuPolicy(Qt::NoContextMenu);
        bookName->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        author = new QLabel(horizontalWidget_3);
        author->setObjectName(QStringLiteral("author"));
        author->setGeometry(QRect(90, 110, 261, 41));
        author->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        label_6 = new QLabel(horizontalWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 100, 71, 31));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        bookList = new QTableView(Reader);
        bookList->setObjectName(QStringLiteral("bookList"));
        bookList->setGeometry(QRect(150, 160, 681, 541));
        bookList->setStyleSheet(QStringLiteral("background-color:white;"));
        rolebtn = new QPushButton(Reader);
        rolebtn->setObjectName(QStringLiteral("rolebtn"));
        rolebtn->setGeometry(QRect(20, 290, 112, 112));
        rolebtn->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:55px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/barIcon/Resources/icon/shuffle.png"), QSize(), QIcon::Normal, QIcon::Off);
        rolebtn->setIcon(icon);
        rolebtn->setIconSize(QSize(70, 70));
        accountbtn = new QPushButton(Reader);
        accountbtn->setObjectName(QStringLiteral("accountbtn"));
        accountbtn->setGeometry(QRect(20, 430, 112, 112));
        accountbtn->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:55px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/notification.png"), QSize(), QIcon::Normal, QIcon::Off);
        accountbtn->setIcon(icon1);
        accountbtn->setIconSize(QSize(70, 70));
        requestbtn = new QPushButton(Reader);
        requestbtn->setObjectName(QStringLiteral("requestbtn"));
        requestbtn->setGeometry(QRect(20, 570, 112, 112));
        requestbtn->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:55px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/paper-plane.png"), QSize(), QIcon::Normal, QIcon::Off);
        requestbtn->setIcon(icon2);
        requestbtn->setIconSize(QSize(70, 70));
        addbtn = new QPushButton(Reader);
        addbtn->setObjectName(QStringLiteral("addbtn"));
        addbtn->setGeometry(QRect(1020, 400, 90, 51));
        addbtn->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:13px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/shopping-basket.png"), QSize(), QIcon::Normal, QIcon::Off);
        addbtn->setIcon(icon3);
        addbtn->setIconSize(QSize(45, 45));
        bookListbtn = new QPushButton(Reader);
        bookListbtn->setObjectName(QStringLiteral("bookListbtn"));
        bookListbtn->setGeometry(QRect(20, 150, 112, 112));
        bookListbtn->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:55px;\n"
""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/barIcon/Resources/icon/bookshelf.png"), QSize(), QIcon::Normal, QIcon::Off);
        bookListbtn->setIcon(icon4);
        bookListbtn->setIconSize(QSize(70, 70));
        borrowBook = new QTableView(Reader);
        borrowBook->setObjectName(QStringLiteral("borrowBook"));
        borrowBook->setGeometry(QRect(850, 470, 361, 231));
        borrowBook->setStyleSheet(QLatin1String("background-color:white\n"
""));
        searchBar = new QLineEdit(Reader);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(150, 100, 681, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchBar->sizePolicy().hasHeightForWidth());
        searchBar->setSizePolicy(sizePolicy2);
        searchBar->setMinimumSize(QSize(0, 25));
        searchBar->setStyleSheet(QLatin1String("background:white;\n"
"border-radius: 10px;\n"
""));
        label_2 = new QLabel(Reader);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(860, 430, 47, 13));
        label_2->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"color:white;"));
        size = new QLabel(Reader);
        size->setObjectName(QStringLiteral("size"));
        size->setGeometry(QRect(120, 230, 16, 16));
        size->setStyleSheet(QStringLiteral("color: red;"));
        accountbtn_2 = new QPushButton(Reader);
        accountbtn_2->setObjectName(QStringLiteral("accountbtn_2"));
        accountbtn_2->setGeometry(QRect(20, 10, 110, 110));
        accountbtn_2->setStyleSheet(QLatin1String("background-color: tranparent;\n"
"background:transparent;\n"
"border: 0px;\n"
"border-radius:50px;"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/barIcon/Resources/icon/user (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        accountbtn_2->setIcon(icon5);
        accountbtn_2->setIconSize(QSize(70, 70));
        removebtn = new QPushButton(Reader);
        removebtn->setObjectName(QStringLiteral("removebtn"));
        removebtn->setGeometry(QRect(1120, 400, 90, 51));
        removebtn->setStyleSheet(QLatin1String("border : 0px;\n"
"border-radius:13px;"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/Resources/icon/a.png"), QSize(), QIcon::Normal, QIcon::Off);
        removebtn->setIcon(icon6);
        removebtn->setIconSize(QSize(45, 45));
        username = new QLabel(Reader);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(40, 110, 81, 16));
        username->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        username_2 = new QLabel(Reader);
        username_2->setObjectName(QStringLiteral("username_2"));
        username_2->setGeometry(QRect(20, 260, 121, 20));
        username_2->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        username_3 = new QLabel(Reader);
        username_3->setObjectName(QStringLiteral("username_3"));
        username_3->setGeometry(QRect(40, 400, 81, 21));
        username_3->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        username_4 = new QLabel(Reader);
        username_4->setObjectName(QStringLiteral("username_4"));
        username_4->setGeometry(QRect(40, 540, 81, 16));
        username_4->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        username_5 = new QLabel(Reader);
        username_5->setObjectName(QStringLiteral("username_5"));
        username_5->setGeometry(QRect(20, 680, 121, 20));
        username_5->setStyleSheet(QLatin1String("font: 8pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        publicChat = new QPushButton(Reader);
        publicChat->setObjectName(QStringLiteral("publicChat"));
        publicChat->setGeometry(QRect(850, 10, 90, 61));
        publicChat->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:7px;\n"
"border-top-right-radius:0;\n"
"border-bottom-right-radius:0;\n"
"border-left:10;\n"
"border-color:white"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/Resources/icon/speech-bubble.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat->setIcon(icon7);
        publicChat->setIconSize(QSize(50, 50));
        logout = new QPushButton(Reader);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(1120, 10, 90, 61));
        logout->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:7px;\n"
"border-top-left-radius:0;\n"
"border-bottom-left-radius:0;"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/Resources/icon/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout->setIcon(icon8);
        logout->setIconSize(QSize(50, 60));
        publicChat_2 = new QPushButton(Reader);
        publicChat_2->setObjectName(QStringLiteral("publicChat_2"));
        publicChat_2->setGeometry(QRect(940, 10, 90, 61));
        publicChat_2->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icon/Resources/icon/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_2->setIcon(icon9);
        publicChat_2->setIconSize(QSize(50, 50));
        publicChat_3 = new QPushButton(Reader);
        publicChat_3->setObjectName(QStringLiteral("publicChat_3"));
        publicChat_3->setGeometry(QRect(1030, 10, 90, 61));
        publicChat_3->setStyleSheet(QLatin1String("border: 0px;\n"
"border-radius:0;\n"
"border-left:10;\n"
"border-color:white"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icon/Resources/icon/book.png"), QSize(), QIcon::Normal, QIcon::Off);
        publicChat_3->setIcon(icon10);
        publicChat_3->setIconSize(QSize(50, 50));
        searchBar->raise();
        horizontalWidget_3->raise();
        bookList->raise();
        rolebtn->raise();
        accountbtn->raise();
        requestbtn->raise();
        addbtn->raise();
        bookListbtn->raise();
        borrowBook->raise();
        label_2->raise();
        size->raise();
        accountbtn_2->raise();
        removebtn->raise();
        username->raise();
        username_2->raise();
        username_3->raise();
        username_4->raise();
        username_5->raise();
        publicChat->raise();
        logout->raise();
        publicChat_2->raise();
        publicChat_3->raise();

        retranslateUi(Reader);

        QMetaObject::connectSlotsByName(Reader);
    } // setupUi

    void retranslateUi(QWidget *Reader)
    {
        Reader->setWindowTitle(QApplication::translate("Reader", "Reader", Q_NULLPTR));
        book->setText(QString());
        description->setText(QString());
        label_7->setText(QApplication::translate("Reader", "M\303\264 t\341\272\243:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Reader", "T\303\252n s\303\241ch:", Q_NULLPTR));
        bookName->setText(QString());
        author->setText(QString());
        label_6->setText(QApplication::translate("Reader", "T\303\241c gi\341\272\243:", Q_NULLPTR));
        rolebtn->setText(QString());
        accountbtn->setText(QString());
        requestbtn->setText(QString());
#ifndef QT_NO_WHATSTHIS
        addbtn->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        addbtn->setText(QString());
        bookListbtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        borrowBook->setToolTip(QApplication::translate("Reader", "Basket\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        searchBar->setPlaceholderText(QApplication::translate("Reader", "T\303\254m ki\341\272\277m", Q_NULLPTR));
        label_2->setText(QApplication::translate("Reader", "Gi\341\273\217:", Q_NULLPTR));
        size->setText(QString());
        accountbtn_2->setText(QString());
#ifndef QT_NO_WHATSTHIS
        removebtn->setWhatsThis(QApplication::translate("Reader", "Remove\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        removebtn->setText(QString());
        username->setText(QApplication::translate("Reader", "Username", Q_NULLPTR));
        username_2->setText(QApplication::translate("Reader", "     Your Choice", Q_NULLPTR));
        username_3->setText(QApplication::translate("Reader", "Change Role", Q_NULLPTR));
        username_4->setText(QApplication::translate("Reader", "Notification", Q_NULLPTR));
        username_5->setText(QApplication::translate("Reader", "Request New Book", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        publicChat->setToolTip(QApplication::translate("Reader", "Public Chat", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat->setText(QString());
#ifndef QT_NO_TOOLTIP
        logout->setToolTip(QApplication::translate("Reader", "Log out\n"
"", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        logout->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        logout->setText(QString());
#ifndef QT_NO_TOOLTIP
        publicChat_2->setToolTip(QApplication::translate("Reader", "Account statistic", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_2->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        publicChat_3->setToolTip(QApplication::translate("Reader", "Renting book", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        publicChat_3->setWhatsThis(QApplication::translate("Reader", "Add\n"
"", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        publicChat_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Reader: public Ui_Reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
