#include "LIBPRO.h"
#include "ui_queuebook.h"
#include <QSqlError>
#include <QDebug>

QueueBook::QueueBook(QWidget *parent, User* curUser) :
    QDialog(parent),
    ui(new Ui::QueueBook)
{
    ui->setupUi(this);
    this->curUser = new User(*curUser);

    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    display();
   //setStyleSheet("QTableWidget::item:selected{background-color: palette(highlight); color: palette(highlightedText);};");
}

QueueBook::~QueueBook()
{
    delete ui;
    delete curUser;
}

void QueueBook::display()
{
    QString username = curUser->getUsername();
    QSqlQuery query(QSqlDatabase::database("libpro_user"));
    query.prepare("SELECT * FROM wait where username = '" + username +"'");
    if(!query.exec()) qDebug() << "here";

    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setRowCount(query.size());
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui->tableWidget->setAlternatingRowColors(true);

   int row = 0;
   QTableWidgetItem *tmpItem;

   while (query.next())
   {
        int col = 0;
        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(0).toString())); // id trong wait table
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(2).toString())); // tên sách
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));  // tác giả
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);


        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(4).toString()));  // số lượng
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
       tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(5).toString()));  // ngày chấp thuận
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);




        ui->tableWidget->item(row,1)->setTextAlignment(Qt::AlignLeft);
        ui->tableWidget->item(row,0)->setTextAlignment(Qt::AlignLeft);
        ui->tableWidget->item(row,2)->setTextAlignment(Qt::AlignLeft);
        ui->tableWidget->item(row,4)->setTextAlignment(Qt::AlignHCenter);
        ui->tableWidget->item(row,3)->setTextAlignment(Qt::AlignHCenter);


       row++;
  }
  // ui->tableWidget->setFrameStyle(QFrame::NoFrame);
   ui->tableWidget->setShowGrid(false);
   ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
   ui->tableWidget->verticalHeader()->hide();
   ui->tableWidget->setColumnWidth(1,380);
   ui->tableWidget->setColumnWidth(2,200);
   ui->tableWidget->setColumnWidth(3,80);
   ui->tableWidget->setColumnWidth(4,200);
   ui->tableWidget->resizeRowsToContents();
   ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->tableWidget->horizontalHeader()->hide();
   ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
   ui->tableWidget->hideColumn(0);

}

void QueueBook::on_tableWidget_clicked(const QModelIndex &index)
{
    QString str =  ui->tableWidget->item(index.row(), 0)->text();
    this->curWaitIndex = str.toInt();
    qDebug() << curWaitIndex;
}

void QueueBook::on_removebtn_clicked()
{


    if (curWaitIndex==-1) return;

    // lấy số lương và tên quyển sách đang định xóa:
    /// lấy số tên sách và số lượng đã được đặt chỗ
    QSqlQuery *return_book = new QSqlQuery(QSqlDatabase::database("libpro_user"));
    return_book->prepare("select * from wait where waiting_id = "+QString::number(curWaitIndex));

    int wait;
    QString book_name;
    QString username;
    if (return_book->exec())
    {
        while (return_book->next())
        {
            wait = return_book->value(4).toInt();
            book_name = return_book->value(2).toString();
            username= return_book->value(1).toString();

        }
    }

    /// trả lại database số sách đc đặt chỗ
    QSqlQuery * set_book_quantity = new QSqlQuery(QSqlDatabase::database("book_data"));
    set_book_quantity->prepare("select * from book_info where book_name ='"+book_name+"'");
    int available;
    if(set_book_quantity->exec())
    {
        while (set_book_quantity->next())
        {
            available = set_book_quantity->value(1).toInt();
        }
    }
    int sum = available+wait;
    QSqlQuery* set_book = new QSqlQuery(QSqlDatabase::database("book_data"));
    set_book->prepare("update book_info set quantity =" +QString::number(sum)+" where book_name ='" + book_name+"'");
    if(!set_book->exec()) qDebug()<< set_book->lastError();

    // xóa khỏi wait :
    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("delete  from wait where waiting_id = " + QString::number(curWaitIndex));
    qry->exec();
    curWaitIndex= -1;


    // xóa cấp phát động
    this->display();
    delete return_book;
    delete qry;
    delete set_book;
    delete set_book_quantity;
}
