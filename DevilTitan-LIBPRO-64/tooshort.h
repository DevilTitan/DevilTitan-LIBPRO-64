#ifndef TOOSHORT_H
#define TOOSHORT_H

#include <QDialog>

namespace Ui {
class tooShort;
}

class tooShort : public QDialog
{
    Q_OBJECT

public:
    explicit tooShort(QWidget *parent = 0);
    ~tooShort();

private:
    Ui::tooShort *ui;
};

#endif // TOOSHORT_H
