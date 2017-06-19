#include "ui_sendNotification.h"
#include "LIBPRO.h"


sendNotification::sendNotification(QWidget *parent) :QDialog(parent), ui(new Ui::sendNotification)
{
    ui->setupUi(this);
}

sendNotification::~sendNotification()
{
    delete ui;
    delete qry;
}

void sendNotification::on_cancelButton_clicked(){
    this->close();
}

bool sendNotification::on_sendButton_clicked()
{
    //colecting receiver
    if(ui->readerCB->isChecked())
        R[0] = 1;
    else
        R[0] = 0;
    if(ui->librarianCB->isChecked())
        R[1] = 1;
    else
        R[1] = 0;
    if(ui->dataProcessorCB->isChecked())
        R[2] = 1;
    else
        R[2] = 0;
    if(ui->administratorCB->isChecked())
        R[3] = 1;
    else
        R[3] = 0;
    QString receiver = ui->sendLE->text();
    if(receiver == "" & R[0] == 0 && R[1] == 0 && R[2] == 0 && R[3] == 0){
        QMessageBox mess;
        mess.critical(0,"Error finding receiver","Please specify at least one receiver!");
        return 0;
    }
    //collecting receivers from line edit
    QVector<QString> list;
    QString temp = "";
    for(int i = 0; i < receiver.size(); i++){
        if(receiver[i] != ' ')
            temp += receiver[i];
        if(temp != "" && (receiver[i] == ' ' || i == receiver.size() - 1)){
            list.push_back(temp);
            temp = "";
        }
    }
    //check receiver's existance
    QVector<QString> notExist;
    for(int i = 0; i < list.size(); i++){
        QString code = "SELECT * FROM user_account where account_name = '" + list[i] + "'";
        qry->prepare(code);
        qry->exec();
        if(qry->size() == 0){
            notExist.push_back(list[i]);
            list[i] = "";
        }
    }
    //check message's existance
    QString message = ui->messageTE->toPlainText();
    if(message == ""){
        QMessageBox mess;
        mess.critical(0,"Error sending message","There is nothing to send. Please type your message!");
        return 0;
    }
    //Check for duplicate username at line edit
    bool dup = 0;
    for(int i = 0; i < list.size(); i++)
        for(int n = 0 ; n < list.size(); n++){
            if(i != n)
                if(list[i] == list[n]){
                    list[i] = "";
                    dup = 1;
                }
        }
    //message for librarian
    if(R[0] == 1){
        roleMessage(message, "reader", list);
    }
    //message for reader
    if(R[1] == 1){
        roleMessage(message, "librarian", list);
    }
    //message for Data Processor
    if(R[2] == 1){
        roleMessage(message, "dataProcessing", list);
    }
    //message for administrator
    if(R[3] == 1){
        roleMessage(message, "administrator", list);
    }
    //message for individuals
    for(auto it = list.begin(); it != list.end(); it++){
        if(*it != ""){
            QSqlQuery nqry(QSqlDatabase::database("libpro_user"));
            int ID = 0;
            nqry.prepare("SELECT * FROM `notification` where username = '" + *it + "'");
            nqry.exec();
            while(nqry.next()){
                if(ID < nqry.value(3).toInt())
                    ID = nqry.value(3).toInt();
            }
            nqry.prepare("INSERT INTO `notification`(`username`, `notification`, `noti_ID`) VALUES('"
                          + *it + "','" + message + "'," + QString::number(ID + 1) + ")");
            nqry.exec();
         }
    }
    if(notExist.size() != 0 || dup == 1){
        if(notExist.size() != 0){
            QString warning = "Cannot send message for some users. ";
            for(int i = 0 ; i < notExist.size(); i++){
                warning += notExist[i];
                if(i != notExist.size() - 1)
                    warning += ", ";
            }
            warning += " do(es) not exist";\
            QMessageBox mess;
            mess.warning(0,"Warning",warning);
        }
        if (dup == 1){
            QMessageBox mess;
            mess.warning(0,"Warning","Duplicated receiver, only send message for one name!");
        }
    }
    QMessageBox mess;
    mess.setText("Your message was sent successfully");
    mess.exec();
}


void sendNotification::roleMessage(QString message, QString role, QVector<QString> &list){
    QSqlQuery nqry(QSqlDatabase::database("libpro_user"));
    qry->prepare("SELECT * FROM user_account WHERE " + role + " = 1");
    qry->exec();
    while(qry->next()){
        QString user = qry->value(1).toString();
        int ID = 0;
        bool repeatMessRole = 0;
        nqry.prepare("SELECT * FROM `notification` where username = '" + user + "'");
        nqry.exec();
        while(nqry.next()){
            if(ID < nqry.value(3).toInt())
                ID = nqry.value(3).toInt();
            if(nqry.value(0).toString() == user && nqry.value(2).toString() == message)
                repeatMessRole = 1;
        }
        nqry.prepare("INSERT INTO `notification`(`username`, `notification`, `noti_ID`) VALUES('"
                      + user + "','" + message + "'," + QString::number(ID + 1) + ")");
        QString test = "INSERT INTO `notification`(`username`, `notification`, `noti_ID`) VALUES('"
                + user + "','" + message + "'," + QString::number(ID + 1) + ")";
        if(repeatMessRole == 0)
            nqry.exec();
        //Avoid repeating sending message
        for(int i = 0 ; i < list.size(); i++){
            if(list[i] == user)
                list[i] = "";
        }
    }
}

