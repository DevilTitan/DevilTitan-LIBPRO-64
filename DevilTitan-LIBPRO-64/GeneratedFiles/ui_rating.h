/********************************************************************************
** Form generated from reading UI file 'rating.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATING_H
#define UI_RATING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Rating
{
public:
    QTableWidget *tableWidget;
    QPushButton *star2;
    QPushButton *star5;
    QPushButton *star4;
    QPushButton *star3;
    QPushButton *star1;
    QLabel *Usernamelbl_6;
    QLabel *Usernamelbl_8;
    QLabel *Usernamelbl_7;

    void setupUi(QDialog *Rating)
    {
        if (Rating->objectName().isEmpty())
            Rating->setObjectName(QStringLiteral("Rating"));
        Rating->resize(760, 519);
        Rating->setStyleSheet(QLatin1String("QTableWidget:item\n"
"\n"
"{\n"
"\n"
"padding:5px;\n"
"margin:15px;\n"
"margin-left:0px;\n"
"font-size:12px;\n"
"font-weight:700;\n"
"font-family:\"Open Sans\";\n"
"border:0px;\n"
"color:white;\n"
"}\n"
"QTableWidget\n"
"{\n"
"alternate-background-color: rgba(255,255,255,0.1);\n"
"selection-background-color : white;\n"
"}\n"
"\n"
"QPushButton {	\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .1);\n"
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
"\n"
""));
        tableWidget = new QTableWidget(Rating);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 80, 691, 351));
        tableWidget->setStyleSheet(QLatin1String("background-color:rgba(55,55,55,0.5);\n"
"border-radius:2px;\n"
"/*gridline-color: rgba(55,55,55,0.5);*/\n"
"border:0px;\n"
"selection-background-color: red;\n"
"color:white;"));
        star2 = new QPushButton(Rating);
        star2->setObjectName(QStringLiteral("star2"));
        star2->setGeometry(QRect(480, 451, 90, 42));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(star2->sizePolicy().hasHeightForWidth());
        star2->setSizePolicy(sizePolicy);
        star2->setMinimumSize(QSize(90, 32));
        star2->setStyleSheet(QLatin1String("border:0; \n"
"background: transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/favourites-filled-star-symbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        star2->setIcon(icon);
        star2->setIconSize(QSize(32, 32));
        star5 = new QPushButton(Rating);
        star5->setObjectName(QStringLiteral("star5"));
        star5->setGeometry(QRect(658, 451, 90, 42));
        sizePolicy.setHeightForWidth(star5->sizePolicy().hasHeightForWidth());
        star5->setSizePolicy(sizePolicy);
        star5->setMinimumSize(QSize(90, 32));
        star5->setStyleSheet(QLatin1String("border:0; \n"
"background: transparent;"));
        star5->setIcon(icon);
        star5->setIconSize(QSize(32, 32));
        star4 = new QPushButton(Rating);
        star4->setObjectName(QStringLiteral("star4"));
        star4->setGeometry(QRect(599, 451, 90, 42));
        sizePolicy.setHeightForWidth(star4->sizePolicy().hasHeightForWidth());
        star4->setSizePolicy(sizePolicy);
        star4->setMinimumSize(QSize(90, 32));
        star4->setStyleSheet(QLatin1String("border:0; \n"
"background: transparent;"));
        star4->setIcon(icon);
        star4->setIconSize(QSize(32, 32));
        star3 = new QPushButton(Rating);
        star3->setObjectName(QStringLiteral("star3"));
        star3->setGeometry(QRect(539, 451, 90, 42));
        sizePolicy.setHeightForWidth(star3->sizePolicy().hasHeightForWidth());
        star3->setSizePolicy(sizePolicy);
        star3->setMinimumSize(QSize(90, 32));
        star3->setStyleSheet(QLatin1String("border:0; \n"
"background: transparent;"));
        star3->setIcon(icon);
        star3->setIconSize(QSize(32, 32));
        star1 = new QPushButton(Rating);
        star1->setObjectName(QStringLiteral("star1"));
        star1->setGeometry(QRect(421, 451, 90, 42));
        sizePolicy.setHeightForWidth(star1->sizePolicy().hasHeightForWidth());
        star1->setSizePolicy(sizePolicy);
        star1->setMinimumSize(QSize(90, 32));
        star1->setStyleSheet(QLatin1String("border:0; \n"
"background: transparent;"));
        star1->setIcon(icon);
        star1->setIconSize(QSize(32, 32));
        Usernamelbl_6 = new QLabel(Rating);
        Usernamelbl_6->setObjectName(QStringLiteral("Usernamelbl_6"));
        Usernamelbl_6->setGeometry(QRect(100, 40, 91, 31));
        Usernamelbl_6->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_8 = new QLabel(Rating);
        Usernamelbl_8->setObjectName(QStringLiteral("Usernamelbl_8"));
        Usernamelbl_8->setGeometry(QRect(610, 40, 101, 31));
        Usernamelbl_8->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));
        Usernamelbl_7 = new QLabel(Rating);
        Usernamelbl_7->setObjectName(QStringLiteral("Usernamelbl_7"));
        Usernamelbl_7->setGeometry(QRect(520, 40, 81, 31));
        Usernamelbl_7->setStyleSheet(QLatin1String("font: 10pt \"Segoe UI\";\n"
"font-weight:500;\n"
"color:white;"));

        retranslateUi(Rating);

        QMetaObject::connectSlotsByName(Rating);
    } // setupUi

    void retranslateUi(QDialog *Rating)
    {
        Rating->setWindowTitle(QApplication::translate("Rating", "Dialog", Q_NULLPTR));
        star2->setText(QString());
        star5->setText(QString());
        star4->setText(QString());
        star3->setText(QString());
        star1->setText(QString());
        Usernamelbl_6->setText(QApplication::translate("Rating", "Book Name", Q_NULLPTR));
        Usernamelbl_8->setText(QApplication::translate("Rating", "Return date", Q_NULLPTR));
        Usernamelbl_7->setText(QApplication::translate("Rating", "Your rate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Rating: public Ui_Rating {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATING_H
