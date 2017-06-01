#ifndef BOOK_H
#define BOOK_H
#include <QString>

typedef struct
{

    QString isbn ;
    QString name ;
    QString author ;
    QString year ;
    QString publisher;
    int quantity;

} book;

#endif // BOOK_H
