#include "LIBPRO.h"

DataProcessingTechnician::DataProcessingTechnician(QWidget *parent,User* curUser)
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
}

DataProcessingTechnician::~DataProcessingTechnician()
{
    delete curUser;
}

void DataProcessingTechnician::on_waitTable_clicked(const QModelIndex &index)
{

}

void DataProcessingTechnician::displaybook()
{
    // hiển thị table trong tab request_book
    QSqlQuery query(QSqlDatabase::database("libpro_user")) ;
    query.prepare("select * from new_book");
    query.exec();


    ui.requestTable->setColumnCount(5);
    ui.requestTable->setRowCount(query.size());
    ui.requestTable->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui.requestTable->setAlternatingRowColors(true);

   int row = 0;
   QTableWidgetItem *tmpItem;

   while (query.next())
   {
        int col = 0;
        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(0).toString())); // id
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.requestTable->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(1).toString())); // username
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.requestTable->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(2).toString())); // book_name
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.requestTable->setItem(row, col++, tmpItem);


        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(3).toString()));  // author
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
       tmpItem->setFlags(Qt::NoItemFlags);

        ui.requestTable->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query.value(4).toString()));  // link
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
       tmpItem->setFlags(Qt::NoItemFlags);

        ui.requestTable->setItem(row, col++, tmpItem);




        ui.requestTable->item(row,1)->setTextAlignment(Qt::AlignLeft);

        ui.requestTable->item(row,2)->setTextAlignment(Qt::AlignLeft);
        ui.requestTable->item(row,4)->setTextAlignment(Qt::AlignLeft);
        ui.requestTable->item(row,3)->setTextAlignment(Qt::AlignHCenter);


       row++;
  }
  // ui->tableWidget->setFrameStyle(QFrame::NoFrame);
       ui.requestTable->setShowGrid(false);
       ui.requestTable->setSelectionBehavior(QAbstractItemView::SelectRows);
       ui.requestTable->verticalHeader()->hide();
       ui.requestTable->setColumnWidth(1,200);
       ui.requestTable->setColumnWidth(2,400);
       ui.requestTable->setColumnWidth(3,200);
       ui.requestTable->setColumnWidth(4,120);
       ui.requestTable->resizeRowsToContents();
       ui.requestTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
       ui.requestTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
       ui.requestTable->horizontalHeader()->hide();
       ui.requestTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
       ui.requestTable->setFocusPolicy(Qt::NoFocus) ;

    // hiển thị table trong tab book

    QSqlQuery query2 (QSqlDatabase::database("book_data")) ;
    query2.prepare("select * from book_info");
    query2.exec();

    ui.bookTable->setColumnCount(2);
    ui.bookTable->setRowCount(query2.size());
    ui.bookTable->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
     ui.bookTable->setAlternatingRowColors(true);

   row = 0;


   while (query2.next())
   {
        int col = 0;
        tmpItem = new QTableWidgetItem(tr("%1").arg(query2.value(0).toString())); // isbn
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookTable->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query2.value(1).toString())); // book_name
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

         ui.bookTable->setItem(row, col++, tmpItem);



       row++;
  }
  // ui->tableWidget->setFrameStyle(QFrame::NoFrame);
        ui.bookTable->setShowGrid(false);
        ui.bookTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui.bookTable->verticalHeader()->hide();
        ui.bookTable->setColumnWidth(1,400);
        ui.bookTable->setColumnWidth(0,150);

        ui.bookTable->resizeRowsToContents();
        ui.bookTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui.bookTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui.bookTable->horizontalHeader()->hide();
        ui.bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui.bookTable->setFocusPolicy(Qt::NoFocus) ;







}

void DataProcessingTechnician::on_bookTable_clicked(const QModelIndex &index)
{
    clear();
    const QAbstractItemModel * model = index.model();
    curISBN = model->data(model->index(index.row(),0),Qt::DisplayRole).toString();

        QSqlQuery book (QSqlDatabase::database("book_data"));
        book.prepare("select * from book_info where isbn = '" + curISBN + "'");
        if(!book.exec()) qDebug() << "abc";

        QString book_name ;
        QString author  ;
        int year         ;
        QString publisher ;
        int quantity     ;
        double rate    ;
        QString description ;
        int general=0,programing=0,chemistry=0,physics=0,environment=0,electronic=0,technology=0;
        int rated_times ;


        while(book.next())
        {
        book_name = book.value(1).toString();
        author   = book.value(2).toString();
        year         = book.value(3).toInt();
        publisher = book.value(4).toString();
        quantity     = book.value(5).toInt();
        rate      = book.value(6).toDouble();
        description = book.value (8).toString();
        general     = book.value(9).toInt();
        programing  = book.value(10).toInt();
        chemistry   = book.value(11).toInt();
        physics     = book.value(12).toInt();
        environment = book.value(13).toInt();
        electronic  = book.value(14).toInt();
        technology  = book.value(15).toInt();
        rated_times  = book.value(16).toInt();

        }
        ui.isbn->setText(curISBN);
        ui.author->setText(author);
        ui.book_name_2->setText(book_name);
        ui.quantity->setText(QString::number(quantity));
        ui.year->setText(QString::number(year));
        ui.rate->setText(QString::number(rate));
        ui.rated_times->setText(QString::number(rated_times));
        ui.publisher->setText(publisher);
        ui.description->setText(description);

        if(general) ui.general->setChecked(true);
        if(programing) ui.programing->setChecked(true);
        if(chemistry) ui.chemistry->setChecked(true);
        if(physics) ui.physics->setChecked(true);
        if(environment) ui.environment->setChecked(true);
        if(electronic) ui.electronic->setChecked(true);
        if(technology) ui.technology->setChecked(true);

}

void DataProcessingTechnician::on_isbnsearch_textChanged(const QString &cur) // search
{
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }


    QString username = curUser->getUsername();
    QSqlQuery query2(QSqlDatabase::database("book_data"));
    query2.prepare("select * from book_info where book_name like '%" + ui.booknamesearch->text() + "%' and "+"isbn like '%"+ui.isbnsearch->text()+"%'");
    if(!query2.exec()) qDebug() << "here";

    ui.bookTable->setColumnCount(2);
    ui.bookTable->setRowCount(query2.size());
    ui.bookTable->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    ui.bookTable->setAlternatingRowColors(true);

   int row = 0;
    QTableWidgetItem* tmpItem;

   while (query2.next())
   {
        int col = 0;
        tmpItem = new QTableWidgetItem(tr("%1").arg(query2.value(0).toString())); // isbn
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookTable->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query2.value(1).toString())); // book_name
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

         ui.bookTable->setItem(row, col++, tmpItem);



       row++;
  }
  // ui->tableWidget->setFrameStyle(QFrame::NoFrame);
        ui.bookTable->setShowGrid(false);
        ui.bookTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui.bookTable->verticalHeader()->hide();
        ui.bookTable->setColumnWidth(1,150);
        ui.bookTable->setColumnWidth(1,450);

        ui.bookTable->resizeRowsToContents();
        ui.bookTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui.bookTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui.bookTable->horizontalHeader()->hide();
        ui.bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui.bookTable->setFocusPolicy(Qt::NoFocus) ;




}

void DataProcessingTechnician::on_booknamesearch_textChanged(const QString &cur) //search
{
    QString search; // xóa khoảng trắng liên tiếp
    for(int i = 1 ; i < cur.size() ; ++i)
    {
      if (!((cur[i]==' ')&&(cur[i-1]==' '))) search.append(cur[i]);
    }


    QString username = curUser->getUsername();
    QSqlQuery query2(QSqlDatabase::database("book_data"));
    query2.prepare("select * from book_info where book_name like '%" + ui.booknamesearch->text() + "%' and "+"isbn like '%"+ui.isbnsearch->text()+"%'");
    if(!query2.exec()) qDebug() << "here";

    ui.bookTable->setColumnCount(2);
    ui.bookTable->setRowCount(query2.size());
    ui.bookTable->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
     ui.bookTable->setAlternatingRowColors(true);

   int row = 0;
    QTableWidgetItem * tmpItem;

   while (query2.next())
   {
        int col = 0;
        tmpItem = new QTableWidgetItem(tr("%1").arg(query2.value(0).toString())); // isbn
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

        ui.bookTable->setItem(row, col++, tmpItem);

        tmpItem = new QTableWidgetItem(tr("%1").arg(query2.value(1).toString())); // book_name
        tmpItem->setForeground(QColor::fromRgb(255, 253, 255));
        tmpItem->setFlags(Qt::NoItemFlags);

         ui.bookTable->setItem(row, col++, tmpItem);



       row++;
  }
  // ui->tableWidget->setFrameStyle(QFrame::NoFrame);
        ui.bookTable->setShowGrid(false);
        ui.bookTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui.bookTable->verticalHeader()->hide();
        ui.bookTable->setColumnWidth(0,150);
        ui.bookTable->setColumnWidth(1,450);

        ui.bookTable->resizeRowsToContents();
        ui.bookTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui.bookTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ui.bookTable->horizontalHeader()->hide();
        ui.bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui.bookTable->setFocusPolicy(Qt::NoFocus) ;




}

void DataProcessingTechnician::on_requestTable_clicked(const QModelIndex &index)
{
    const QAbstractItemModel * model = index.model();
    curidx = model->data(model->index(index.row(),0),Qt::DisplayRole).toInt();
}

void DataProcessingTechnician::on_insertButton_2_clicked()
{
    clear();

}

void DataProcessingTechnician::on_isbn_editingFinished() //set current ISBN
{
    curISBN=ui.isbn->text();
}

void DataProcessingTechnician::on_searchButton_clicked() //del book
{
    if(curISBN == "") return;
    QSqlQuery del (QSqlDatabase::database("book_data"));
    del.prepare("delete from book_info where isbn = '" + curISBN +"'");
    del.exec();
    curISBN = "";
    displaybook();
    clear();

}

void DataProcessingTechnician::clear()
{
    curISBN="";
    ui.isbn->setText("");
    ui.author->setText("");
    ui.book_name_2->setText("");
    ui.description->setText("");
    ui.publisher->setText("");
    ui.year->setText("");
    ui.quantity->setText("");
    ui.rate->setText("");
    ui.rated_times->setText("");
    ui.general->setChecked(false);
    ui.programing->setChecked(false);
    ui.chemistry->setChecked(false);
    ui.physics->setChecked(false);
    ui.environment->setChecked(false);
    ui.electronic->setChecked(false);
    ui.technology->setChecked(false);
}

void DataProcessingTechnician::on_insertButton_clicked() // add book or edit book info
{
    if (curISBN == "") return;

    QSqlQuery qry (QSqlDatabase::database("book_data") );
    qry.prepare("Select * from book_info where isbn = '" + curISBN +"'");
    qry.exec();


    QString valid;
    while (qry.next())
    {
        valid = qry.value(1).toString();
    }
    // library contain this book

    if(valid!="")
    {
        QString book_name = ui.book_name_2->text();

        QString author = ui.author->text();
        QString publisher = ui.publisher->text();
        QString description = ui.description->text();
        int quantity = ui.quantity->text().toInt();
        int year = ui.year->text().toInt();
        int rate = ui.rate->text().toInt();
        int rated_times = ui.rated_times->text().toInt();
        int general = 0 , programing = 0  ,chemistry = 0 , physics = 0, environment = 0, electronic =0, technology = 0 ;
        if (ui.general->isChecked()) general  = 1;
        if (ui.programing->isChecked()) programing  = 1;
        if (ui.chemistry->isChecked()) chemistry  = 1;
        if (ui.physics->isChecked()) physics  = 1;
        if (ui.environment->isChecked()) environment = 1;
        if (ui.electronic->isChecked())  electronic  = 1;
        if (ui.technology->isChecked())  technology  =1;



        qry.prepare("update book_info set "
                    "book_name = :book_name ,"
                    "author = :author, "
                    "year = :year, "
                    "publisher = :publisher,"
                    "description = :description,"
                    "quantity = :quantity, "
                    "rate = :rate, "
                    "rated_times = :rated_times,"
                    "general = :general, "
                    "programing = :programing, "
                    "chemistry = :chemistry, "
                    "physics = :physics,"
                    "environment = :environment, "
                    "electronic = :electronic, "
                    "technology = :technology "
                    "  where isbn = '"+ curISBN + "';");

        qry.bindValue(":book_name",book_name);
        qry.bindValue(":author",author);
        qry.bindValue(":year",year);
        qry.bindValue(":publisher",publisher);
        qry.bindValue(":description",description);
        qry.bindValue(":quantity",quantity);
        qry.bindValue(":rate",rate);
        qry.bindValue(":rated_times",rated_times);
        qry.bindValue(":general",general);
        qry.bindValue(":programing",programing);
        qry.bindValue(":chemistry",chemistry);
        qry.bindValue(":physics",physics);
        qry.bindValue(":environment",environment);
        qry.bindValue(":electronic",electronic);
        qry.bindValue(":technology",technology);
          if (!qry.exec())
          {
            qDebug() << qry.executedQuery();
            qDebug() << qry.lastError();
          }
           qDebug() << qry.executedQuery();
    }


    else
    {
        QString isbn = ui.isbn->text();
        QString book_name = ui.book_name_2->text();
        QString author = ui.author->text();
        QString publisher = ui.publisher->text();
        QString description = ui.description->text();
        int quantity = ui.quantity->text().toInt();
        int year = ui.year->text().toInt();
        int rate = ui.rate->text().toInt();
        int rated_times = ui.rated_times->text().toInt();
        int general = 0 , programing = 0  ,chemistry = 0 , physics = 0, environment = 0, electronic =0, technology = 0 ;
        if (ui.general->isChecked()) general  = 1;
        if (ui.programing->isChecked()) programing  = 1;
        if (ui.chemistry->isChecked()) chemistry  = 1;
        if (ui.physics->isChecked()) physics  = 1;
        if (ui.environment->isChecked()) environment = 1;
        if (ui.electronic->isChecked())  electronic  = 1;
        if (ui.technology->isChecked())  technology  =1;

        qry.prepare("INSERT INTO `book_info`(`isbn`, `book_name`, `author`, `year`, `publisher`, `quantity`, `rate`, `status`, `description`, `General`, `Programing`, `Chemistry`, `Physics`, `Environment`, `Electronic`, `Technology`, `rated_times`) VALUES (:isbn,:book_name,:author,:year,:publisher,:quantity,:rate,:status,:description,:general,:programing,:chemistry,:physics,:environment,:electronic,:technology,:rated_times)");

        qry.bindValue(":isbn",isbn);
        qry.bindValue(":status","available");
        qry.bindValue(":book_name",book_name);
        qry.bindValue(":author",author);
        qry.bindValue(":year",year);
        qry.bindValue(":publisher",publisher);
        qry.bindValue(":description",description);
        qry.bindValue(":quantity",quantity);
        qry.bindValue(":rate",rate);
        qry.bindValue(":rated_times",rated_times);
        qry.bindValue(":general",general);
        qry.bindValue(":programing",programing);
        qry.bindValue(":chemistry",chemistry);
        qry.bindValue(":physics",physics);
        qry.bindValue(":environment",environment);
        qry.bindValue(":electronic",electronic);
        qry.bindValue(":technology",technology);
        if(!qry.exec())
        {
            qDebug() << qry.lastError();
            qDebug() << qry.executedQuery();
        }
    }
    displaybook();
}

void DataProcessingTechnician::on_searchButton_3_clicked()
{
    QSqlQuery qry;
    qry.prepare("delete from book_");
}
