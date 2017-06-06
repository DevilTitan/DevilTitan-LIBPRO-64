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
    QTableView *tableView_2;
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
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *activeCheckBox;
    QCheckBox *bannedCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *insertButton_2;
    QPushButton *searchButton_2;
    QTableView *tableView;
    QFrame *frame;
    QPushButton *userButton;
    QPushButton *notiButton;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(1060, 559);
        Administrator->setStyleSheet(QLatin1String("#Administrator{\n"
"background-image: url(:/appscreen/Resources/appscreen/administrator-background.png);\n"
"}\n"
"QTabWidget::pane{\n"
"border:0;\n"
"}\n"
"QLabel{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"}\n"
"QPushButton{\n"
"font: 9pt \"Segoe UI\";\n"
"}\n"
"QCheckBox{\n"
"font: 9pt \"Segoe UI\";\n"
"color: white;\n"
"}\n"
"QLineEdit{\n"
"border-radius:2px;\n"
"}\n"
""));
        tabWidget = new QTabWidget(Administrator);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 100, 1041, 441));
        tabWidget->setStyleSheet(QLatin1String("#user_Information{\n"
"	background-color:  rgba(46, 132, 189,0.6);\n"
"\n"
"	border-radius:2px;\n"
"}\n"
"#account_Information{\n"
"background-color:  rgba(46, 132, 189,0.6);\n"
"border-radius:2px;\n"
"}\n"
"QTabBar::tab{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 200px;\n"
"background-color:  rgba(46, 132, 189,0.3);\n"
"}\n"
"QTabBar::tab:selected{\n"
"font: 9pt \"Segoe UI\";\n"
"color:white;\n"
"width: 200px;\n"
"background-color:  rgba(46, 132, 189,0.6);\n"
"}\n"
"\n"
"\n"
""));
        user_Information = new QWidget();
        user_Information->setObjectName(QStringLiteral("user_Information"));
        layoutWidget = new QWidget(user_Information);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 991, 381));
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

        horizontalLayout->addWidget(maleCheckBox);

        femaleCheckBox = new QCheckBox(layoutWidget);
        femaleCheckBox->setObjectName(QStringLiteral("femaleCheckBox"));

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
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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
        insertButton->setStyleSheet(QLatin1String("#insertButton{\n"
"background-color: rgba(255, 255, 255,0.5);\n"
"}\n"
"#insertButton:pressed{\n"
"background-color: rgba(255, 255, 255,1);\n"
"}"));

        horizontalLayout_5->addWidget(insertButton);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setStyleSheet(QLatin1String("#searchButton{\n"
"background-color: rgba(255, 255, 255,0.5);\n"
"}\n"
"#searchButton:pressed{\n"
"background-color: rgba(255, 255, 255,1);\n"
"}"));

        horizontalLayout_5->addWidget(searchButton);


        verticalLayout_11->addLayout(horizontalLayout_5);


        verticalLayout_12->addLayout(verticalLayout_11);

        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        verticalLayout_12->addWidget(tableView_2);

        tabWidget->addTab(user_Information, QString());
        account_Information = new QWidget();
        account_Information->setObjectName(QStringLiteral("account_Information"));
        layoutWidget1 = new QWidget(account_Information);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 1011, 381));
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
        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_16->addWidget(label_18);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        activeCheckBox = new QCheckBox(layoutWidget1);
        activeCheckBox->setObjectName(QStringLiteral("activeCheckBox"));

        horizontalLayout_6->addWidget(activeCheckBox);

        bannedCheckBox = new QCheckBox(layoutWidget1);
        bannedCheckBox->setObjectName(QStringLiteral("bannedCheckBox"));

        horizontalLayout_6->addWidget(bannedCheckBox);


        verticalLayout_16->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_16);


        verticalLayout_17->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(638, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        insertButton_2 = new QPushButton(layoutWidget1);
        insertButton_2->setObjectName(QStringLiteral("insertButton_2"));
        insertButton_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_8->addWidget(insertButton_2);

        searchButton_2 = new QPushButton(layoutWidget1);
        searchButton_2->setObjectName(QStringLiteral("searchButton_2"));

        horizontalLayout_8->addWidget(searchButton_2);


        verticalLayout_17->addLayout(horizontalLayout_8);


        verticalLayout_18->addLayout(verticalLayout_17);

        tableView = new QTableView(layoutWidget1);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_18->addWidget(tableView);

        tabWidget->addTab(account_Information, QString());
        frame = new QFrame(Administrator);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 1041, 61));
        frame->setStyleSheet(QStringLiteral("background-color: rgba(255, 99, 99,0.4);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        userButton = new QPushButton(frame);
        userButton->setObjectName(QStringLiteral("userButton"));
        userButton->setGeometry(QRect(70, 10, 41, 41));
        userButton->setStyleSheet(QLatin1String("#userButton{\n"
"border-image: url(:/icon/Resources/icon/user.png);\n"
"background-color: rgba(255,255,255,0);\n"
"}"));
        notiButton = new QPushButton(frame);
        notiButton->setObjectName(QStringLiteral("notiButton"));
        notiButton->setGeometry(QRect(130, 10, 41, 41));
        notiButton->setStyleSheet(QLatin1String("#notiButton{\n"
"border-image: url(:/icon/Resources/icon/school-bell.png);\n"
"background-color: rgba(255,255,255,0);\n"
"}"));

        retranslateUi(Administrator);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Administrator", Q_NULLPTR));
        label->setText(QApplication::translate("Administrator", "User ID", Q_NULLPTR));
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
        tabWidget->setTabText(tabWidget->indexOf(user_Information), QApplication::translate("Administrator", "User information", Q_NULLPTR));
        label_15->setText(QApplication::translate("Administrator", "User ID", Q_NULLPTR));
        label_16->setText(QApplication::translate("Administrator", "Account name", Q_NULLPTR));
        label_17->setText(QApplication::translate("Administrator", "Password", Q_NULLPTR));
        label_18->setText(QApplication::translate("Administrator", "Account status", Q_NULLPTR));
        activeCheckBox->setText(QApplication::translate("Administrator", "Active", Q_NULLPTR));
        bannedCheckBox->setText(QApplication::translate("Administrator", "Banned", Q_NULLPTR));
        insertButton_2->setText(QApplication::translate("Administrator", "Insert", Q_NULLPTR));
        searchButton_2->setText(QApplication::translate("Administrator", "Search", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(account_Information), QApplication::translate("Administrator", "Account information", Q_NULLPTR));
        userButton->setText(QString());
        notiButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
