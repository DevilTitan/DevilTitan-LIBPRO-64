/********************************************************************************
** Form generated from reading UI file 'changetheme.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETHEME_H
#define UI_CHANGETHEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_ChangeTheme
{
public:
    QPushButton *change;
    QPushButton *cancel;
    QFrame *frame;
    QRadioButton *theme4;
    QRadioButton *theme2;
    QRadioButton *theme3;

    void setupUi(QDialog *ChangeTheme)
    {
        if (ChangeTheme->objectName().isEmpty())
            ChangeTheme->setObjectName(QStringLiteral("ChangeTheme"));
        ChangeTheme->resize(1086, 740);
        ChangeTheme->setStyleSheet(QLatin1String("QPushButton:hover{ background-color: rgba(0, 189, 155, 1);}\n"
"QPushButton\n"
"{\n"
"font: 25 11pt \"Ubuntu Light\";\n"
"color: white;\n"
"background-color: rgba(46, 150, 223, 0.8);\n"
"border-radius: 24px;\n"
"}\n"
"#theme2::indicator {\n"
"    width: 350px;\n"
"    height: 600px;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"#theme2::indicator::unchecked {\n"
"image: url(:/appscreen/Resources/appscreen/2c.jpg);\n"
"}\n"
"#theme2::indicator:unchecked:hover {\n"
"image: url(:/appscreen/Resources/appscreen/2b.jpg);\n"
"}\n"
"\n"
"#theme2::indicator::checked {\n"
"image: url(:/appscreen/Resources/appscreen/2b.jpg);\n"
"}\n"
"\n"
"#theme3::indicator {\n"
"    width: 350px;\n"
"    height: 600px;\n"
"}\n"
"\n"
"#theme3::indicator::unchecked {\n"
"image: url(:/appscreen/Resources/appscreen/3c.jpg);\n"
"}\n"
"#theme3::indicator:unchecked:hover {\n"
"image: url(:/appscreen/Resources/appscreen/3b.jpg);\n"
"}\n"
"#theme3::indicator::checked {\n"
"image: url(:/appscreen/Resources/appscreen/3b.jpg);\n"
"}\n"
"\n"
"#theme4::indi"
                        "cator {\n"
"    width: 350px;\n"
"    height: 600px;\n"
"}\n"
"\n"
"#theme4::indicator::unchecked {\n"
"image: url(:/appscreen/Resources/appscreen/4c.jpg);\n"
"}\n"
"#theme4::indicator:unchecked:hover {\n"
"image: url(:/appscreen/Resources/appscreen/4b.jpg);\n"
"}\n"
"#theme4::indicator::checked {\n"
"image: url(:/appscreen/Resources/appscreen/4b.jpg);\n"
"}\n"
""));
        change = new QPushButton(ChangeTheme);
        change->setObjectName(QStringLiteral("change"));
        change->setGeometry(QRect(440, 690, 91, 31));
        change->setStyleSheet(QStringLiteral(""));
        cancel = new QPushButton(ChangeTheme);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(550, 690, 91, 31));
        cancel->setStyleSheet(QStringLiteral(""));
        frame = new QFrame(ChangeTheme);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 60, 1001, 591));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background-color:rgba(255,255,255,0.2);\n"
"border-radius:5px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        theme4 = new QRadioButton(frame);
        theme4->setObjectName(QStringLiteral("theme4"));
        theme4->setGeometry(QRect(360, 40, 281, 521));
        theme2 = new QRadioButton(frame);
        theme2->setObjectName(QStringLiteral("theme2"));
        theme2->setGeometry(QRect(670, 40, 281, 521));
        theme3 = new QRadioButton(frame);
        theme3->setObjectName(QStringLiteral("theme3"));
        theme3->setGeometry(QRect(50, 40, 281, 521));
        theme3->setStyleSheet(QStringLiteral("background-color:transparent;"));

        retranslateUi(ChangeTheme);

        QMetaObject::connectSlotsByName(ChangeTheme);
    } // setupUi

    void retranslateUi(QDialog *ChangeTheme)
    {
        ChangeTheme->setWindowTitle(QApplication::translate("ChangeTheme", "Dialog", Q_NULLPTR));
        change->setText(QApplication::translate("ChangeTheme", "CHANGE", Q_NULLPTR));
        cancel->setText(QApplication::translate("ChangeTheme", "CANCEL", Q_NULLPTR));
        theme4->setText(QString());
        theme2->setText(QString());
        theme3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangeTheme: public Ui_ChangeTheme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETHEME_H
