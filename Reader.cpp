
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
#include "borrowbook.h"
#include <QTableView>
#include <QStandardItemModel>
#include <QSet>
#include <QGraphicsEffect>
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

    QPixmap bkgnd(":/appscreen/Resources/appscreen/2.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    
    displaybook();
    this->curUser = new User(*curUser);


    ui.Usernamelbl->setText(this->curUser->getUsername());
    ui.Usernamelbl->setAlignment(Qt::AlignHCenter);
    ui.Usernamelbl->setAlignment(Qt::AlignCenter);

    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(7);
    effect->setColor(QColor("#EEEEEE"));
    effect->setOffset(2,1);
    ui.bookList->setGraphicsEffect(effect);
    QGraphicsDropShadowEffect* effect2 = new QGraphicsDropShadowEffect();
    effect2->setBlurRadius(7);
    effect2->setColor(QColor("#EEEEEE"));
    effect2->setOffset(2,1);
    ui.borrowBook->setGraphicsEffect(effect2);
    QGraphicsDropShadowEffect* effect3 = new QGraphicsDropShadowEffect();
    effect3->setBlurRadius(7);
    effect3->setColor(QColor("#cea49a"));
    effect3->setOffset(3,1);
    ui.searchBar->setGraphicsEffect(effect3);
}

Reader::~Reader()
{

    

      // reset lại database khi tắt cửa sổ 
    for (auto it = borrow.begin(); it!=borrow.end(); ++it) // reset value for database
    {

         int currentQuantity; // số lượng sách còn lại trong database 
         QSqlQuery *selectquantity = new QSqlQuery(QSqlDatabase::database("book_data"));
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


}

void Reader::on_bookList_clicked(const QModelIndex &index) // update label when double click on bookList
{

    

    const QAbstractItemModel * model = index.model();
    QString currentISBN =  model->data(model->index(index.row(),0), Qt::DisplayRole).toString();
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

        ui.bookName->setWordWrap(true);
        ui.author->setWordWrap(true);
        ui.description->setWordWrap(true);
        ui.bookName->setText(curbook.name);
        ui.author -> setText(curbook.author);
        ui.description->setText("the book was published in " + curbook.year + " by " + curbook.publisher );

        }
    }
}

void Reader::on_searchBar_textChanged(const QString &cur) // search bar
{
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("book_data")) ;
    qry->prepare("select * from book_info where book_name like '%" + search + "%' or "+"author like '%"+search+"%'");
    qry->exec();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.bookList->setModel(modal);
    ui.bookList->hideColumn(0);
    ui.bookList->hideColumn(4);
    ui.bookList->hideColumn(3);


    ui.bookList->setColumnWidth(1,380);
    ui.bookList->setColumnWidth(2,165);
    ui.bookList->setColumnWidth(5,75);
    ui.bookList->setColumnWidth(6,50);

    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Author"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    modal->setHeaderData(6, Qt::Horizontal, QObject::tr("Rate"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Note"));

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

        this->displaybook();



        if (borrow.count(curbook.name) > 0) ++borrow[curbook.name];
        else borrow[curbook.name] = 1;

        if (borrow.size())
            ui.size->setStyleSheet("background-color: #c14934; border: 0px; border-radius: 6px; color: white; font-size: 12px;");

        ui.size->setText(" " + QString::number(borrow.size()));
        auto model = createModel(ui.borrowBook,this->borrow);
        ui.borrowBook->setModel(model);
        ui.borrowBook->setColumnWidth(0,250);
        ui.borrowBook->setColumnWidth(1,90);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantity"));

    }

}


void Reader::on_bookListbtn_clicked()
{
    borrowBook w (NULL,this->borrow,this,this->curUser);
    w.exec();


}


void Reader::on_removebtn_clicked()
{
   

    if(curbook.name=="") return;
    
    if(borrow[curbook.name]>0)
    {
        ++curbook.quantity;


        QSqlQuery query(QSqlDatabase::database("book_data"));
                query.prepare("UPDATE book_info SET quantity = " + QString::number(curbook.quantity)+ " WHERE isbn = '" +curbook.isbn+"'");
        query.exec();

        this->displaybook();



        --borrow[curbook.name];

        if (borrow.size()>0) ui.size->setStyleSheet("background-color: #c14934; border: 0px; border-radius: 0px; color: white; font-size: 12px;");
        ui.size->setText(" " + QString::number(borrow.size()));

        auto model = createModel(ui.borrowBook,this->borrow);
        ui.borrowBook->setModel(model);
        ui.borrowBook->setColumnWidth(0,250);
        ui.borrowBook->setColumnWidth(1,90);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantity"));


    }
    else
    {
        for (auto it = borrow.begin(); it != borrow.end(); ) 
        {
            if (it.key() == curbook.name) 
            {
                it = borrow.erase(it);
                displaybook();
            }
            else 
                ++it;
             
         
        }
    }
}

void Reader::displaybook() //displaybook at both booklist and borrowbook tableview
{



    // display all book in database
    QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("book_data")) ;
    qry->prepare("select * from book_info");
    qry->exec();

    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.bookList->setModel(modal);
    ui.bookList->hideColumn(0);
    ui.bookList->hideColumn(4);
    ui.bookList->hideColumn(3);

    ui.bookList->resizeColumnToContents(1);
    ui.bookList->setColumnWidth(1,380);
    ui.bookList->setColumnWidth(2,165);
    ui.bookList->setColumnWidth(5,75);
    ui.bookList->setColumnWidth(6,40);

    modal->setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
    modal->setHeaderData(2, Qt::Horizontal, QObject::tr("Author"));
    modal->setHeaderData(5, Qt::Horizontal, QObject::tr("Quantity"));
    modal->setHeaderData(6, Qt::Horizontal, QObject:: tr("Rate"));
    modal->setHeaderData(7, Qt::Horizontal, QObject::tr("Note"));


    // display those book in basket
    QStandardItemModel* model = createmodel(ui.borrowBook,borrow);
    ui.borrowBook->setModel(model);
    ui.borrowBook->setColumnWidth(0,250);
    ui.borrowBook->setColumnWidth(1,90);
    ui.borrowBook->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantity"));
}



