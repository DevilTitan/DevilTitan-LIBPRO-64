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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIBPROClass
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *userForm;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *userNameLabel;
    QLineEdit *userNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *readerAccess;
    QPushButton *librarianAccess;
    QLabel *readerLabel;
    QLabel *librarianLabel;
    QPushButton *dataProcessorAccess;
    QLabel *databaseLabel;
    QPushButton *administratorAccess;
    QLabel *administratorLabel;
    QLabel *roleLabel;
    QPushButton *loginButton;
    QPushButton *signUpButton;
    QLabel *label;
    QLabel *loginLogo;

    void setupUi(QMainWindow *LIBPROClass)
    {
        if (LIBPROClass->objectName().isEmpty())
            LIBPROClass->setObjectName(QStringLiteral("LIBPROClass"));
        LIBPROClass->setEnabled(true);
        LIBPROClass->resize(800, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LIBPROClass->sizePolicy().hasHeightForWidth());
        LIBPROClass->setSizePolicy(sizePolicy);
        LIBPROClass->setMinimumSize(QSize(800, 500));
        LIBPROClass->setMaximumSize(QSize(800, 500));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/window-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LIBPROClass->setWindowIcon(icon);
        LIBPROClass->setLayoutDirection(Qt::LeftToRight);
        LIBPROClass->setAutoFillBackground(false);
        LIBPROClass->setStyleSheet(QLatin1String("#centralWidget{\n"
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
        LIBPROClass->setIconSize(QSize(24, 24));
        centralWidget = new QWidget(LIBPROClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(100, 140, 611, 321));
        frame->setStyleSheet(QLatin1String("#frame{\n"
"background-color: rgba(73, 189, 221,0.3);\n"
"border-radius: 5px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        userForm = new QWidget(frame);
        userForm->setObjectName(QStringLiteral("userForm"));
        userForm->setGeometry(QRect(100, 10, 431, 80));
        userForm->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(userForm);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(24, 10, 50, -1);
        userNameLabel = new QLabel(userForm);
        userNameLabel->setObjectName(QStringLiteral("userNameLabel"));
        userNameLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));

        horizontalLayout->addWidget(userNameLabel);

        userNameLineEdit = new QLineEdit(userForm);
        userNameLineEdit->setObjectName(QStringLiteral("userNameLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(userNameLineEdit->sizePolicy().hasHeightForWidth());
        userNameLineEdit->setSizePolicy(sizePolicy1);
        userNameLineEdit->setMinimumSize(QSize(5, 0));

        horizontalLayout->addWidget(userNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(50, -1, 50, 10);
        passwordLabel = new QLabel(userForm);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(userForm);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        readerAccess = new QPushButton(frame);
        readerAccess->setObjectName(QStringLiteral("readerAccess"));
        readerAccess->setEnabled(true);
        readerAccess->setGeometry(QRect(50, 130, 91, 91));
        sizePolicy.setHeightForWidth(readerAccess->sizePolicy().hasHeightForWidth());
        readerAccess->setSizePolicy(sizePolicy);
        readerAccess->setMouseTracking(false);
        readerAccess->setStyleSheet(QLatin1String("#readerAccess{\n"
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
        readerAccess->setIcon(icon1);
        readerAccess->setIconSize(QSize(3, 3));
        readerAccess->setCheckable(true);
        readerAccess->setAutoDefault(false);
        readerAccess->setFlat(false);
        librarianAccess = new QPushButton(frame);
        librarianAccess->setObjectName(QStringLiteral("librarianAccess"));
        librarianAccess->setEnabled(true);
        librarianAccess->setGeometry(QRect(180, 130, 91, 91));
        librarianAccess->setStyleSheet(QLatin1String("#librarianAccess{\n"
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
        librarianAccess->setIcon(icon2);
        readerLabel = new QLabel(frame);
        readerLabel->setObjectName(QStringLiteral("readerLabel"));
        readerLabel->setGeometry(QRect(60, 230, 71, 16));
        readerLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        librarianLabel = new QLabel(frame);
        librarianLabel->setObjectName(QStringLiteral("librarianLabel"));
        librarianLabel->setGeometry(QRect(200, 230, 51, 16));
        librarianLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        dataProcessorAccess = new QPushButton(frame);
        dataProcessorAccess->setObjectName(QStringLiteral("dataProcessorAccess"));
        dataProcessorAccess->setEnabled(true);
        dataProcessorAccess->setGeometry(QRect(320, 130, 91, 91));
        sizePolicy.setHeightForWidth(dataProcessorAccess->sizePolicy().hasHeightForWidth());
        dataProcessorAccess->setSizePolicy(sizePolicy);
        dataProcessorAccess->setStyleSheet(QLatin1String("#dataProcessorAccess{\n"
"	border-image: url(:/icon/Resources/icon/dataProcessor.png);\n"
"}\n"
"#dataProcessorAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#dataProcessorAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
        databaseLabel = new QLabel(frame);
        databaseLabel->setObjectName(QStringLiteral("databaseLabel"));
        databaseLabel->setGeometry(QRect(320, 230, 101, 17));
        databaseLabel->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
"font-weight:600;"));
        administratorAccess = new QPushButton(frame);
        administratorAccess->setObjectName(QStringLiteral("administratorAccess"));
        administratorAccess->setEnabled(true);
        administratorAccess->setGeometry(QRect(450, 130, 91, 91));
        sizePolicy.setHeightForWidth(administratorAccess->sizePolicy().hasHeightForWidth());
        administratorAccess->setSizePolicy(sizePolicy);
        administratorAccess->setStyleSheet(QLatin1String("#administratorAccess{\n"
"	border-image: url(:/icon/Resources/icon/administrator.png);\n"
"}\n"
"#administratorAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
"#administratorAccess:focus{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
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
        loginButton->setGeometry(QRect(220, 260, 75, 21));
        loginButton->setStyleSheet(QLatin1String("#loginButton{\n"
"font: 10pt\"Segoe UI\";\n"
"font-weight:600;\n"
"background: rgba(255,255,255,30);\n"
"}\n"
"#loginButton:pressed{\n"
"background: rgba(255,255,255,80);\n"
"}"));
        signUpButton = new QPushButton(frame);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setGeometry(QRect(320, 260, 75, 21));
        signUpButton->setStyleSheet(QLatin1String("#signUpButton{\n"
"font: 10pt\"Segoe UI\";\n"
"font-weight:600;\n"
"background: rgba(255,255,255,30);\n"
"}\n"
"#signUpButton:pressed{\n"
"background: rgba(255,255,255,80);\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 290, 101, 16));
        label->setStyleSheet(QLatin1String("font: 10pt\"Segoe UI\";\n"
""));
        loginLogo = new QLabel(centralWidget);
        loginLogo->setObjectName(QStringLiteral("loginLogo"));
        loginLogo->setGeometry(QRect(300, 60, 211, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(loginLogo->sizePolicy().hasHeightForWidth());
        loginLogo->setSizePolicy(sizePolicy2);
        loginLogo->setMinimumSize(QSize(50, 40));
        loginLogo->setMaximumSize(QSize(700, 100));
        loginLogo->setStyleSheet(QStringLiteral(""));
        loginLogo->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/LIBPRO-icon-white.png")));
        loginLogo->setScaledContents(true);
        LIBPROClass->setCentralWidget(centralWidget);

        retranslateUi(LIBPROClass);

        readerAccess->setDefault(false);


        QMetaObject::connectSlotsByName(LIBPROClass);
    } // setupUi

    void retranslateUi(QMainWindow *LIBPROClass)
    {
        LIBPROClass->setWindowTitle(QApplication::translate("LIBPROClass", "LIBPRO", Q_NULLPTR));
        userNameLabel->setText(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">T\303\252n t\303\240i kho\341\272\243n: </span></p></body></html>", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">M\341\272\255t kh\341\272\251u: </span></p></body></html>", Q_NULLPTR));
        readerAccess->setText(QString());
        librarianAccess->setText(QString());
        readerLabel->setText(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Ng\306\260\341\273\235i \304\221\341\273\215c</span></p></body></html>", Q_NULLPTR));
        librarianLabel->setText(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Th\341\273\247 th\306\260</span></p></body></html>", Q_NULLPTR));
        dataProcessorAccess->setText(QString());
        databaseLabel->setText(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Qu\341\272\243n l\303\275 d\341\273\257 li\341\273\207u</span></p></body></html>", Q_NULLPTR));
        administratorAccess->setText(QString());
        administratorLabel->setText(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Qu\341\272\243n tr\341\273\213 vi\303\252n</span></p></body></html>", Q_NULLPTR));
        roleLabel->setText(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:13pt; color:#ffffff;\">Ch\341\273\215n vai tr\303\262:</span></p></body></html>", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LIBPROClass", "\304\220\304\203ng nh\341\272\255p", Q_NULLPTR));
        signUpButton->setText(QApplication::translate("LIBPROClass", "\304\220\304\203ng k\303\275", Q_NULLPTR));
        label->setText(QApplication::translate("LIBPROClass", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Qu\303\252n m\341\272\255t kh\341\272\251u?</span></p></body></html>", Q_NULLPTR));
        loginLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LIBPROClass: public Ui_LIBPROClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBPRO_H
