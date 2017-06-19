#include "LIBPRO.h"
#include "ui_notification.h"
#include <QDebug>
#include <QSqlError>
#include <QPixmap>


Notification::Notification(QWidget *parent,User*curUser) :
    QDialog(parent),
    ui(new Ui::Notification)
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



Notification::~Notification()
{
    delete ui;
    delete curUser;


}

void Notification::display()
{
    QString username = curUser->getUsername();
    QSqlQuery query(QSqlDatabase::database("libpro_user"));
    query.prepare("SELECT * FROM notification where username = 'All' or username = '" + username +"' order by date DESC");
    query.exec();

    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setHorizontalHeaderLabels(QString("Time;Notification").split(";"));

   int row = 0;
   QTableWidgetItem *tmpItem;

   while (query.next())
   {
        int col = 0;
        tmpItem= new QTableWidgetItem(tr("%1").arg(query.value(1).toString()));
        tmpItem->setForeground(QColor::fromRgb(252, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(2).toString()));
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);
        ui->tableWidget->setAlternatingRowColors(true);

        ui->tableWidget->setItem(row, col++, tmpItem);

        ui->tableWidget->item(row,1)->setTextAlignment(Qt::AlignLeft);
        ui->tableWidget->item(row,0)->setTextAlignment(Qt::AlignLeft);


       row++;
  }
   ui->tableWidget->setFrameStyle(QFrame::NoFrame);
   ui->tableWidget->setShowGrid(false);
   ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
   ui->tableWidget->verticalHeader()->hide();
   ui->tableWidget->setColumnWidth(0,250);
   ui->tableWidget->setColumnWidth(1,510);
   ui->tableWidget->resizeRowsToContents();
   ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->tableWidget->horizontalHeader()->hide();
   ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

