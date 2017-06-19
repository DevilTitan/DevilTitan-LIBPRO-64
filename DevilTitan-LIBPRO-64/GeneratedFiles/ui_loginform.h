/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *greeting;
    QLabel *subgreeting;
    QLabel *label_5;
    QPushButton *login;
    QLabel *label_7;
    QFrame *frame_2;
    QLabel *label_8;
    QPushButton *signup;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *warning;
    QLabel *label_4;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_10;

    void setupUi(QDialog *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QStringLiteral("LoginForm"));
        LoginForm->resize(800, 749);
        LoginForm->setStyleSheet(QLatin1String("QLabel {font-family: Roboto;}\n"
"QLineEdit {font-family: Roboto;}\n"
"\n"
"background-color: white;\n"
""));
        frame = new QFrame(LoginForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 501, 741));
        frame->setStyleSheet(QLatin1String("#frame\n"
"{\n"
"background-color: white;\n"
"}\n"
"#login{\n"
"font-size: 20px;\n"
"font-family: Roboto; \n"
"background-color: rgb(46, 150, 223);\n"
"border: 0;\n"
"color: white;\n"
"border-radius: 3px;\n"
"}\n"
"#login:hover \n"
"{\n"
"background-color: rgb(0, 189, 155);\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 91, 91));
        label->setStyleSheet(QStringLiteral(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icon/Resources/icon/logo.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 140, 231, 31));
        label_2->setStyleSheet(QLatin1String("font: 25 12pt \"Roboto\";\n"
"font-style: italic;"));
        greeting = new QLabel(frame);
        greeting->setObjectName(QStringLiteral("greeting"));
        greeting->setGeometry(QRect(60, 210, 281, 41));
        greeting->setStyleSheet(QStringLiteral("font-size: 20px;"));
        subgreeting = new QLabel(frame);
        subgreeting->setObjectName(QStringLiteral("subgreeting"));
        subgreeting->setGeometry(QRect(60, 250, 421, 21));
        subgreeting->setStyleSheet(QLatin1String("font-size: 15px;\n"
"color: rgb(75, 75, 75);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 330, 71, 16));
        label_5->setStyleSheet(QLatin1String("background-color: white;\n"
"font-size: 16px;"));
        login = new QPushButton(frame);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(60, 520, 141, 51));
        login->setStyleSheet(QStringLiteral(""));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 630, 181, 21));
        label_7->setStyleSheet(QStringLiteral("font-size: 16px;"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 670, 501, 81));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(245, 244, 247)"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 30, 211, 20));
        label_8->setStyleSheet(QStringLiteral("font-size: 14px;"));
        signup = new QPushButton(frame_2);
        signup->setObjectName(QStringLiteral("signup"));
        signup->setGeometry(QRect(300, 20, 81, 41));
        signup->setStyleSheet(QLatin1String("#signup{\n"
"font-size: 12px;\n"
"font-family: Roboto; \n"
"background-color: rgb(50, 75, 92);\n"
"border: 0;\n"
"color: white;\n"
"border-radius: 3px;\n"
"}\n"
"#signup:hover \n"
"{\n"
"background-color: rgb(0, 189, 155);\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 350, 41, 41));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"border-radius: 2px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/Resources/icon/19073730_1922262664698614_862710217_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(27, 27));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 440, 41, 41));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(219, 219, 219);\n"
"border-radius: 2px;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/Resources/icon/padlock (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(27, 30));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 420, 101, 16));
        label_6->setStyleSheet(QLatin1String("background-color: white;\n"
"font-size: 16px;"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 350, 271, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(239, 239, 239);\n"
"border: 0;\n"
"text-indent: 10px;\n"
"border-radius: 2px;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"padding:5px;\n"
""));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 440, 271, 41));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: rgb(239, 239, 239);\n"
"border: 0;\n"
"text-indent: 10px;\n"
"border-radius: 2px;\n"
"font-family:Roboto;\n"
"font-size:16px;\n"
"padding:5px;\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        warning = new QLabel(frame);
        warning->setObjectName(QStringLiteral("warning"));
        warning->setGeometry(QRect(240, 530, 201, 31));
        warning->setStyleSheet(QLatin1String("font-size: 13px;\n"
"color: red;\n"
"border: 2px solid #c02f1d"));
        label->raise();
        label_2->raise();
        greeting->raise();
        subgreeting->raise();
        login->raise();
        label_7->raise();
        frame_2->raise();
        pushButton->raise();
        label_5->raise();
        pushButton_2->raise();
        label_6->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        warning->raise();
        label_4 = new QLabel(LoginForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(500, -10, 301, 761));
        label_4->setStyleSheet(QStringLiteral("border: 1px solid rgb(240, 240, 240);"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/appscreen/Resources/appscreen/library.jpg")));
        label_4->setScaledContents(false);
        label_3 = new QLabel(LoginForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(590, 110, 171, 81));
        label_3->setStyleSheet(QLatin1String("font: 25 36pt \"Roboto\";\n"
"color: #ebc944"));
        plainTextEdit = new QPlainTextEdit(LoginForm);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(590, 250, 171, 551));
        plainTextEdit->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 75 8pt \"iCiel Fester Bold\";\n"
"border: 0;\n"
"color: white;\n"
"font-size: 14px;\n"
"font-style:italic;"));
        label_10 = new QLabel(LoginForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(570, 180, 201, 20));
        label_10->setStyleSheet(QStringLiteral("border-top: 1px solid white;"));
        label_10->setScaledContents(true);

        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QDialog *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("LoginForm", "Library For Everyone...", Q_NULLPTR));
        greeting->setText(QApplication::translate("LoginForm", "Greetings...", Q_NULLPTR));
        subgreeting->setText(QApplication::translate("LoginForm", "Greetings...", Q_NULLPTR));
        label_5->setText(QApplication::translate("LoginForm", "Account:", Q_NULLPTR));
        login->setText(QApplication::translate("LoginForm", "LOG IN", Q_NULLPTR));
        label_7->setText(QApplication::translate("LoginForm", "\302\251  2017 DDKN Group", Q_NULLPTR));
        label_8->setText(QApplication::translate("LoginForm", "You don't have a LibPro account?", Q_NULLPTR));
        signup->setText(QApplication::translate("LoginForm", "Sign up", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_6->setText(QApplication::translate("LoginForm", "Password:", Q_NULLPTR));
        lineEdit->setText(QString());
        warning->setText(QApplication::translate("LoginForm", "Account or password is incorrect!", Q_NULLPTR));
        label_4->setText(QString());
        label_3->setText(QApplication::translate("LoginForm", "LibPro", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("LoginForm", "\"What is Lorem Ipsum?\n"
"Lorem Ipsum is simply dummy text of the printing and typesetting industry.\n"
" Lorem Ipsum has been the industry's standard dummy text ever since the\"", Q_NULLPTR));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
