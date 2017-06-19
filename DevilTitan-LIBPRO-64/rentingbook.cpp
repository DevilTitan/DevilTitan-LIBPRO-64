#include "LIBPRO.h"
#include "ui_rentingbook.h"
#include <QDebug>
RentingBook::RentingBook(QWidget *parent,User* curUser) :
    QDialog(parent),
    ui(new Ui::RentingBook)
{
    ui->setupUi(this);
    this->curUser = new User(*curUser);


    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    display();
}

RentingBook::~RentingBook()
{
    delete ui;
}

void RentingBook::display()
{
    QString username = curUser->getUsername();
    QSqlQuery query(QSqlDatabase::database("libpro_user"));
    query.prepare("SELECT * FROM renting_history where username = '" + username +"' and is_return = 0");
    if(!query.exec()) qDebug() << "here";

    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    ui->tableWidget->setAlternatingRowColors(true);

   int row = 0;
   QTableWidgetItem *tmpItem;

   while (query.next())
   {
        int col = 0;
        tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));  //tên sách
        tmpItem->setForeground(QColor::fromRgb(252, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(2).toString())); // số lượng
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(4).toString()));  // ngày mượn
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);


        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(5).toString()));  // hạn trả
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);




        ui->tableWidget->item(row,1)->setTextAlignment(Qt::AlignLeft);
        ui->tableWidget->item(row,0)->setTextAlignment(Qt::AlignLeft);
        ui->tableWidget->item(row,2)->setTextAlignment(Qt::AlignHCenter);
        ui->tableWidget->item(row,3)->setTextAlignment(Qt::AlignHCenter);


       row++;
  }
   ui->tableWidget->setFrameStyle(QFrame::NoFrame);
   ui->tableWidget->setShowGrid(false);
   ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
   ui->tableWidget->verticalHeader()->hide();
   ui->tableWidget->setColumnWidth(0,400);
   ui->tableWidget->setColumnWidth(1,50);
   ui->tableWidget->setColumnWidth(2,200);
   ui->tableWidget->setColumnWidth(3,200);
   ui->tableWidget->resizeRowsToContents();
   ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->tableWidget->horizontalHeader()->hide();
   ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);


}
