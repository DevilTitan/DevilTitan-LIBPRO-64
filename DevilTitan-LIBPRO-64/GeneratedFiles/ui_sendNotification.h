/********************************************************************************
** Form generated from reading UI file 'sendNotification.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDNOTIFICATION_H
#define UI_SENDNOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendNotification
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *sendLE;
    QFrame *frame_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *readerCB;
    QCheckBox *librarianCB;
    QCheckBox *dataProcessorCB;
    QCheckBox *administratorCB;
    QFrame *frame_3;
    QTextEdit *messageTE;
    QPushButton *sendButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *sendNotification)
    {
        if (sendNotification->objectName().isEmpty())
            sendNotification->setObjectName(QStringLiteral("sendNotification"));
        sendNotification->resize(858, 515);
        sendNotification->setStyleSheet(QLatin1String("QCheckBox{\n"
"font: 60 12pt \"Segoe UI Light\";\n"
"}\n"
"QPushButton{\n"
"font: 25 12pt \"Segoe UI Light\";\n"
"color: white;\n"
"background-color: rgba(0, 0,0,0.5);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"font: 25 12pt \"Segoe UI Light\";\n"
"color: white;\n"
"background-color: rgba(30, 30,30,0.5);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton::pressed{\n"
"font: 25 12pt \"Segoe UI Light\";\n"
"color: white;\n"
"background-color: rgba(80, 80,80,0.5);\n"
"border-radius: 10px;\n"
"}\n"
"#sendNotification{\n"
"border-image: url(:/appscreen/Resources/appscreen/Admin_Background.png);\n"
"}"));
        frame = new QFrame(sendNotification);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 831, 71));
        frame->setStyleSheet(QLatin1String("#frame{\n"
"background-color: rgba(255, 255, 255,0.5);\n"
"border-radius: 10px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 831, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 10, 20, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Symbol"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: black;\n"
"background:rgba(255, 255, 255,0);\n"
"font: 11pt \"Segoe UI Symbol\";\n"
""));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(398, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        sendLE = new QLineEdit(layoutWidget);
        sendLE->setObjectName(QStringLiteral("sendLE"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sendLE->sizePolicy().hasHeightForWidth());
        sendLE->setSizePolicy(sizePolicy);
        sendLE->setStyleSheet(QStringLiteral("background: white;"));

        verticalLayout_2->addWidget(sendLE);

        frame_2 = new QFrame(sendNotification);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 110, 831, 71));
        frame_2->setStyleSheet(QLatin1String("#frame_2{\n"
"background-color: rgba(255,255, 255,0.5);\n"
"border-radius: 10px;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 831, 73));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 10);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: black;\n"
"background:rgba(255, 255, 255,0);\n"
"font: 11pt \"Segoe UI Symbol\";\n"
""));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(60, -1, 60, -1);
        readerCB = new QCheckBox(layoutWidget1);
        readerCB->setObjectName(QStringLiteral("readerCB"));
        readerCB->setStyleSheet(QLatin1String("color: black;\n"
"background:rgba(255, 255, 255,0)"));

        horizontalLayout->addWidget(readerCB);

        librarianCB = new QCheckBox(layoutWidget1);
        librarianCB->setObjectName(QStringLiteral("librarianCB"));
        librarianCB->setStyleSheet(QLatin1String("color: black;\n"
"background:rgba(255, 255, 255,0)"));

        horizontalLayout->addWidget(librarianCB);

        dataProcessorCB = new QCheckBox(layoutWidget1);
        dataProcessorCB->setObjectName(QStringLiteral("dataProcessorCB"));
        dataProcessorCB->setStyleSheet(QLatin1String("color: black;\n"
"background:rgba(255, 255, 255,0)"));

        horizontalLayout->addWidget(dataProcessorCB);

        administratorCB = new QCheckBox(layoutWidget1);
        administratorCB->setObjectName(QStringLiteral("administratorCB"));
        administratorCB->setStyleSheet(QLatin1String("color: black;\n"
"background:rgba(255, 255, 255,0)"));

        horizontalLayout->addWidget(administratorCB);


        verticalLayout->addLayout(horizontalLayout);

        frame_3 = new QFrame(sendNotification);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 200, 831, 271));
        frame_3->setStyleSheet(QLatin1String("#frame_3{\n"
"background-color: rgba(255, 255, 255,0.7);\n"
"border-radius:10px;\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        messageTE = new QTextEdit(frame_3);
        messageTE->setObjectName(QStringLiteral("messageTE"));
        messageTE->setGeometry(QRect(10, 10, 811, 251));
        sendButton = new QPushButton(sendNotification);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(620, 480, 91, 31));
        cancelButton = new QPushButton(sendNotification);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(720, 480, 91, 31));

        retranslateUi(sendNotification);

        QMetaObject::connectSlotsByName(sendNotification);
    } // setupUi

    void retranslateUi(QDialog *sendNotification)
    {
        sendNotification->setWindowTitle(QApplication::translate("sendNotification", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("sendNotification", "   To whom would you want to send message?", Q_NULLPTR));
        label_2->setText(QApplication::translate("sendNotification", "    ...or to which group of people would you want to send?", Q_NULLPTR));
        readerCB->setText(QApplication::translate("sendNotification", "Reader", Q_NULLPTR));
        librarianCB->setText(QApplication::translate("sendNotification", "Librarian", Q_NULLPTR));
        dataProcessorCB->setText(QApplication::translate("sendNotification", "Data Processor", Q_NULLPTR));
        administratorCB->setText(QApplication::translate("sendNotification", "Administrator", Q_NULLPTR));
        sendButton->setText(QApplication::translate("sendNotification", "SEND", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("sendNotification", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class sendNotification: public Ui_sendNotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDNOTIFICATION_H
