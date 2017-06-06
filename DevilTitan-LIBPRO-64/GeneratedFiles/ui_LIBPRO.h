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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LIBPRO
{
public:
    QWidget *centralWidget;
    QLabel *loginLogo;
    QPushButton *loginButton;
    QPushButton *signUpButton;
    QLabel *label;
    QLabel *roleLabel;
    QPushButton *readerAccess;
    QPushButton *librarianAccess;
    QPushButton *dataProcessorAccess;
    QPushButton *administratorAccess;
    QLabel *readerLabel;
    QLabel *administratorLabel;
    QLabel *databaseLabel;
    QLabel *librarianLabel;
    QWidget *userForm;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *userNameLabel;
    QLineEdit *userNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;

    void setupUi(QMainWindow *LIBPRO)
    {
        if (LIBPRO->objectName().isEmpty())
            LIBPRO->setObjectName(QStringLiteral("LIBPRO"));
        LIBPRO->resize(800, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LIBPRO->sizePolicy().hasHeightForWidth());
        LIBPRO->setSizePolicy(sizePolicy);
        LIBPRO->setMinimumSize(QSize(800, 500));
        LIBPRO->setMaximumSize(QSize(800, 500));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/window-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LIBPRO->setWindowIcon(icon);
        LIBPRO->setLayoutDirection(Qt::LeftToRight);
        LIBPRO->setAutoFillBackground(false);
        LIBPRO->setStyleSheet(QLatin1String("#centralWidget{\n"
"box-shadow: 10px 10px 5px #888888;\n"
"border-image: url(:/appscreen/Resources/appscreen/login-background.png);\n"
"}\n"
"#userForm\n"
"{\n"
"background: rgba(237, 133, 23, 80);\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton\n"
"{\n"
"color: white;\n"
"background-color: #cc6c12;\n"
"border-radius: 3px;\n"
"}\n"
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
        loginLogo = new QLabel(centralWidget);
        loginLogo->setObjectName(QStringLiteral("loginLogo"));
        loginLogo->setGeometry(QRect(300, 60, 201, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginLogo->sizePolicy().hasHeightForWidth());
        loginLogo->setSizePolicy(sizePolicy1);
        loginLogo->setMinimumSize(QSize(50, 40));
        loginLogo->setMaximumSize(QSize(700, 100));
        loginLogo->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/LIBPRO-icon.png")));
        loginLogo->setScaledContents(true);
        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(300, 420, 75, 21));
        loginButton->setStyleSheet(QStringLiteral(""));
        signUpButton = new QPushButton(centralWidget);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setGeometry(QRect(400, 420, 75, 21));
        signUpButton->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 450, 91, 16));
        roleLabel = new QLabel(centralWidget);
        roleLabel->setObjectName(QStringLiteral("roleLabel"));
        roleLabel->setGeometry(QRect(350, 240, 91, 31));
        roleLabel->setStyleSheet(QLatin1String("#roleLabel{\n"
"font:75 12pt \"Calibri\";\n"
"}"));
        readerAccess = new QPushButton(centralWidget);
        readerAccess->setObjectName(QStringLiteral("readerAccess"));
        readerAccess->setGeometry(QRect(120, 270, 111, 111));
        sizePolicy.setHeightForWidth(readerAccess->sizePolicy().hasHeightForWidth());
        readerAccess->setSizePolicy(sizePolicy);
        readerAccess->setStyleSheet(QLatin1String("#readerAccess{\n"
"background: rgba(0,0,0,80);\n"
"border-image: url(:/icon/Resources/icon/reader.png);\n"
"}\n"
"#readerAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}\n"
""));
        librarianAccess = new QPushButton(centralWidget);
        librarianAccess->setObjectName(QStringLiteral("librarianAccess"));
        librarianAccess->setGeometry(QRect(260, 270, 111, 111));
        librarianAccess->setStyleSheet(QLatin1String("#librarianAccess{\n"
"background: rgba(0,0,0,80);\n"
"	border-image: url(:/icon/Resources/icon/librarian.png);\n"
"}\n"
"#librarianAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}"));
        dataProcessorAccess = new QPushButton(centralWidget);
        dataProcessorAccess->setObjectName(QStringLiteral("dataProcessorAccess"));
        dataProcessorAccess->setGeometry(QRect(400, 270, 111, 111));
        sizePolicy.setHeightForWidth(dataProcessorAccess->sizePolicy().hasHeightForWidth());
        dataProcessorAccess->setSizePolicy(sizePolicy);
        dataProcessorAccess->setStyleSheet(QLatin1String("#dataProcessorAccess{\n"
"background: rgba(0,0,0,80);\n"
"	border-image: url(:/icon/Resources/icon/dataProcessor.png);\n"
"}\n"
"#dataProcessorAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}"));
        administratorAccess = new QPushButton(centralWidget);
        administratorAccess->setObjectName(QStringLiteral("administratorAccess"));
        administratorAccess->setGeometry(QRect(540, 270, 111, 111));
        sizePolicy.setHeightForWidth(administratorAccess->sizePolicy().hasHeightForWidth());
        administratorAccess->setSizePolicy(sizePolicy);
        administratorAccess->setStyleSheet(QLatin1String("#administratorAccess{\n"
"background: rgba(0,0,0,80);\n"
"	border-image: url(:/icon/Resources/icon/administrator.png);\n"
"}\n"
"#administratorAccess:hover{\n"
"background: rgba(255,255,255,80);\n"
"}"));
        readerLabel = new QLabel(centralWidget);
        readerLabel->setObjectName(QStringLiteral("readerLabel"));
        readerLabel->setGeometry(QRect(150, 390, 61, 16));
        readerLabel->setStyleSheet(QStringLiteral(""));
        administratorLabel = new QLabel(centralWidget);
        administratorLabel->setObjectName(QStringLiteral("administratorLabel"));
        administratorLabel->setGeometry(QRect(560, 390, 81, 16));
        databaseLabel = new QLabel(centralWidget);
        databaseLabel->setObjectName(QStringLiteral("databaseLabel"));
        databaseLabel->setGeometry(QRect(410, 390, 91, 16));
        librarianLabel = new QLabel(centralWidget);
        librarianLabel->setObjectName(QStringLiteral("librarianLabel"));
        librarianLabel->setGeometry(QRect(290, 390, 51, 16));
        userForm = new QWidget(centralWidget);
        userForm->setObjectName(QStringLiteral("userForm"));
        userForm->setGeometry(QRect(180, 120, 401, 111));
        verticalLayout = new QVBoxLayout(userForm);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(50, 25, 50, -1);
        userNameLabel = new QLabel(userForm);
        userNameLabel->setObjectName(QStringLiteral("userNameLabel"));
        userNameLabel->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(userNameLabel);

        userNameLineEdit = new QLineEdit(userForm);
        userNameLineEdit->setObjectName(QStringLiteral("userNameLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(userNameLineEdit->sizePolicy().hasHeightForWidth());
        userNameLineEdit->setSizePolicy(sizePolicy2);
        userNameLineEdit->setMinimumSize(QSize(5, 0));

        horizontalLayout->addWidget(userNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(50, -1, 50, 25);
        passwordLabel = new QLabel(userForm);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(userForm);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        sizePolicy.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy);
        passwordLineEdit->setMinimumSize(QSize(195, 0));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        LIBPRO->setCentralWidget(centralWidget);

        retranslateUi(LIBPRO);

        QMetaObject::connectSlotsByName(LIBPRO);
    } // setupUi

    void retranslateUi(QMainWindow *LIBPRO)
    {
        LIBPRO->setWindowTitle(QApplication::translate("LIBPRO", "LIBPRO", Q_NULLPTR));
        loginLogo->setText(QString());
        loginButton->setText(QApplication::translate("LIBPRO", "\304\220\304\203ng nh\341\272\255p", Q_NULLPTR));
        signUpButton->setText(QApplication::translate("LIBPRO", "\304\220\304\203ng k\303\275", Q_NULLPTR));
        label->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Qu\303\252n m\341\272\255t kh\341\272\251u?</span></p></body></html>", Q_NULLPTR));
        roleLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-size:13pt; color:#ffffff;\">Ch\341\273\215n vai tr\303\262:</span></p></body></html>", Q_NULLPTR));
        readerAccess->setText(QString());
        librarianAccess->setText(QString());
        dataProcessorAccess->setText(QString());
        administratorAccess->setText(QString());
        readerLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" color:#ffffff;\">\304\220\341\273\231c gi\341\272\243</span></p></body></html>", Q_NULLPTR));
        administratorLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Qu\341\272\243n tr\341\273\213 vi\303\252n</span></p></body></html>", Q_NULLPTR));
        databaseLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Qu\341\272\243n l\303\275 d\341\273\257 li\341\273\207u</span></p></body></html>", Q_NULLPTR));
        librarianLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Th\341\273\247 th\306\260</span></p></body></html>", Q_NULLPTR));
        userNameLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">T\303\252n t\303\240i kho\341\272\243n: </span></p></body></html>", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("LIBPRO", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">M\341\272\255t kh\341\272\251u: </span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LIBPRO: public Ui_LIBPRO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBPRO_H
