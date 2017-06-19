/********************************************************************************
** Form generated from reading UI file 'Administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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

class Ui_Administrator
{
public:
    QTabWidget *tabWidget;
    QWidget *user_Information;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *userIdLe;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_4;
    QLineEdit *IdLe;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *firstNameLe;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lastNameLe;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QCheckBox *maleCheckBox;
    QCheckBox *femaleCheckBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *yearLe;
    QLabel *label_10;
    QLineEdit *monthLe;
    QLabel *label_11;
    QLineEdit *dayLe;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QLineEdit *phoneNumberLe;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_9;
    QLineEdit *emailLe;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_12;
    QLineEdit *occupationLe;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QLineEdit *companySchoolLe;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_14;
    QLineEdit *addressLe;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *insertButton;
    QPushButton *searchButton;
    QPushButton *deleteButton;
    QPushButton *updateButton;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *notiUpdate;
    QTableView *userView;
    QWidget *account_Information;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_15;
    QLineEdit *userIdLe_2;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_16;
    QLineEdit *accountNameLe;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_17;
    QLineEdit *passwordLe;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_3;
    QCheckBox *banCheckBox;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *readerCheckBox;
    QCheckBox *librarianCheckBox;
    QCheckBox *dataProcessorCheckBox;
    QCheckBox *administratorCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *insertButton_2;
    QPushButton *searchButton_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *deleteButton_2;
    QPushButton *updateButton_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *notiUpdate_2;
    QTableView *accountView;
    QFrame *frame;
    QPushButton *logOutButton;
    QPushButton *roleButton;
    QPushButton *messageButton;
    QFrame *frame_2;
    QLabel *userLabel;
    QLabel *label_18;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(1060, 588);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Administrator->sizePolicy().hasHeightForWidth());
        Administrator->setSizePolicy(sizePolicy);
        Administrator->setMinimumSize(QSize(1060, 588));
        Administrator->setMaximumSize(QSize(1060, 588));
        Administrator->setStyleSheet(QLatin1String("#Administrator{\n"
"border-image: url(:/appscreen/Resources/appscreen/Admin_Background.png);\n"
"}\n"
"QTabWidget::pane{\n"
"border:0;\n"
"}\n"
"QLabel{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"}\n"
"QCheckBox{\n"
"font: 9pt \"Segoe UI\";\n"
"color: black;\n"
"}\n"
"QLineEdit{\n"
"border-radius:2px;\n"
"}\n"
""));
        tabWidget = new QTabWidget(Administrator);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 100, 1041, 481));
        tabWidget->setStyleSheet(QLatin1String("#user_Information{\n"
"	background-color:  rgba(0, 0, 0,0.6);\n"
"\n"
"	border-radius:2px;\n"
"}\n"
"#account_Information{\n"
"background-color:  rgba(0, 0, 0,0.6);\n"
"border-radius:2px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"width: 200px;\n"
"height:55px;\n"
"\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(66, 134, 244, .4);\n"
"border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"QTabBar::tab:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"width: 200px;\n"
"border: 1px solid black;\n"
"	font: 10pt \"Segoe UI\";\n"
"border-radius: 0px;background-color: rgba(255, 255, 255, .4);border-color:rgba(255, 255, 255, .5)\n"
"}\n"
"\n"
"\n"
""));
        user_Information = new QWidget();
        user_Information->setObjectName(QStringLiteral("user_Information"));
        layoutWidget = new QWidget(user_Information);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 1021, 391));
        verticalLayout_12 = new QVBoxLayout(layoutWidget);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        userIdLe = new QLineEdit(layoutWidget);
        userIdLe->setObjectName(QStringLiteral("userIdLe"));

        verticalLayout->addWidget(userIdLe);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_19->addWidget(label_4);

        IdLe = new QLineEdit(layoutWidget);
        IdLe->setObjectName(QStringLiteral("IdLe"));

        verticalLayout_19->addWidget(IdLe);


        horizontalLayout_3->addLayout(verticalLayout_19);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        firstNameLe = new QLineEdit(layoutWidget);
        firstNameLe->setObjectName(QStringLiteral("firstNameLe"));

        verticalLayout_2->addWidget(firstNameLe);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        lastNameLe = new QLineEdit(layoutWidget);
        lastNameLe->setObjectName(QStringLiteral("lastNameLe"));
        lastNameLe->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(lastNameLe);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        maleCheckBox = new QCheckBox(layoutWidget);
        maleCheckBox->setObjectName(QStringLiteral("maleCheckBox"));
        maleCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout->addWidget(maleCheckBox);

        femaleCheckBox = new QCheckBox(layoutWidget);
        femaleCheckBox->setObjectName(QStringLiteral("femaleCheckBox"));
        femaleCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout->addWidget(femaleCheckBox);


        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        yearLe = new QLineEdit(layoutWidget);
        yearLe->setObjectName(QStringLiteral("yearLe"));
        sizePolicy.setHeightForWidth(yearLe->sizePolicy().hasHeightForWidth());
        yearLe->setSizePolicy(sizePolicy);
        yearLe->setMaximumSize(QSize(59, 16777215));

        horizontalLayout_2->addWidget(yearLe);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        monthLe = new QLineEdit(layoutWidget);
        monthLe->setObjectName(QStringLiteral("monthLe"));
        sizePolicy.setHeightForWidth(monthLe->sizePolicy().hasHeightForWidth());
        monthLe->setSizePolicy(sizePolicy);
        monthLe->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(monthLe);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        dayLe = new QLineEdit(layoutWidget);
        dayLe->setObjectName(QStringLiteral("dayLe"));
        sizePolicy.setHeightForWidth(dayLe->sizePolicy().hasHeightForWidth());
        dayLe->setSizePolicy(sizePolicy);
        dayLe->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(dayLe);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_6->addWidget(label_8);

        phoneNumberLe = new QLineEdit(layoutWidget);
        phoneNumberLe->setObjectName(QStringLiteral("phoneNumberLe"));

        verticalLayout_6->addWidget(phoneNumberLe);


        horizontalLayout_3->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_7->addWidget(label_9);

        emailLe = new QLineEdit(layoutWidget);
        emailLe->setObjectName(QStringLiteral("emailLe"));

        verticalLayout_7->addWidget(emailLe);


        horizontalLayout_4->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_8->addWidget(label_12);

        occupationLe = new QLineEdit(layoutWidget);
        occupationLe->setObjectName(QStringLiteral("occupationLe"));

        verticalLayout_8->addWidget(occupationLe);


        horizontalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_9->addWidget(label_13);

        companySchoolLe = new QLineEdit(layoutWidget);
        companySchoolLe->setObjectName(QStringLiteral("companySchoolLe"));

        verticalLayout_9->addWidget(companySchoolLe);


        horizontalLayout_4->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, -1, 0, -1);
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_10->addWidget(label_14);

        addressLe = new QLineEdit(layoutWidget);
        addressLe->setObjectName(QStringLiteral("addressLe"));
        addressLe->setMinimumSize(QSize(350, 0));
        addressLe->setMaximumSize(QSize(350, 16777215));

        verticalLayout_10->addWidget(addressLe);


        horizontalLayout_4->addLayout(verticalLayout_10);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(778, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        insertButton = new QPushButton(layoutWidget);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setStyleSheet(QLatin1String("#insertButton {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #fff);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"#insertButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#insertButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_5->addWidget(insertButton);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setStyleSheet(QLatin1String("#searchButton {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"#searchButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#searchButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_5->addWidget(searchButton);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setStyleSheet(QLatin1String("#deleteButton{\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"#deleteButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#deleteButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_5->addWidget(deleteButton);

        updateButton = new QPushButton(layoutWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setStyleSheet(QLatin1String("#updateButton{\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"#updateButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#updateButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_5->addWidget(updateButton);


        verticalLayout_11->addLayout(horizontalLayout_5);


        verticalLayout_12->addLayout(verticalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        notiUpdate = new QCheckBox(layoutWidget);
        notiUpdate->setObjectName(QStringLiteral("notiUpdate"));
        notiUpdate->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_9->addWidget(notiUpdate);


        verticalLayout_12->addLayout(horizontalLayout_9);

        userView = new QTableView(layoutWidget);
        userView->setObjectName(QStringLiteral("userView"));

        verticalLayout_12->addWidget(userView);

        tabWidget->addTab(user_Information, QString());
        account_Information = new QWidget();
        account_Information->setObjectName(QStringLiteral("account_Information"));
        layoutWidget1 = new QWidget(account_Information);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 1021, 391));
        verticalLayout_18 = new QVBoxLayout(layoutWidget1);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_13->addWidget(label_15);

        userIdLe_2 = new QLineEdit(layoutWidget1);
        userIdLe_2->setObjectName(QStringLiteral("userIdLe_2"));

        verticalLayout_13->addWidget(userIdLe_2);


        horizontalLayout_7->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_14->addWidget(label_16);

        accountNameLe = new QLineEdit(layoutWidget1);
        accountNameLe->setObjectName(QStringLiteral("accountNameLe"));

        verticalLayout_14->addWidget(accountNameLe);


        horizontalLayout_7->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_15->addWidget(label_17);

        passwordLe = new QLineEdit(layoutWidget1);
        passwordLe->setObjectName(QStringLiteral("passwordLe"));

        verticalLayout_15->addWidget(passwordLe);


        horizontalLayout_7->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_16->addWidget(label_3);

        banCheckBox = new QCheckBox(layoutWidget1);
        banCheckBox->setObjectName(QStringLiteral("banCheckBox"));
        banCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        verticalLayout_16->addWidget(banCheckBox);


        horizontalLayout_7->addLayout(verticalLayout_16);


        verticalLayout_17->addLayout(horizontalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        readerCheckBox = new QCheckBox(layoutWidget1);
        readerCheckBox->setObjectName(QStringLiteral("readerCheckBox"));
        readerCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_12->addWidget(readerCheckBox);

        librarianCheckBox = new QCheckBox(layoutWidget1);
        librarianCheckBox->setObjectName(QStringLiteral("librarianCheckBox"));
        librarianCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_12->addWidget(librarianCheckBox);

        dataProcessorCheckBox = new QCheckBox(layoutWidget1);
        dataProcessorCheckBox->setObjectName(QStringLiteral("dataProcessorCheckBox"));
        dataProcessorCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_12->addWidget(dataProcessorCheckBox);

        administratorCheckBox = new QCheckBox(layoutWidget1);
        administratorCheckBox->setObjectName(QStringLiteral("administratorCheckBox"));
        administratorCheckBox->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_12->addWidget(administratorCheckBox);


        verticalLayout_17->addLayout(horizontalLayout_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(570, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        insertButton_2 = new QPushButton(layoutWidget1);
        insertButton_2->setObjectName(QStringLiteral("insertButton_2"));
        insertButton_2->setStyleSheet(QLatin1String("#insertButton_2 {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"#insertButton_2:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#insertButton_2:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_8->addWidget(insertButton_2);

        searchButton_2 = new QPushButton(layoutWidget1);
        searchButton_2->setObjectName(QStringLiteral("searchButton_2"));
        searchButton_2->setStyleSheet(QLatin1String("#searchButton_2 {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"#searchButton_2:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#searchButton_2:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_8->addWidget(searchButton_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));

        horizontalLayout_8->addLayout(horizontalLayout_10);

        deleteButton_2 = new QPushButton(layoutWidget1);
        deleteButton_2->setObjectName(QStringLiteral("deleteButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deleteButton_2->sizePolicy().hasHeightForWidth());
        deleteButton_2->setSizePolicy(sizePolicy1);
        deleteButton_2->setStyleSheet(QLatin1String("#deleteButton_2 {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"#deleteButton_2:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#deleteButton_2:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_8->addWidget(deleteButton_2);

        updateButton_2 = new QPushButton(layoutWidget1);
        updateButton_2->setObjectName(QStringLiteral("updateButton_2"));
        updateButton_2->setStyleSheet(QLatin1String("#updateButton_2 {\n"
"	\n"
"color: white;\n"
"border: 1px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"background-color: rgba(255,255,255, .5);\n"
"}\n"
"\n"
"#updateButton_2:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"#updateButton_2:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_8->addWidget(updateButton_2);


        verticalLayout_17->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        notiUpdate_2 = new QCheckBox(layoutWidget1);
        notiUpdate_2->setObjectName(QStringLiteral("notiUpdate_2"));
        notiUpdate_2->setStyleSheet(QStringLiteral("color: white;"));

        horizontalLayout_6->addWidget(notiUpdate_2);


        verticalLayout_17->addLayout(horizontalLayout_6);


        verticalLayout_18->addLayout(verticalLayout_17);

        accountView = new QTableView(layoutWidget1);
        accountView->setObjectName(QStringLiteral("accountView"));

        verticalLayout_18->addWidget(accountView);

        tabWidget->addTab(account_Information, QString());
        frame = new QFrame(Administrator);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(320, 0, 741, 81));
        frame->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0,0.5);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        logOutButton = new QPushButton(frame);
        logOutButton->setObjectName(QStringLiteral("logOutButton"));
        logOutButton->setGeometry(QRect(490, 0, 251, 81));
        logOutButton->setStyleSheet(QLatin1String("#logOutButton{\n"
"background-color: rgba(255, 255, 255,0);\n"
"color: white;\n"
"font: 12pt \"Segoe UI Symbol\";\n"
"}\n"
"#logOutButton::hover{\n"
"background-color: rgba(255, 255, 255,0.3);\n"
"color: white;\n"
"font: 12pt \"Segoe UI Symbol\";\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/logout (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        logOutButton->setIcon(icon);
        logOutButton->setIconSize(QSize(50, 50));
        roleButton = new QPushButton(frame);
        roleButton->setObjectName(QStringLiteral("roleButton"));
        roleButton->setGeometry(QRect(240, 0, 251, 81));
        roleButton->setStyleSheet(QLatin1String("#roleButton{\n"
"background-color: rgba(255, 255, 255,0);\n"
"color: white;\n"
"font: 12pt \"Segoe UI Symbol\";\n"
"}\n"
"#roleButton::hover{\n"
"background-color: rgba(255, 255, 255,0.3);\n"
"color: white;\n"
"font: 12pt \"Segoe UI Symbol\";\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/shuffle (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        roleButton->setIcon(icon1);
        roleButton->setIconSize(QSize(50, 50));
        messageButton = new QPushButton(frame);
        messageButton->setObjectName(QStringLiteral("messageButton"));
        messageButton->setGeometry(QRect(0, 0, 241, 81));
        messageButton->setStyleSheet(QLatin1String("#messageButton{\n"
"background-color: rgba(255, 255, 255,0);\n"
"color: white;\n"
"font: 12pt \"Segoe UI Symbol\";\n"
"}\n"
"#messageButton::hover{\n"
"background-color: rgba(255, 255, 255,0.3);\n"
"color: white;\n"
"font: 12pt \"Segoe UI Symbol\";\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/Resources/icon/6969.png"), QSize(), QIcon::Normal, QIcon::Off);
        messageButton->setIcon(icon2);
        messageButton->setIconSize(QSize(50, 50));
        frame_2 = new QFrame(Administrator);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 271, 81));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0,0.6);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        userLabel = new QLabel(frame_2);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(90, 30, 181, 21));
        sizePolicy.setHeightForWidth(userLabel->sizePolicy().hasHeightForWidth());
        userLabel->setSizePolicy(sizePolicy);
        userLabel->setStyleSheet(QLatin1String("font: 11pt \"Segoe UI\";\n"
"background-color: rgba(255, 255, 255,0);"));
        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(20, 10, 61, 61));
        label_18->setStyleSheet(QLatin1String("font: 11pt \"Segoe UI\";\n"
"background-color: rgba(255, 255, 255,0);"));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/barIcon/Resources/icon/user (1).png")));
        label_18->setScaledContents(true);

        retranslateUi(Administrator);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Administrator", Q_NULLPTR));
        label->setText(QApplication::translate("Administrator", "User ID", Q_NULLPTR));
        label_4->setText(QApplication::translate("Administrator", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Administrator", "First name", Q_NULLPTR));
        label_5->setText(QApplication::translate("Administrator", "Last name", Q_NULLPTR));
        label_6->setText(QApplication::translate("Administrator", "Gender", Q_NULLPTR));
        maleCheckBox->setText(QApplication::translate("Administrator", "Male", Q_NULLPTR));
        femaleCheckBox->setText(QApplication::translate("Administrator", "Female", Q_NULLPTR));
        label_7->setText(QApplication::translate("Administrator", "Date of birth (yyyy/mm/dd)", Q_NULLPTR));
        label_10->setText(QApplication::translate("Administrator", "/", Q_NULLPTR));
        label_11->setText(QApplication::translate("Administrator", "/", Q_NULLPTR));
        label_8->setText(QApplication::translate("Administrator", "Phone number", Q_NULLPTR));
        label_9->setText(QApplication::translate("Administrator", "Email", Q_NULLPTR));
        label_12->setText(QApplication::translate("Administrator", "Occupation", Q_NULLPTR));
        label_13->setText(QApplication::translate("Administrator", "Company_school", Q_NULLPTR));
        label_14->setText(QApplication::translate("Administrator", "Address", Q_NULLPTR));
        insertButton->setText(QApplication::translate("Administrator", "Insert", Q_NULLPTR));
        searchButton->setText(QApplication::translate("Administrator", "Search", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("Administrator", "Delete", Q_NULLPTR));
        updateButton->setText(QApplication::translate("Administrator", "Update", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        notiUpdate->setToolTip(QApplication::translate("Administrator", "<html><head/><body><p><span style=\" color:#ffffff;\">Stop notifying me when updating data</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        notiUpdate->setText(QApplication::translate("Administrator", "Stop notifying me when updating user's data", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(user_Information), QApplication::translate("Administrator", "User information", Q_NULLPTR));
        label_15->setText(QApplication::translate("Administrator", "User ID", Q_NULLPTR));
        label_16->setText(QApplication::translate("Administrator", "Account name", Q_NULLPTR));
        label_17->setText(QApplication::translate("Administrator", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("Administrator", "Account status", Q_NULLPTR));
        banCheckBox->setText(QApplication::translate("Administrator", "Banned", Q_NULLPTR));
        readerCheckBox->setText(QApplication::translate("Administrator", "Reader", Q_NULLPTR));
        librarianCheckBox->setText(QApplication::translate("Administrator", "Librarian", Q_NULLPTR));
        dataProcessorCheckBox->setText(QApplication::translate("Administrator", "Data Processor", Q_NULLPTR));
        administratorCheckBox->setText(QApplication::translate("Administrator", "Administrator", Q_NULLPTR));
        insertButton_2->setText(QApplication::translate("Administrator", "Insert", Q_NULLPTR));
        searchButton_2->setText(QApplication::translate("Administrator", "Search", Q_NULLPTR));
        deleteButton_2->setText(QApplication::translate("Administrator", "Delete", Q_NULLPTR));
        updateButton_2->setText(QApplication::translate("Administrator", "Update", Q_NULLPTR));
        notiUpdate_2->setText(QApplication::translate("Administrator", "Stop notifying me when updating user's data", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(account_Information), QApplication::translate("Administrator", "Account information", Q_NULLPTR));
        logOutButton->setText(QApplication::translate("Administrator", "  Log Out", Q_NULLPTR));
        roleButton->setText(QApplication::translate("Administrator", "Change your role", Q_NULLPTR));
        messageButton->setText(QApplication::translate("Administrator", "Send your message", Q_NULLPTR));
        userLabel->setText(QApplication::translate("Administrator", "Hello", Q_NULLPTR));
        label_18->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
