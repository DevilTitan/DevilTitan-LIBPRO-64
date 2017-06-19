#include "LIBPRO.h"
#include "ui_rating.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>


Rating::Rating(QWidget *parent,User*curUser) :
    QDialog(parent),
    ui(new Ui::Rating)
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

Rating::~Rating()
{
    delete ui;
    delete curUser;
}


void Rating::display()
{
    QString username = curUser->getUsername();
    QSqlQuery query(QSqlDatabase::database("libpro_user"));
    query.prepare("SELECT * FROM renting_history where username = '" + username +"' and is_return = 1 group by book_name");
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





        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(8).toString()));  // rate
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);


        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(0).toString()));  // ID
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);



        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(6).toString()));  // return date
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui->tableWidget->setItem(row, col++, tmpItem);







        ui->tableWidget->item(row,1)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->item(row,0)->setTextAlignment(Qt::AlignLeft);
        ui->tableWidget->item(row,2)->setTextAlignment(Qt::AlignCenter);
        ui->tableWidget->item(row,3)->setTextAlignment(Qt::AlignCenter);






       row++;
  }
   ui->tableWidget->setFrameStyle(QFrame::NoFrame);
   ui->tableWidget->setShowGrid(false);
   ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
   ui->tableWidget->verticalHeader()->hide();
   ui->tableWidget->setColumnWidth(0,500);
   ui->tableWidget->setColumnWidth(1,50);
   ui->tableWidget->setColumnWidth(3,150);
   ui->tableWidget->hideColumn(2);

   ui->tableWidget->resizeRowsToContents();
   ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui->tableWidget->horizontalHeader()->hide();
   ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

}


void Rating::setStar(int n)
{

    QPixmap yellowStar(":/icon/Resources/icon/star.png");
    QIcon yellowicon(yellowStar);
    QPixmap blackStar(":/icon/Resources/icon/favourites-filled-star-symbol.png");
    QIcon blackicon(blackStar);
    if (n==0)
    {
        ui->star1->setIcon(blackicon);
        ui->star2->setIcon(blackicon);
        ui->star3->setIcon(blackicon);
        ui->star4->setIcon(blackicon);
        ui->star5->setIcon(blackicon);
    }

    if (n == 1)
    {
        ui->star1->setIcon(yellowicon);      
        ui->star2->setIcon(blackicon);
        ui->star3->setIcon(blackicon);
        ui->star4->setIcon(blackicon);
        ui->star5->setIcon(blackicon);


    }

    if (n == 2)
    {
        ui->star1->setIcon(yellowicon);
        ui->star2->setIcon(yellowicon);
        ui->star3->setIcon(blackicon);
        ui->star4->setIcon(blackicon);
        ui->star5->setIcon(blackicon);

    }
    if(n==3)
    {

        ui->star1->setIcon(yellowicon);
        ui->star2->setIcon(yellowicon);
        ui->star3->setIcon(yellowicon);
        ui->star4->setIcon(blackicon);
        ui->star5->setIcon(blackicon);
    }
    if(n==4)
    {
        ui->star1->setIcon(yellowicon);
        ui->star2->setIcon(yellowicon);
        ui->star3->setIcon(yellowicon);
        ui->star4->setIcon(yellowicon);
        ui->star5->setIcon(blackicon);

    }

    if (n==5)
    {
        ui->star1->setIcon(yellowicon);
        ui->star2->setIcon(yellowicon);
        ui->star3->setIcon(yellowicon);
        ui->star4->setIcon(yellowicon);
        ui->star5->setIcon(yellowicon);
    }
}

void Rating::on_star1_clicked()
{
    this->setStar(1);
    setRate(1);
}

void Rating::on_star2_clicked()
{
    this->setStar(2);
    setRate(2);
}

void Rating::on_star3_clicked()
{
    this->setStar(3);
    setRate(3);
}

void Rating::on_star4_clicked()
{
    this->setStar(4);
    setRate(4);
}

void Rating::on_star5_clicked()
{
    this->setStar(5);
    setRate(5);

}


void Rating::on_tableWidget_clicked(const QModelIndex &index)
{
    QString str =  ui->tableWidget->item(index.row(), 0)->text();

    if(*(str.end()-1)=='\n') str.chop(1);
    if(*(str.end()-1)=='\r') str.chop(1);
    curbook = str;
    last_rate = ui->tableWidget->item(index.row(),1)->text().toInt();

    curID = ui->tableWidget->item(index.row(),2)->text();

    setStar(last_rate);

}


void Rating::setRate(int n)
{
    double setRate = n;
    if (curbook == "") return;


    QSqlQuery qry (QSqlDatabase::database("book_data"));
    qry.prepare("select * from book_info where book_name like '%"+curbook+"%'");
    if(!qry.exec()) qDebug() << "here";

    double rate=0;
    int rate_times=0;

    while(qry.next())
    {
        rate = qry.value(6).toDouble();
        rate_times = qry.value(16).toInt();

    }
    qDebug() << "Rate : " << rate << " Rate times " << rate_times;
    qDebug() << last_rate;

    if (last_rate == 0)
    {
        double curRate = (rate*rate_times  + setRate )/(rate_times + 1);
        ++rate_times;

        qry.prepare("update book_info set rate= "+QString::number(curRate) +" , rated_times = "+QString::number(rate_times)+" where book_name like '%"+ curbook + "%'");
        if(!qry.exec())
        {
            qDebug() << qry.executedQuery();
            qDebug() << qry.lastError();
        }

        QSqlQuery rent (QSqlDatabase::database("libpro_user"));
        rent.prepare("Update renting_history set rated = "+QString::number(setRate)+" where rent_id = "+curID);
        if(!rent.exec())
        {
            qDebug() << rent.executedQuery();
            qDebug()<<rent.lastError();;
            qDebug() << "rent error";
        }

        last_rate = setRate;


    }
    else
    {
        double curRate = (rate*rate_times + setRate - last_rate)/rate_times;

        qry.prepare("update book_info set rate= "+QString::number(curRate) +" , rated_times = "+QString::number(rate_times)+" where book_name like '%"+ curbook + "%'");
        if(!qry.exec())
        {
            qDebug() << qry.executedQuery();
            qDebug() << qry.lastError();
        }
        qDebug() << qry.executedQuery();

        QSqlQuery rent (QSqlDatabase::database("libpro_user"));
        rent.prepare("Update renting_history set rated = "+QString::number(setRate)+" where rent_id = "+curID);
        if(!rent.exec())
        {
            qDebug() << rent.executedQuery();
            qDebug()<<rent.lastError();;
            qDebug() << "rent error";
        }
        last_rate = setRate;
    }
    display();
}


