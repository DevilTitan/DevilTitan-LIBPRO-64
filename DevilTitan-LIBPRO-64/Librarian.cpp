#include "LIBPRO.h"

#include <QPixmap>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QVariant>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <loginform.h>
#include <algorithm>
#include <string>
#include <QtAlgorithms>
#include <algorithm>
#include <QStandardItemModel>
#include <QTableView>
#include <QStandardItemModel>
#include <QSet>
#include <QDate>
#include <QDebug>
#include <QSqlError>
#include <QTimer>
#include <QDateTime>
#include <QChar>


Librarian::Librarian(QWidget *parent,User *curUser)
	: QWidget(parent)
{
	ui.setupUi(this);
    displayBook();

    count = new QTimer(this);
    count->setInterval(1000);
    connect(count, SIGNAL(timeout()), this, SLOT(updateTime()));
    count->start();

    if (now.currentTime().hour() >= 6 && now.currentTime().hour() <= 12)
        ui.greeting->setText("Good morning, " + curUser->getUsername() + "!");
    else if (now.currentTime().hour() <= 5)
        ui.greeting->setText("Good afternoon, " + curUser->getUsername() + "!");
    else if (now.currentTime().hour() <= 22)
        ui.greeting->setText("Good evening, " + curUser->getUsername() + "!");
    else
        ui.greeting->setText("Good night, " + curUser->getUsername() + "!");

    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    this->curUser = new User(*curUser);
    ui.Usernamelbl->setText(curUser->getUsername());
    ui.Usernamelbl->setAlignment(Qt::AlignCenter);
    this->displayBook();
    this->displayNotify();
}

void Librarian::displayBook()

{
      // hiển thị table trong tab request_book
      QSqlQuery *qry = new QSqlQuery(QSqlDatabase::database("libpro_user")) ;
      qry->prepare("select * from book_request");
      qry->exec();

      QSqlQueryModel * modal = new QSqlQueryModel;
      modal ->setQuery(*qry);

      ui.borrowTable->setModel(modal);

      ui.borrowTable->setColumnWidth(2,300);
      ui.borrowTable->setColumnWidth(5,150);

      ui.borrowTable->hideColumn(6);
      ui.borrowTable->verticalHeader()->hide();
      ui.borrowTable->horizontalHeader()->hide();
      ui.borrowTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      ui.borrowTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      ui.borrowTable->setSelectionBehavior(QAbstractItemView::SelectRows);
      ui.borrowTable->setColumnWidth(3,250);
      ui.borrowTable->setColumnWidth(1,60);


      // hiển thị table trong tab wait
      QSqlQuery *qry2 = new QSqlQuery(QSqlDatabase::database("libpro_user")) ;
      qry2->prepare("select * from wait");
      qry2->exec();
      QSqlQueryModel * modal2= new QSqlQueryModel;
      modal2 ->setQuery(*qry2);

      ui.waitTable->setModel(modal2);
      ui.waitTable->verticalHeader()->hide();
      ui.waitTable->horizontalHeader()->hide();
      ui.waitTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      ui.waitTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
      ui.waitTable->setSelectionBehavior(QAbstractItemView::SelectRows);
      ui.waitTable->setColumnWidth(1,150);
      ui.waitTable->setColumnWidth(2,400);
      ui.waitTable->setColumnWidth(3,250);
      ui.waitTable->setColumnWidth(4,75);
      ui.waitTable->hideColumn(0);

      // hiển thị table trong tab renting history
      QSqlQuery *qry3 = new QSqlQuery(QSqlDatabase::database("libpro_user")) ;
      qry3->prepare("select * from renting_history");// where is_return =" + QString::number(1));
      qry3->exec();
      QSqlQueryModel * modal3= new QSqlQueryModel;
      modal3 ->setQuery(*qry3);

      ui.renting->setModel(modal3);
      ui.renting->verticalHeader()->hide();
      ui.renting->horizontalHeader()->hide();
      ui.renting->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
      ui.renting->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
      ui.renting->setSelectionBehavior(QAbstractItemView::SelectRows);
      ui.renting->setColumnWidth(0,60);
      ui.renting->setColumnWidth(1,150);
      ui.renting->setColumnWidth(2,50);
      ui.renting->setColumnWidth(3,370);
      ui.renting->setColumnWidth(4,120);
      ui.renting->setColumnWidth(5,120);
      ui.renting->setColumnWidth(6,120);
      ui.renting->setColumnWidth(7,80);
      ui.renting->hideColumn(0);




      delete qry;



}

Librarian::~Librarian(){
    delete curUser;
}

void Librarian::on_borrowTable_clicked(const QModelIndex &index)
{
      const QAbstractItemModel * model = index.model();
      curBookRequestIndex = model->data(model->index(index.row(),6),Qt::DisplayRole).toInt();

}





void Librarian::on_waitTable_clicked(const QModelIndex &index)
{
    const QAbstractItemModel * model = index.model();
    curWaitIndex=model->data(model->index(index.row(),0),Qt::DisplayRole).toInt();


}

void Librarian::on_readerIDLe_textChanged(const QString &cur)
{
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from book_request where username like '%" + search + "%'");
    qry->exec();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.borrowTable->setModel(modal);
    ui.borrowTable->setColumnWidth(2,300);
    ui.borrowTable->setColumnWidth(5,150);

    ui.borrowTable->hideColumn(6);
    ui.borrowTable->verticalHeader()->hide();
    ui.borrowTable->horizontalHeader()->hide();
    ui.borrowTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.borrowTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.borrowTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.borrowTable->setColumnWidth(3,250);
    ui.borrowTable->setColumnWidth(1,60);

    delete qry;

}

void Librarian::on_insertButton_clicked()  // accept book request
{
    // trường hợp chưa click vào table view
    if(curBookRequestIndex==-1) return;

    int quantity;


    //else thêm vào database waiting **************************************


    // tìm thông tin yêu cầu
    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from book_request where book_request_id ='"+QString::number(curBookRequestIndex)+"'");
    QString username;
    int number;
    QString book_name ;
    QString accept_date;
    QString author;
    if (qry->exec())
        while (qry->next())
        {
             username = qry->value(0).toString();

             number = qry->value(1).toInt();

             book_name = qry->value(2).toString();
             author = qry->value(3).toString();
             QDate date = QDate::currentDate();
             accept_date = date.toString("yyyy-MM-dd");
        }

    if(*(book_name.end()-1)=='\n') book_name.chop(1);
    if(*(book_name.end()-1)=='\r') book_name.chop(1);

    int temp = number;
    if (number_of_book!= -1) number = number_of_book;

    // xác định số lượng sách còn trong database
    qDebug() << book_name;
    QSqlQuery* b = new QSqlQuery(QSqlDatabase::database("book_data"));
    b->prepare("select * from book_info where book_name like '%"+ book_name + "%'");
    if(b->exec())
    {
        while (b->next())
            quantity = b->value(5).toInt();
    }
    else qDebug() << "can't take number available!!!";

    qDebug() << quantity;


    // nếu available < số lượng sách muốn mượn

    //******************************Hiện BOXMessager ****************
    if (quantity < number)
    {
        QLabel* notEnough = ui.tabWidget->findChild<QLabel*>("error2");
        notEnough->setText("Not enought " + QString::number(number) + " books .... There's only " + QString::number(quantity) + " available right now!!!!");
        notEnough->setAlignment(Qt::AlignCenter);
        return ;
    }
    // **************************************************************


    QLabel* notEnough = ui.tabWidget->findChild<QLabel*>("error2");
    notEnough->setText(" ");




    // thêm vào danh sách sách đang chờ
    qry->prepare("INSERT INTO `wait`( `username`, `book_name`,`author`, `number`, `accept_date`) VALUES (:username,:book_name,:author,:number,:accept_date)");
    qry->bindValue(":username",username);
    qry->bindValue(":book_name",book_name);
    qry->bindValue(":author",author);
    qry->bindValue(":number",QString::number(number));
    qry->bindValue(":accept_date",accept_date);
    if(! qry->exec()) qDebug() << qry->lastError();



    // trừ số lượng sách trong database

    b->prepare("update book_info set quantity = "+QString::number(quantity - number)+" where book_name = '"+book_name+"'");
    if(!b->exec()) qDebug() << "here";
    qry->prepare("delete  from book_request where book_request_id = " + QString::number(curBookRequestIndex));
    if(!qry->exec()) qDebug() << "here";

    // gửi thông báo cho thg kia
    QDateTime datetime= QDateTime::currentDateTime();
    QString curDateTime = datetime.toString("yyyy-MM-dd HH:mm:ss");

    QSqlQuery *notify = new QSqlQuery(QSqlDatabase::database("libpro_user"));
    notify->prepare("insert into notification (username,date,notification,reader,librarian,dataprocessor) values (:username,:date,:notification,:reader,:librarian,:dataprocessor)");
    notify->bindValue(":username" , username);
    notify->bindValue(":date",curDateTime);
    if(number_of_book!=-1)
    {
        notify->bindValue(":notification", " Your request for '" + book_name + "' (quantity: "+QString::number(temp) +") has been decreased to only " + QString::number(number)+ " !!!  Please go to library to get books ......." );

    }
    else
    {
    notify->bindValue(":notification", " Your request for '" + book_name + "' (quantity: "+QString::number(number) +") has been ACCEPTED !!!  Please go to library to get books ......." );
    }
    notify->bindValue(":reader",1);
    notify->bindValue(":librarian",0);
    notify->bindValue(":dataprocessor",0);
    notify->exec();



    curBookRequestIndex = -1;

    this->displayBook();
    delete qry;
    delete b;
    delete notify;

}

void Librarian::on_readerIDLe_3_textChanged(const QString & cur)///search username trong tab wait
{
    QString book = ui.book_name->text();

    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from wait where username like '%" + search + "%' and book_name like '%"+book+"%'");
    qry->exec();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.waitTable->setModel(modal);
    ui.waitTable->verticalHeader()->hide();
    ui.waitTable->horizontalHeader()->hide();
    ui.waitTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.waitTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
    ui.waitTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.waitTable->setColumnWidth(1,150);
    ui.waitTable->setColumnWidth(2,400);
    ui.waitTable->setColumnWidth(3,250);
    ui.waitTable->setColumnWidth(4,75);
    ui.waitTable->hideColumn(0);
}

void Librarian::on_searchButton_3_clicked() // độc giả *éo đến lấy sách
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

    //gửi thông báo đến thg kia
    QDateTime datetime= QDateTime::currentDateTime();
    QString curDateTime = datetime.toString("yyyy-MM-dd HH:mm:ss");

    QSqlQuery *notify = new QSqlQuery(QSqlDatabase::database("libpro_user"));
    notify->prepare("insert into notification (username,date,notification,reader,librarian,dataprocessor) values (:username,:date,:notification,:reader,:librarian,:dataprocessor)");
    notify->bindValue(":username" ,username);
    notify->bindValue(":date",curDateTime);
    notify->bindValue(":notification"," Your book in queue : '" + book_name + "' ( quantity: "+QString::number(wait) +" ) has been DELETE :angry: :angry: " );
    notify->bindValue(":reader",1);
    notify->bindValue(":librarian",0);
    notify->bindValue(":dataprocessor",0);
    notify->exec();

    // xóa cấp phát động
    this->displayBook();

    delete notify;
    delete return_book;
    delete qry;
    delete set_book;
    delete set_book_quantity;
}

void Librarian::on_searchButton_clicked()  // decline book request
{
    if (curBookRequestIndex==-1) return;


    // tìm thông tin yêu cầu

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from book_request where book_request_id ='"+QString::number(curBookRequestIndex)+"'");
    QString username;
    int number;
    QString book_name ;
    QString accept_date;
    QString author;
    if (qry->exec())
        while (qry->next())
        {
             username = qry->value(0).toString();

             number = qry->value(1).toInt();

             book_name = qry->value(2).toString();
             author = qry->value(3).toString();
             QDate date = QDate::currentDate();
             accept_date = date.toString("yyyy-MM-dd");
        }


    // xóa yêu cầu
    QSqlQuery *qry1 = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry1->prepare("delete  from book_request where book_request_id = " + QString::number(curBookRequestIndex));
    qry1->exec();



    // gửi thông báo KHÔNG đồng ý đến thg kia
    QDateTime datetime= QDateTime::currentDateTime();
    QString curDateTime = datetime.toString("yyyy-MM-dd HH:mm:ss");

    QSqlQuery *notify = new QSqlQuery(QSqlDatabase::database("libpro_user"));
    notify->prepare("insert into notification (username,date,notification,reader,librarian,dataprocessor) values (:username,:date,:notification,:reader,:librarian,:dataprocessor)");
    notify->bindValue(":username" , username);
    notify->bindValue(":date",curDateTime);
    notify->bindValue(":notification"," Your request for '" + book_name + "' ( quantity: "+QString::number(number) +" ) has been DECLINE :sosad: ♥♪♫♥♪♫♥♪♫ " );
    notify->bindValue(":reader",1);
    notify->bindValue(":librarian",0);
    notify->bindValue(":dataprocessor",0);
    notify->exec();


    curBookRequestIndex = -1;

    this->displayBook();
    delete qry;
    delete notify;
    delete qry1;
}

void Librarian::on_insertButton_3_clicked() // độc giả đến lấy sách
{
    /// trường hợp chưa click vào table
    if (curWaitIndex == -1) return;


    /// ***************else ghi vào renting history


    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from wait where waiting_id ="+QString::number(curWaitIndex));
    QString username;
    int number;
    QString author;
    QString book_name ;
    QString borrow_date;
    QString due_date;


    if (qry->exec())
        while (qry->next())
        {
             username = qry->value(1).toString();

             number = qry->value(4).toInt();
             book_name = qry->value(2).toString();
             author = qry->value(3).toString();
             QDate date = QDate::currentDate();
             borrow_date = date.toString("yyyy-MM-dd");
             date = date.addDays(this->number_of_day);
             due_date = date.toString("yyyy-MM-dd");
        }
    auto it = book_name.end() -1;

    qDebug() << book_name;

    if (*it == '\n')
    {
        book_name.chop(1);
        it = book_name.end()-1;
    }
    if(*it == '\r')
        book_name.chop(1);


    qry->prepare("INSERT INTO `renting_history`( `username`, `book_name`,`number`, `borrow_date`,`due_date`) VALUES (:username,:book_name,:number,:borrow_date,:due_date)");
    qry->bindValue(":username",username);
    qry->bindValue(":book_name",book_name);
    qry->bindValue(":number",QString::number(number));
    qry->bindValue(":borrow_date",borrow_date);
    qry->bindValue(":due_date",due_date);

    if(!qry->exec()) qDebug() << qry->lastError();

    /// thêm thông tin vào database của user  để vẽ đồ thị

    //************************** update quantity trong ngày (đồ thị đường)
    QSqlQuery *graph = new QSqlQuery (QSqlDatabase::database("graph")) ;


    graph->prepare("update " + username + " set quantity =  quantity + " + QString::number(+number)+" where date = '" + borrow_date + "'");
    graph->exec();

    //*******************************update số lượng thể loại (đồ thị cột)

    // thể loại sách đã mượn
    QSqlQuery *book = new QSqlQuery (QSqlDatabase::database("book_data")) ;

    book->prepare("select * from book_info where book_name like '%" + book_name+ "%'"  );
    book->exec();
    if(!book->exec()) qDebug() << book->lastError();
    int General = 0 , Programing = 0 , Chemistry = 0, Physics = 0 , Enviroment = 0 , Electronic = 0 ,Technology = 0;
    while(book->next())
    {
        General = book->value(9).toInt();
        Programing = book->value(10).toInt();
        Chemistry = book->value(11).toInt();
        Physics  = book->value(12).toInt();
        Enviroment = book->value(13).toInt();
        Electronic = book->value(14).toInt();
        Technology = book->value(15).toInt();
    }
    qDebug() << book_name;
    qDebug() << General << Programing << Chemistry << Physics << Enviroment << Electronic << Technology;


   QSqlQuery *user = new QSqlQuery(QSqlDatabase::database("libpro_user"));

   user->prepare("Update user_account set General = General + " + QString::number(General*number) + " where account_name= '" + username + "'");
   if(!user->exec()) qDebug() << user->lastError();
   user->prepare("Update user_account set Programing =  Programing + " + QString::number(Programing*number) + " where account_name = '" + username + "'");
   user->exec();
   user->prepare("Update user_account set Chemistry = Chemistry + " + QString::number(Chemistry*number) + " where account_name= '" + username + "'");
   user->exec();
   user->prepare("Update user_account set Physics = Physics + " + QString::number(Physics*number) + " where account_name= '" + username + "'");
   user->exec();
   user->prepare("Update user_account set Enviroment = Enviroment + " + QString::number(Enviroment*number) + " where account_name= '" + username + "'");
   user->exec();
   user->prepare("Update user_account set Electronic = Electronic + " + QString::number(Electronic*number) + " where account_name = '" + username + "'");
   user->exec();
   user->prepare("Update user_account set Technology  = Technology + " + QString::number(Technology*number) + " where account_name = '" + username + "'");
   user->exec();





    ///xóa khỏi waitlist
    qry->prepare("delete  from wait where waiting_id = " + QString::number(curWaitIndex));
    qry->exec();
    curWaitIndex = -1;

    this->displayBook();
    delete qry;
    delete graph;
    delete book;
    delete user;


}

void Librarian::on_insertButton_4_clicked() // thg độc giả đến trả sách
{

    if (curRentIndex==-1) return ;


    /// lấy số tên sách và số lượng đã được đặt chỗ
    QSqlQuery *return_book = new QSqlQuery(QSqlDatabase::database("libpro_user"));
    return_book->prepare("select * from renting_history where rent_id = "+QString::number(curRentIndex));

    int number;
    QString book_name;
    bool is_return;
    if (return_book->exec())
    {
        while (return_book->next())
        {
            number = return_book->value(2).toInt();
            book_name = return_book->value(3).toString();
            is_return = return_book->value(7).toBool();

        }
    }

    // đã trả sách thì bỏ qua
    if(is_return)
    {
         QLabel* error = ui.tabWidget->findChild<QLabel*>("error3");
         error -> setText("The book has been return!!");
         error->setAlignment(Qt::AlignCenter);

         return;
    }
    QLabel* error = ui.tabWidget->findChild<QLabel*>("error3");
    error -> setText(" ");
    error->setAlignment(Qt::AlignCenter);

    /// trả lại database số sách đc đặt chỗ
    QSqlQuery * set_book_quantity = new QSqlQuery(QSqlDatabase::database("book_data"));
    set_book_quantity->prepare("select * from book_info where book_name ='"+book_name+"'");
    int available;
    if(set_book_quantity->exec())
            while (set_book_quantity->next())
                    available = set_book_quantity->value(1).toInt();





    int sum = available+number; // tổng số sách sau khi trả
    QSqlQuery* set_book = new QSqlQuery(QSqlDatabase::database("book_data"));
    set_book->prepare("update book_info set quantity =" +QString::number(sum)+" where book_name ='" + book_name+"'");
    if(!set_book->exec()) qDebug()<< set_book->lastError();

    // gán due_date

    QDate date = QDate::currentDate();
    QString return_date = date.toString("yyyy-MM-dd");
    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("update renting_history set return_date = '"+return_date+"',is_return=1 where rent_id = " + QString::number(curRentIndex));

    if(!qry->exec()) qDebug() << qry->lastError();
    curRentIndex= -1;

    this->displayBook();
    delete qry;
    delete set_book;
    delete set_book_quantity;
    delete return_book;

}

void Librarian::on_renting_clicked(const QModelIndex &index)
{
    const QAbstractItemModel * model = index.model();
    curRentIndex = model->data(model->index(index.row(),0),Qt::DisplayRole).toInt();

}

void Librarian::on_readerIDLe_2_textChanged(const QString &cur)/// search username trong tab renting
{

    QString book = ui.violationLe->text();
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from renting_history where username like '%" + search + "%' and book_name like '%"+book+"%'");
    qry->exec();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.renting->setModel(modal);
    ui.renting->verticalHeader()->hide();
    ui.renting->horizontalHeader()->hide();
    ui.renting->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.renting->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
    ui.renting->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.renting->setColumnWidth(0,60);
    ui.renting->setColumnWidth(1,150);
    ui.renting->setColumnWidth(2,50);
    ui.renting->setColumnWidth(3,370);
    ui.renting->setColumnWidth(4,120);
    ui.renting->setColumnWidth(5,120);
    ui.renting->setColumnWidth(6,120);
    ui.renting->setColumnWidth(7,80);
    ui.renting->hideColumn(0);

    delete qry;
}

void Librarian::on_yearLe_textChanged(const QString & cur)
{
    //select * from mytable where year(Columnx) = 2010
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    QDate date = QDate::currentDate();
    QString curdate = date.toString("yyyy-MM-dd");
    qry->prepare("SELECT * FROM renting_history WHERE month(due_date) = month("+curdate+")") ;
    if(!qry->exec()) qDebug() << qry->lastError();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.renting->setModel(modal);
    ui.renting->verticalHeader()->hide();
    ui.renting->horizontalHeader()->hide();
    ui.renting->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.renting->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
    ui.renting->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.renting->setColumnWidth(0,60);
    ui.renting->setColumnWidth(1,200);
    ui.renting->setColumnWidth(2,50);
    ui.renting->setColumnWidth(3,400);
    ui.renting->setColumnWidth(4,100);
    ui.renting->setColumnWidth(5,100);

    delete qry;
}

void Librarian::on_publicChat_2_clicked() // notification clicked
{
    QSqlQuery *set_time = new QSqlQuery(QSqlDatabase::database("libpro_user"));
    QDateTime date = QDateTime::currentDateTime();
    QString cur_time = date.toString("yyyy-MM-dd HH:mm:ss");
    set_time->prepare("update user_account set last_seen_notify ='" + cur_time +"' where account_name = '" + curUser->getUsername() +"'");
    if(!set_time->exec()) qDebug() << set_time->lastError();

    Notification* w = new Notification(this,curUser);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->exec();
    this->displayNotify();

}

void Librarian::on_publicChat_3_clicked()
{
    SwitchRole* w = new SwitchRole(this,this->curUser);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setModal(true);
    w->exec();

}

void Librarian::on_number_textChanged(const QString &cur)
{

    bool ok;
    int number = cur.toInt(&ok);
    if (!ok)
    {
        number_of_day = 14;
        QLabel* error = ui.tabWidget->findChild<QLabel*>("error");
        error->setText("Number is not valid... Number for renting book is set to default (14 days)");
        error->setAlignment(Qt::AlignCenter);
    }
    else
    {
        number_of_day = number;
        QLabel* error = ui.tabWidget->findChild<QLabel*>("error");
        error->setText("");
        error->setAlignment(Qt::AlignCenter);
    }

}


void Librarian::on_readerIDLe_4_textChanged(const QString &cur)
{
    bool ok;
    int number = cur.toInt(&ok);
    if (!ok)
    {
        number_of_book = -1;
        QLabel* error = ui.tabWidget->findChild<QLabel*>("error2");
        error->setText("Number is not valid... Number for renting book is set equal to user request");
        error->setAlignment(Qt::AlignCenter);

    }
    else
    {
        if(number < 0)
        {
            number_of_book = -1;
            QLabel* error = ui.tabWidget->findChild<QLabel*>("error2");
            error->setText("Number is not valid... Number for renting book is set equal to user request");
            error->setAlignment(Qt::AlignCenter);

        }
        else
        {
             number_of_book = number;
             QLabel* error = ui.tabWidget->findChild<QLabel*>("error2");
             error->setText(" Number accepted is set to " + QString::number(number) );
             error->setAlignment(Qt::AlignCenter);
        }
    }

}

void Librarian::on_insertButton_5_clicked()
{

    if(isViolation==true)
    {
        QString username = ui.readerIDLe_2->text();
        QString book = ui.violationLe->text();


        QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
        QDate date = QDate::currentDate();
        QString curdate = date.toString("MM-dd-yyyy");
        qry->prepare("SELECT * FROM renting_history WHERE username like '%"+username+"%' and book_name like '%"+book+"%'") ;
        if(!qry->exec()) qDebug() << qry->lastError();

        //hiển thị bảng
        QSqlQueryModel * modal = new QSqlQueryModel;
        modal ->setQuery(*qry);

        ui.renting->setModel(modal);
        ui.renting->verticalHeader()->hide();
        ui.renting->horizontalHeader()->hide();
        ui.renting->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui.renting->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
        ui.renting->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui.renting->setColumnWidth(0,60);
        ui.renting->setColumnWidth(1,150);
        ui.renting->setColumnWidth(2,50);
        ui.renting->setColumnWidth(3,370);
        ui.renting->setColumnWidth(4,120);
        ui.renting->setColumnWidth(5,120);
        ui.renting->setColumnWidth(6,120);
        ui.renting->setColumnWidth(7,80);
        ui.renting->hideColumn(0);


        delete qry;
        isViolation=false;
        return;

    }

    QString username = ui.readerIDLe_2->text();
    QString book = ui.violationLe->text();


    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    QDate date = QDate::currentDate();
    QString curdate = date.toString("yyyy-MM-dd");
    qry->prepare("SELECT * FROM renting_history WHERE due_date < '" +curdate+"' and username like '%"+username+"%' and book_name like '%"+book+"%' and is_return = 0") ;
    if(!qry->exec()) qDebug() << qry->lastError();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.renting->setModel(modal);
    ui.renting->verticalHeader()->hide();
    ui.renting->horizontalHeader()->hide();
    ui.renting->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.renting->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
    ui.renting->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.renting->setColumnWidth(0,60);
    ui.renting->setColumnWidth(1,150);
    ui.renting->setColumnWidth(2,50);
    ui.renting->setColumnWidth(3,370);
    ui.renting->setColumnWidth(4,120);
    ui.renting->setColumnWidth(5,120);
    ui.renting->setColumnWidth(6,120);
    ui.renting->setColumnWidth(7,80);
    ui.renting->hideColumn(0);
    isViolation=true;

    delete qry;

}

void Librarian::on_readerIDLe_2_cursorPositionChanged(int arg1, int arg2)
{

}

void Librarian::on_violationLe_textChanged(const QString &cur)
{
    QString username = ui.readerIDLe_2->text();
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from renting_history where username like '%" + username + "%' and book_name like '%"+search+"%'");
    qry->exec();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.renting->setModel(modal);
    ui.renting->verticalHeader()->hide();
    ui.renting->horizontalHeader()->hide();
    ui.renting->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.renting->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
    ui.renting->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.renting->setColumnWidth(0,60);
    ui.renting->setColumnWidth(1,150);
    ui.renting->setColumnWidth(2,50);
    ui.renting->setColumnWidth(3,370);
    ui.renting->setColumnWidth(4,120);
    ui.renting->setColumnWidth(5,120);
    ui.renting->setColumnWidth(6,120);
    ui.renting->setColumnWidth(7,80);
    ui.renting->hideColumn(0);

    delete qry;
}

void Librarian::on_book_name_textChanged(const QString &cur)
{
    QString username = ui.readerIDLe_3->text();
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }

    QSqlQuery *qry = new QSqlQuery (QSqlDatabase::database("libpro_user")) ;
    qry->prepare("select * from wait where username like '%" + username + "%' and book_name like '%"+search+"%'");
    qry->exec();

    //hiển thị bảng
    QSqlQueryModel * modal = new QSqlQueryModel;
    modal ->setQuery(*qry);

    ui.waitTable->setModel(modal);
    ui.waitTable->verticalHeader()->hide();
    ui.waitTable->horizontalHeader()->hide();
    ui.waitTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.waitTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);\
    ui.waitTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui.waitTable->setColumnWidth(1,150);
    ui.waitTable->setColumnWidth(2,400);
    ui.waitTable->setColumnWidth(3,250);
    ui.waitTable->setColumnWidth(4,75);
    ui.waitTable->hideColumn(0);

    delete qry;
}

void Librarian::on_book_name_cursorPositionChanged(int arg1, int arg2)
{

}

void Librarian::on_readerIDLe_3_cursorPositionChanged(int arg1, int arg2)
{

}

void Librarian::on_theme_clicked()
{
    ChangeTheme* w = new ChangeTheme(this,curUser);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setModal(true);
    w->exec();
}

void Librarian::on_logout_clicked()
{
    LoginForm *x = new LoginForm;
    x->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
    x->exec();
}

void Librarian::on_publicChat_6_clicked()
{
    ChangePassword* w = new ChangePassword(0,curUser);
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setModal(true);
    w->exec();
}


void Librarian::displayNotify()
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

void Librarian::updateTime()
{
    ui.time->setText(date.currentDateTime().toString());
}
