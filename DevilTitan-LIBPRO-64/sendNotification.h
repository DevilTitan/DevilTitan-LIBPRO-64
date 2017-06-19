#ifndef SENDNOTIFICATION_H
#define SENDNOTIFICATION_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QVector>

namespace Ui {
class sendNotification;
}

class sendNotification : public QDialog
{
    Q_OBJECT

public:
    explicit sendNotification(QWidget *parent = 0);
    ~sendNotification();
    void roleMessage(QString message, QString role, QVector<QString> &list);

private slots:
    void on_cancelButton_clicked();

    bool on_sendButton_clicked();

private:
    Ui::sendNotification *ui;
    QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("libpro_user")) ;
    bool R[4] = {0,0,0,0};
};

#endif // SENDNOTIFICATION_H
