#ifndef REQUESTBOOK_H
#define REQUESTBOOK_H

#include <QDialog>

namespace Ui {
class RequestBook;
}

class RequestBook : public QDialog
{
    Q_OBJECT

public:
    explicit RequestBook(QWidget *parent = 0);
    ~RequestBook();

private:
    Ui::RequestBook *ui;
};

#endif // REQUESTBOOK_H
