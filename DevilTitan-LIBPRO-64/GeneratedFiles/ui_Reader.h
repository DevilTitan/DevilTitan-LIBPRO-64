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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reader
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *list;
    QPushButton *changeRole;
    QPushButton *user;
    QPushButton *notifications;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *book;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *Reader)
    {
        if (Reader->objectName().isEmpty())
            Reader->setObjectName(QStringLiteral("Reader"));
        Reader->resize(800, 600);
        horizontalLayoutWidget = new QWidget(Reader);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 801, 45));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font-size: 25px;\n"
"font-weight: bold;\n"
"font-family: Roboto;"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        list = new QPushButton(horizontalLayoutWidget);
        list->setObjectName(QStringLiteral("list"));
        list->setStyleSheet(QStringLiteral("border-radius: 0px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/barIcon/Resources/icon/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        list->setIcon(icon);
        list->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(list);

        changeRole = new QPushButton(horizontalLayoutWidget);
        changeRole->setObjectName(QStringLiteral("changeRole"));
        changeRole->setStyleSheet(QStringLiteral("border-radius: 0px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/barIcon/Resources/icon/001-sharing.png"), QSize(), QIcon::Normal, QIcon::Off);
        changeRole->setIcon(icon1);
        changeRole->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(changeRole);

        user = new QPushButton(horizontalLayoutWidget);
        user->setObjectName(QStringLiteral("user"));
        user->setStyleSheet(QStringLiteral("border-radius: 0px;"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/barIcon/Resources/icon/003-user.png"), QSize(), QIcon::Normal, QIcon::Off);
        user->setIcon(icon2);
        user->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(user);

        notifications = new QPushButton(horizontalLayoutWidget);
        notifications->setObjectName(QStringLiteral("notifications"));
        notifications->setStyleSheet(QStringLiteral("border-radius: 0px;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/barIcon/Resources/icon/002-worldwide.png"), QSize(), QIcon::Normal, QIcon::Off);
        notifications->setIcon(icon3);
        notifications->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(notifications);

        horizontalLayoutWidget_2 = new QWidget(Reader);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 50, 801, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 25));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("border-radius: 0px;"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/barIcon/Resources/icon/004-search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalWidget_3 = new QWidget(Reader);
        horizontalWidget_3->setObjectName(QStringLiteral("horizontalWidget_3"));
        horizontalWidget_3->setGeometry(QRect(30, 110, 741, 161));
        horizontalWidget_3->setStyleSheet(QStringLiteral("#horizontalWidget_3 {border: 1px solid black;}"));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(180, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        book = new QLabel(horizontalWidget_3);
        book->setObjectName(QStringLiteral("book"));
        book->setMaximumSize(QSize(100, 130));

        horizontalLayout_3->addWidget(book);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(horizontalWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_4);

        label_3 = new QLabel(horizontalWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(horizontalWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_6);

        label_5 = new QLabel(horizontalWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));

        horizontalLayout_5->addWidget(label_5);


        verticalLayout_4->addLayout(horizontalLayout_5);

        label_7 = new QLabel(horizontalWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        textBrowser = new QTextBrowser(horizontalWidget_3);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);
        textBrowser->setMinimumSize(QSize(0, 0));
        textBrowser->setMaximumSize(QSize(300, 80));
        textBrowser->setStyleSheet(QStringLiteral("border-radius: 0px;"));

        verticalLayout_4->addWidget(textBrowser);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        retranslateUi(Reader);

        QMetaObject::connectSlotsByName(Reader);
    } // setupUi

    void retranslateUi(QWidget *Reader)
    {
        Reader->setWindowTitle(QApplication::translate("Reader", "Reader", Q_NULLPTR));
        label->setText(QApplication::translate("Reader", "\304\220\341\273\230C GI\341\272\242", Q_NULLPTR));
        list->setText(QString());
        changeRole->setText(QString());
        user->setText(QString());
        notifications->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("Reader", "T\303\254m ki\341\272\277m", Q_NULLPTR));
        pushButton->setText(QString());
        book->setText(QString());
        label_4->setText(QApplication::translate("Reader", "T\303\252n s\303\241ch:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Reader", "name", Q_NULLPTR));
        label_6->setText(QApplication::translate("Reader", "T\303\241c gi\341\272\243:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Reader", "author", Q_NULLPTR));
        label_7->setText(QApplication::translate("Reader", "M\303\264 t\341\272\243:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Reader: public Ui_Reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
