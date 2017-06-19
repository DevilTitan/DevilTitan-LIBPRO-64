/********************************************************************************
** Form generated from reading UI file 'LIBPRO.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBPRO_H
#define UI_LIBPRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIBPRO
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *reader;
    QPushButton *librarian;
    QLabel *readerLabel;
    QLabel *librarianLabel;
    QPushButton *data;
    QLabel *databaseLabel;
    QPushButton *admin;
    QLabel *administratorLabel;
    QLabel *roleLabel;
    QPushButton *loginButton;
    QLabel *errorlbl;
    QLabel *loginLogo;

    void setupUi(QMainWindow *LIBPRO)
    {
        if (LIBPRO->objectName().isEmpty())
            LIBPRO->setObjectName(QStringLiteral("LIBPRO"));
        LIBPRO->setEnabled(true);
        LIBPRO->resize(688, 384);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LIBPRO->sizePolicy().hasHeightForWidth());
        LIBPRO->setSizePolicy(sizePolicy);
        LIBPRO->setMinimumSize(QSize(688, 384));
        LIBPRO->setMaximumSize(QSize(688, 384));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/window-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LIBPRO->setWindowIcon(icon);
        LIBPRO->setLayoutDirection(Qt::LeftToRight);
        LIBPRO->setAutoFillBackground(false);
        LIBPRO->setStyleSheet(QLatin1String("#centralWidget{\n"
"box-shadow: 10px 10px 5px #888888;\n"
"border-image: url(:/appscreen/Resources/appscreen/background.png);\n"
"\n"
"}\n"
"#userForm\n"
"{\n"
"color: rgba(74, 252, 255,80);\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color: white;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"border-radius: 3px;\n"
"}\n"
"QLabel{\n"
"font: 10pt \"Calibri\";\n"
"}\n"
"\n"
""));
        LIBPRO->setIconSize(QSize(24, 24));
        centralWidget = new QWidget(LIBPRO);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 40, 611, 321));
        frame->setStyleSheet(QLatin1String("#frame{\n"
"background-color: rgba(73, 189, 221,0.3);\n"
"border-radius: 5px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        reader = new QPushButton(frame);
        reader->setObjectName(QStringLiteral("reader"));
        reader->setEnabled(true);
        reader->setGeometry(QRect(50, 130, 91, 91));
        sizePolicy.setHeightForWidth(reader->sizePolicy().hasHeightForWidth());
        reader->setSizePolicy(sizePolicy);
        reader->setMouseTracking(false);
        reader->setStyleSheet(QLatin1String("#readerAccess{\n"
"border-image: url(:/icon/Resources/icon/reader.png);\n"
"}\n"
"#readerAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#readerAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/reader.png"), QSize(), QIcon::Normal, QIcon::Off);
        reader->setIcon(icon1);
        reader->setIconSize(QSize(90, 90));
        reader->setCheckable(true);
        reader->setAutoDefault(false);
        reader->setFlat(false);
        librarian = new QPushButton(frame);
        librarian->setObjectName(QStringLiteral("librarian"));
        librarian->setEnabled(true);
        librarian->setGeometry(QRect(180, 130, 91, 91));
        librarian->setStyleSheet(QLatin1String("#librarianAccess{\n"
"	border-image: url(:/icon/Resources/icon/librarian.png);\n"
"}\n"
"#librarianAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#librarianAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/librarian.png"), QSize(), QIcon::Normal, QIcon::Off);
        librarian->setIcon(icon2);
        librarian->setIconSize(QSize(90, 90));
        readerLabel = new QLabel(frame);
        readerLabel->setObjectName(QStringLiteral("readerLabel"));
        readerLabel->setGeometry(QRect(80, 230, 51, 16));
        readerLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        librarianLabel = new QLabel(frame);
        librarianLabel->setObjectName(QStringLiteral("librarianLabel"));
        librarianLabel->setGeometry(QRect(200, 230, 51, 16));
        librarianLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        data = new QPushButton(frame);
        data->setObjectName(QStringLiteral("data"));
        data->setEnabled(true);
        data->setGeometry(QRect(320, 130, 91, 91));
        sizePolicy.setHeightForWidth(data->sizePolicy().hasHeightForWidth());
        data->setSizePolicy(sizePolicy);
        data->setStyleSheet(QLatin1String("#dataProcessorAccess{\n"
"	border-image: url(:/icon/Resources/icon/dataProcessor.png);\n"
"}\n"
"#dataProcessorAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#dataProcessorAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/Resources/icon/dataProcessor.png"), QSize(), QIcon::Normal, QIcon::Off);
        data->setIcon(icon3);
        data->setIconSize(QSize(90, 90));
        databaseLabel = new QLabel(frame);
        databaseLabel->setObjectName(QStringLiteral("databaseLabel"));
        databaseLabel->setGeometry(QRect(320, 230, 101, 17));
        databaseLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        admin = new QPushButton(frame);
        admin->setObjectName(QStringLiteral("admin"));
        admin->setEnabled(true);
        admin->setGeometry(QRect(450, 130, 91, 91));
        sizePolicy.setHeightForWidth(admin->sizePolicy().hasHeightForWidth());
        admin->setSizePolicy(sizePolicy);
        admin->setStyleSheet(QLatin1String("#administratorAccess{\n"
"	border-image: url(:/icon/Resources/icon/administrator.png);\n"
"}\n"
"#administratorAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#administratorAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/Resources/icon/administrator.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin->setIcon(icon4);
        admin->setIconSize(QSize(90, 90));
        administratorLabel = new QLabel(frame);
        administratorLabel->setObjectName(QStringLiteral("administratorLabel"));
        administratorLabel->setGeometry(QRect(460, 230, 81, 16));
        administratorLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        roleLabel = new QLabel(frame);
        roleLabel->setObjectName(QStringLiteral("roleLabel"));
        roleLabel->setGeometry(QRect(260, 90, 111, 31));
        roleLabel->setStyleSheet(QLatin1String("#roleLabel{\n"
"font: 10pt\"Segoe UI\";\n"
"font-weight:600;\n"
"}"));
        loginButton = new QPushButton(frame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(250, 270, 101, 31));
        loginButton->setStyleSheet(QLatin1String("#loginButton{\n"
"font: 10pt\"Segoe UI\";\n"
"font-weight:600;\n"
"background: rgba(255,255,255,30);\n"
"}\n"
"#loginButton:pressed{\n"
"background: rgba(255,255,255,80);\n"
"}"));
        errorlbl = new QLabel(frame);
        errorlbl->setObjectName(QStringLiteral("errorlbl"));
        errorlbl->setGeometry(QRect(40, 20, 531, 31));
        errorlbl->setStyleSheet(QLatin1String("border: 2px solid red;\n"
"background-color:rgba(255, 255, 255, 0.6);\n"
"border-radius: 3px;"));
        loginLogo = new QLabel(centralWidget);
        loginLogo->setObjectName(QStringLiteral("loginLogo"));
        loginLogo->setGeometry(QRect(300, 60, 211, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginLogo->sizePolicy().hasHeightForWidth());
        loginLogo->setSizePolicy(sizePolicy1);
        loginLogo->setMinimumSize(QSize(50, 40));
        loginLogo->setMaximumSize(QSize(700, 100));
        loginLogo->setStyleSheet(QStringLiteral(""));
        loginLogo->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/LIBPRO-icon-white.png")));
        loginLogo->setScaledContents(true);
        LIBPRO->setCentralWidget(centralWidget);

        retranslateUi(LIBPRO);

        reader->setDefault(false);


        QMetaObject::connectSlotsByName(LIBPRO);
    } // setupUi

    void retranslateUi(QMainWindow *LIBPRO)
    {
        LIBPRO->setWindowTitle(QApplication::translate("LIBPRO", "LIBPRO", Q_NULLPTR));
        reader->setText(QString());
        librarian->setText(QString());
        readerLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Reader</span></p></body></html>", Q_NULLPTR));
        librarianLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Librarian</span></p></body></html>", Q_NULLPTR));
        data->setText(QString());
        databaseLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Data Processor</span></p></body></html>", Q_NULLPTR));
        admin->setText(QString());
        administratorLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Administrator</span></p></body></html>", Q_NULLPTR));
        roleLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-weight:400; color:#ffffff;\">Choose your role:</span></p></body></html>", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LIBPRO", "CHOOSE", Q_NULLPTR));
        errorlbl->setText(QString());
        loginLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LIBPRO: public Ui_LIBPRO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBPRO_H
