
#include <QPixmap>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QVariant>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <algorithm>
#include <string>
#include <QtAlgorithms>
#include "book.h"
#include <algorithm>
#include <QStandardItemModel>
#include <QSqlError>

#include "LIBPRO.h"

void format(QString& time)
{
    time[10]=' ';
}

QStandardItemModel* createmodel(QObject* parent,QMap<QString,int> borrow)
{
    const int numRows = borrow.size();
    const int numColumns = 2;
    auto it = borrow.begin();

    QStandardItemModel* model = new QStandardItemModel(numRows, numColumns);
    for (int row = 0; row < numRows; ++row)
    {

            QString book = it.key();
            QStandardItem* bookitm = new QStandardItem(book);
            model->setItem(row, 0 , bookitm);

            QString number = QString::number(it.value());
            QStandardItem* numberitm = new QStandardItem(number);
            model->setItem(row, 1 , numberitm);

            ++it;

     }

    return model;
}

QStandardItemModel* createModel(QObject* parent,QMap<QString,int> borrow)
{
    const int numRows = borrow.size();
    const int numColumns = 2;
    auto it = borrow.begin();

    QStandardItemModel* model = new QStandardItemModel(numRows, numColumns);
    for (int row = 0; row < numRows; ++row)
    {

            QString book = it.key();
            QStandardItem* bookitm = new QStandardItem(book);
            model->setItem(row, 0 , bookitm);

            QString number = QString::number(it.value());
            QStandardItem* numberitm = new QStandardItem(number);
            model->setItem(row, 1 , numberitm);

            ++it;

     }

    return model;
}



Reader::Reader(QWidget *parent,User* curUser)
    : QWidget(parent)
{
    ui.setupUi(this);

    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    
    displaybook();

    this->curUser = new User(*curUser);


    ui.Usernamelbl->setText(this->curUser->getUsername());
    ui.Usernamelbl->setAlignment(Qt::AlignHCenter);

    ui.notify->setAlignment(Qt::AlignHCenter);
    ui.size->setAlignment(Qt::AlignHCenter);

    displayNotify();



}

Reader::~Reader()
{

    

      // reset lại database khi tắt cửa sổ 
    QSqlQuery *selectquantity = new QSqlQuery(QSqlDatabase::database("book_data"));
    for (auto it = borrow.begin(); it!=borrow.end(); ++it) // reset value for database
    {

         int currentQuantity; // số lượng sách còn lại trong database 

         selectquantity->prepare("select * from book_info where book_name = '" + it.key()+"'");


         if(selectquantity->exec())
         {
             while(selectquantity->next())
             {

                 currentQuantity = selectquantity->value(5).toInt();

             }
         }

       
         int x = currentQuantity + it.value();
         QSqlQuery query(QSqlDatabase::database("book_data"));
         query.prepare("UPDATE book_info SET quantity = " + QString::number(x) + " WHERE book_name = '" +it.key()+"'");
         query.exec();


    }

    delete curUser;
    delete selectquantity;



}


void Reader::on_searchBar_textChanged(const QString &cur) // search bar
{
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }


    QString username = curUser->getUsername();
    QSqlQuery query(QSqlDatabase::database("book_data"));
    query.prepare("select * from book_info where book_name like '%" + search + "%' or "+"author like '%"+search+"%'");
    if(!query.exec()) qDebug() << "here";



    ui.bookList->setColumnCount(6);
    ui.bookList->setRowCount(query.size());
    ui.bookList->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui.bookList->setAlternatingRowColors(true);

   int row = 0;
   QTableWidgetItem *tmpItem;

   while (query.next())
   {
        int col = 0;
        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(0).toString())); // id trong wait table

        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(1).toString())); // id trong wait table
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(2).toString())); // tên sách
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);


        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(5).toString()));  // số lượng
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
       tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);


        if (query.value(6)<2)
            tmpItem = new QTableWidgetItem("♥");
        else if (query.value(6) < 3)
            tmpItem = new QTableWidgetItem("♥♥");
        else if (query.value(6) < 4)
            tmpItem = new QTableWidgetItem("♥♥♥");
        else if (query.value(6) < 5)
            tmpItem = new QTableWidgetItem("♥♥♥♥");
        else
            tmpItem = new QTableWidgetItem("♥♥♥♥♥");
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

       ui.bookList->setItem(row, col++, tmpItem);




        ui.bookList->item(row,1)->setTextAlignment(Qt::AlignLeft);

        ui.bookList->item(row,2)->setTextAlignment(Qt::AlignLeft);
        ui.bookList->item(row,4)->setTextAlignment(Qt::AlignHCenter);
        ui.bookList->item(row,3)->setTextAlignment(Qt::AlignHCenter);


       row++;
  }
  // ui->tableWidget->setFrameStyle(QFrame::NoFrame);
   ui.bookList->setShowGrid(false);
   ui.bookList->setSelectionBehavior(QAbstractItemView::SelectRows);
   ui.bookList->verticalHeader()->hide();
   ui.bookList->setColumnWidth(1,350);
   ui.bookList->setColumnWidth(2,170);
   ui.bookList->setColumnWidth(3,80);
   ui.bookList->setColumnWidth(4,120);
   ui.bookList->resizeRowsToContents();
   ui.bookList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui.bookList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   ui.bookList->horizontalHeader()->hide();
   ui.bookList->setEditTriggers(QAbstractItemView::NoEditTriggers);
   ui.bookList->hideColumn(0);



}

void Reader::on_addbtn_clicked() // add book
{


    if(curbook.name=="") return;


    if(curbook.quantity)
    {
        --curbook.quantity;

        QSqlQuery query(QSqlDatabase::database("book_data"));
        query.prepare("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();





       if (borrow.count(curbook.name) > 0) ++borrow[curbook.name];
        else borrow[curbook.name] = 1;

        if (borrow.size())
        {
            ui.size->setStyleSheet("background-color: #c14934; border: 0px; border-radius: 6px; color: white; font-size: 12px;");

            ui.size->setText(" " + QString::number(borrow.size()));
            ui.size->setVisible(true);

        }
        this->displaybook();

    }




}


void Reader::on_bookListbtn_clicked()
{
    borrowBook* w = new borrowBook (this,this->borrow,this,this->curUser);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->exec();


}


void Reader::on_removebtn_clicked()
{
   

    if(curbook.name=="") return;
    if(!borrow.contains(curbook.name)) return;


    
    if(borrow[curbook.name]>1)
    {
        ++curbook.quantity;


        QSqlQuery query(QSqlDatabase::database("book_data"));
        query.prepare("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        --borrow[curbook.name];

         this->displaybook();

    }

    else if(borrow[curbook.name]==1)
    {
        ++curbook.quantity;


        QSqlQuery query(QSqlDatabase::database("book_data"));
        query.prepare("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();





        for (auto it = borrow.begin(); it != borrow.end(); ) 
        {
            if (it.key() == curbook.name) 
            {
                it = borrow.erase(it);
                displaybook();
                break;
            }
            else 
                ++it;
             
         
        }

        this->displaybook();
    }
    else return;


    if(borrow.empty())
    {
        ui.size->setVisible(false);
        return;
    }
    else
    {
        ui.size->setVisible(true);
        ui.size->setText(" " + QString::number(borrow.size()));
        return;
    }


}

void Reader::displaybook() //displaybook at both booklist and borrowbook tableview
{

    QSqlQuery query(QSqlDatabase::database("book_data"));

    query.prepare("SELECT * FROM book_info ");
    if(!query.exec()) qDebug() << query.lastError();


    ui.bookList->setColumnCount(6);
    ui.bookList->setRowCount(query.size());
    ui.bookList->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui.bookList->setAlternatingRowColors(true);

   int row = 0;
   QTableWidgetItem *tmpItem;

   while (query.next())
   {
        int col = 0;
        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(0).toString())); // id trong wait table

        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(1).toString())); // id trong wait table
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(2).toString())); // tên sách
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);


        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(5).toString()));  // số lượng
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
       tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);

        if (query.value(6)<2)
            tmpItem = new QTableWidgetItem("♥");
        else if (query.value(6) < 3)
            tmpItem = new QTableWidgetItem("♥♥");
        else if (query.value(6) < 4)
            tmpItem = new QTableWidgetItem("♥♥♥");
        else if (query.value(6) < 5)
            tmpItem = new QTableWidgetItem("♥♥♥♥");
        else
            tmpItem = new QTableWidgetItem("♥♥♥♥♥");
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookList->setItem(row, col++, tmpItem);




        ui.bookList->item(row,1)->setTextAlignment(Qt::AlignLeft);

        ui.bookList->item(row,2)->setTextAlignment(Qt::AlignLeft);
        ui.bookList->item(row,4)->setTextAlignment(Qt::AlignLeft);
        ui.bookList->item(row,3)->setTextAlignment(Qt::AlignHCenter);


       row++;
  }
  // ui->tableWidget->setFrameStyle(QFrame::NoFrame);
       ui.bookList->setShowGrid(false);
       ui.bookList->setSelectionBehavior(QAbstractItemView::SelectRows);
       ui.bookList->verticalHeader()->hide();
       ui.bookList->setColumnWidth(1,350);
       ui.bookList->setColumnWidth(2,170);
       ui.bookList->setColumnWidth(3,80);
       ui.bookList->setColumnWidth(4,120);
       ui.bookList->resizeRowsToContents();
       ui.bookList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
       ui.bookList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
       ui.bookList->horizontalHeader()->hide();
       ui.bookList->setEditTriggers(QAbstractItemView::NoEditTriggers);
       ui.bookList->hideColumn(0);
       ui.bookList->setFocusPolicy(Qt::NoFocus) ;

   // tạo borrow book table

       ui.borrowBook->setColumnCount(2);
       ui.borrowBook->setRowCount(borrow.size());
       ui.borrowBook->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
       ui.borrowBook->setAlternatingRowColors(true);

       ui.borrowBook->setShowGrid(false);
       ui.borrowBook->setSelectionBehavior(QAbstractItemView::SelectRows);
       ui.borrowBook->verticalHeader()->hide();
       ui.borrowBook->setColumnWidth(0,300);
       ui.borrowBook->setColumnWidth(1,70);

       ui.borrowBook->resizeRowsToContents();
       ui.borrowBook->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
       ui.borrowBook->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
       ui.borrowBook->horizontalHeader()->hide();
       ui.borrowBook->setEditTriggers(QAbstractItemView::NoEditTriggers);

      row = 0;
      QTableWidgetItem *tmp;
      if (borrow.empty()) return;
      auto it = borrow.begin();

      while (it!=borrow.end())
      {
           if (it.value() == 0) continue;
           int col = 0;
           tmp = new QTableWidgetItem(it.key()); // id trong wait table

           tmp->setForeground(QColor::fromRgb(255, 253, 255));
           tmp->setFlags(Qt::NoItemFlags);

           ui.borrowBook->setItem(row, col++, tmp);

           tmp = new QTableWidgetItem(QString::number(it.value())); // id trong wait table
           tmp->setForeground(QColor::fromRgb(255, 253, 255));
           tmp->setFlags(Qt::NoItemFlags);

           ui.borrowBook->setItem(row, col++, tmp);


           ui.borrowBook->item(row,0)->setTextAlignment(Qt::AlignLeft);

           ui.borrowBook->item(row,1)->setTextAlignment(Qt::AlignHCenter);


          row++;
          ++it;
     }
}


void Reader::displayNotify()
{

        QString lastCheck;
        int count = 0;
        QSqlQuery getTime (QSqlDatabase::database("libpro_user"));
        getTime.prepare("select * from user_account where account_name = '"+curUser->getUsername()+"'");
        if(!getTime.exec()) qDebug() << "Can't get latest notification check time ... " << getTime.lastError();
        while(getTime.next())
        {
          lastCheck = getTime.value(8).toString();
        }




        getTime.prepare("select * from notification where (username = '"+curUser->getUsername()+"' or username = 'All') and (date > '"+lastCheck+"')");
        if(!getTime.exec()) qDebug() << getTime.lastError();
        while(getTime.next())
        {
            ++count;
        }

        if (count!= 0)
        {
            ui.notify->setStyleSheet("background-color: #c14934; border: 0px; border-radius: 6px; color: white; font-size: 12px;");

            ui.notify->setText(" " + QString::number(count));
        }

        else ui.notify->hide();




}

void Reader::on_publicChat_5_clicked()
{
    ChangePassword* w = new ChangePassword(0,curUser);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->exec();
}


QStandardItemModel* createmodel(QObject* parent,QMap<QString,int> borrow) ;

 void Reader::on_requestbtn_clicked()
 {

     RequestBook a(0,this->curUser);
     a.exec();
     a.setModal(true);
     a.setAttribute(Qt::WA_DeleteOnClose);
 }


 void Reader::on_borrowBook_clicked(const QModelIndex &index)
 {


     const QAbstractItemModel * model = index.model();
     QString currentName =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
     QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("book_data"));
     qry->prepare("select * from book_info where book_name ='"+ currentName + "'");


     if(qry->exec())
     {
         while(qry->next())
         {
         curbook.isbn = qry->value(0).toString();
         curbook.name = qry->value(1).toString();
         curbook.author = qry->value(2).toString();
         curbook.year =  qry->value(3).toString();
         curbook.publisher = qry->value(4).toString();
         curbook.quantity = qry->value(5).toInt();

         ui.bookName->setWordWrap(true);
         ui.author->setWordWrap(true);
         ui.description->setWordWrap(true);
         ui.bookName->setText(curbook.publisher);
         ui.author -> setText(curbook.year);
         ui.description->setText("the book was published in " + curbook.year + " by " + curbook.publisher );

         }
     }

     delete qry;

 }

 void Reader::on_logout_clicked()
 {
     this->close();
     LoginForm *w = new LoginForm;
     w->setAttribute(Qt::WA_DeleteOnClose);
     w->show();


 }

 void Reader::on_rolebtn_clicked()
 {
     SwitchRole *w = new SwitchRole (this,this->curUser);
     w->setAttribute(Qt::WA_DeleteOnClose);
     w->setModal(true);
     w->exec();



 }

 void Reader::on_accountbtn_clicked()
 {
     QSqlQuery *set_time = new QSqlQuery(QSqlDatabase::database("libpro_user"));
     QDateTime date = QDateTime::currentDateTime();
     QString cur_time = date.toString("yyyy-MM-dd HH:mm:ss");
     set_time->prepare("update user_account set last_seen_notify ='" + cur_time +"' where account_name = '" + curUser->getUsername() +"'");
     set_time->exec();

     displayNotify();

     Notification *w= new Notification(this,curUser);
     w->setAttribute(Qt::WA_DeleteOnClose);
     w->exec();

 }

 void Reader::on_publicChat_3_clicked()
 {
     RentingBook *w = new RentingBook(this,curUser);
     w->setAttribute(Qt::WA_DeleteOnClose);
     w->exec();


 }

 void Reader::on_publicChat_clicked()
 {
     QueueBook *w= new QueueBook (this,curUser);
     w->setAttribute(Qt::WA_DeleteOnClose);
     w->exec();


 }

 void Reader::on_bookList_clicked(const QModelIndex &index)
 {

     QString currentISBN =  ui.bookList->item(index.row(), 0)->text();
     QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("book_data"));
     qry->prepare("select * from book_info where isbn ='"+ currentISBN + "'");


     if(qry->exec())
     {
         while(qry->next())
         {
         curbook.isbn = qry->value(0).toString();
         curbook.name = qry->value(1).toString();
         curbook.author = qry->value(2).toString();
         curbook.year =  qry->value(3).toString();
         curbook.publisher = qry->value(4).toString();
         curbook.quantity = qry->value(5).toInt();
         QString description = qry->value(8).toString();
         double rate = qry->value(6).toDouble();

         ui.bookName->setWordWrap(true);
         ui.author->setWordWrap(true);
         ui.description->setWordWrap(true);
         ui.bookName->setText(curbook.publisher);
         ui.author -> setText(curbook.year);
         ui.description->setText(description);
         ui.rating->setText(QString::number(rate,'f',2));

         }
     }
     delete qry;
 }


 void Reader::on_logout_2_clicked()
 {
     /*curTheme = ":/appscreen/Resources/appscreen/flat1 - Copy.png";
     QPixmap bkgnd(curTheme);
     bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
     QPalette palette;
     palette.setBrush(QPalette::Background, bkgnd);
     this->setPalette(palette);*/
     ChangeTheme*w = new ChangeTheme(this,curUser);
     w->setAttribute(Qt::WA_DeleteOnClose);
     w->exec();
 }


 void Reader::on_publicChat_4_clicked()
 {
     AccountStatistic *w = new AccountStatistic (0,curUser);
     w->setAttribute(Qt::WA_DeleteOnClose);
     w->setModal(true);
     w->exec();


 }

 void Reader::on_rate_clicked()
 {
     Rating *w = new Rating (0,curUser);
     w->setAttribute(Qt::WA_DeleteOnClose);
     w->setModal(true);
     w->exec();


 }
