#ifndef AFTERSENDINGREQUEST_H
#define AFTERSENDINGREQUEST_H

#include <QDialog>

namespace Ui {
class afterSendingRequest;
}

class afterSendingRequest : public QDialog
{
    Q_OBJECT

public:
    explicit afterSendingRequest(QWidget *parent = 0);
    ~afterSendingRequest();

private:
    Ui::afterSendingRequest *ui;
};

#endif // AFTERSENDINGREQUEST_H
