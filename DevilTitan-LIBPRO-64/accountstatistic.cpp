#include "LIBPRO.h"
#include "ui_accountstatistic.h"
#include <QTime>
#include <ctime>
#include <algorithm>
#include <QGraphicsDropShadowEffect>

AccountStatistic::AccountStatistic(QWidget *parent,User* curUser) :
    QDialog(parent),
    ui(new Ui::AccountStatistic)
{
    ui->setupUi(this);
    this->curUser = new User(*curUser);


    QPixmap bkgnd(curTheme);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    AccountStatistic::makePlot();

    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect();
    effect->setBlurRadius(5);
    effect->setColor(QColor("#3c6478"));
    effect->setOffset(2, 3.5);
    ui->frame_4->setGraphicsEffect(effect);

    this->setWindowTitle("Account Statistic");

    ui->username->setText(this->curUser->getUsername());
}

AccountStatistic::~AccountStatistic()
{
    delete ui;

}


void AccountStatistic::makePlot()
{
    ui->username->setAlignment(Qt::AlignHCenter);
    ui->account->setAlignment(Qt::AlignCenter);
    ui->email->setAlignment(Qt::AlignCenter);
    ui->status->setAlignment(Qt::AlignCenter);
    ui->gender->setAlignment(Qt::AlignCenter);
    ui->phone->setAlignment(Qt::AlignCenter);



    QFont standard("Ubuntu Light", 10);

    int const maxDay = 4;
    int maxQuantity = 0;
    // generate some data:

    QVector<double> x(101), y(101);
    //yAxis must be greater than zero

    QSqlQuery getData(QSqlDatabase::database("graph"));
    getData.prepare("select * from "+ curUser->getUsername());
    if(!getData.exec()) qDebug() << "Can't get data for graph" << getData.lastError();
    int i = 0;
    while (getData.next())
    {
        int b = getData.value(1).toInt();
        if (i!= 0 && b != 0)
            y[i] = b, x[i] = i; ///IMPORTANT
        maxQuantity = (y[i] >= maxQuantity) ? y[i] : maxQuantity;
        ++i;


    }



    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

        QPixmap bkgnd(":/appscreen/Resources/appscreen/498785161.jpg");
    ui->customPlot->graph(0)->setBrush(QBrush(bkgnd));

    // give the axes some labels:
    ui->customPlot->yAxis->setLabel("Quantity");
    ui->customPlot->yAxis->setLabelFont(QFont(standard));
    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-0.5, maxDay);
    ui->customPlot->xAxis->setVisible(false);
    ui->customPlot->yAxis->setRange(-0.4, maxQuantity + 1);
    ui->customPlot->replot();
    // set pen
    QPen pen;
    pen.setWidthF(3);
    pen.setColor(QColor(14, 98, 184));
    ui->customPlot->graph(0)->setPen(pen);
    ui->customPlot->graph(0)->setBrush(QBrush(QColor(6, 57, 81, 20)));
    ui->customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, QColor(13, 149, 148), QColor(0, 226, 173), 10));
    ui->customPlot->plotLayout()->insertRow(0);
    QCPTextElement* a = new QCPTextElement(ui->customPlot, "", QFont("Ubuntu Light", 12, QFont::Bold));
    a->setTextColor(Qt::blue);
    ui->customPlot->plotLayout()->addElement(0, 0, a);

    // create empty bar chart objects:
    QCPBars *quantity = new QCPBars(ui->customPlot1->xAxis, ui->customPlot1->yAxis);

    quantity->setAntialiased(false); // gives more crisp, pixel aligned bar borders
    quantity->setStackingGap(1);
    // set names and colors:
    quantity->setName("Quantity");
    quantity->setPen(QPen(QColor(104, 207, 255).lighter(130)));
    quantity->setBrush(QColor(76, 196, 195));
    // stack bars on top of each other:

    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3 << 4 << 5 << 6 << 7;

    ///ADD GENRE
    labels << "General" << "Programing" << "Chemistry" << "Physics"
           << "Enviroment" << "Electronic" << "Technology";
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->customPlot1->xAxis->setTicker(textTicker);
    ui->customPlot1->xAxis->setTickLabelRotation(45);
    ui->customPlot1->xAxis->setSubTicks(false);
    ui->customPlot1->xAxis->setTickLength(0, 4);
    ui->customPlot1->xAxis->setRange(0, 8);
    ui->customPlot1->xAxis->setBasePen(QPen(Qt::black));
    ui->customPlot1->xAxis->setTickPen(QPen(Qt::black));
    ui->customPlot1->xAxis->grid()->setVisible(true);
    ui->customPlot1->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->customPlot1->xAxis->setTickLabelColor(Qt::black);
    ui->customPlot1->xAxis->setLabelColor(Qt::black);

    // prepare y axis:
    ui->customPlot1->yAxis->setRange(0, 12.1);
    ui->customPlot1->yAxis->setPadding(5); // a bit more space to the left border
    ui->customPlot1->yAxis->setLabel("Quantity");
    ui->customPlot1->xAxis->setLabelFont(standard);
    ui->customPlot1->yAxis->setLabelFont(standard);
    ui->customPlot1->yAxis->setBasePen(QPen(Qt::black));
    ui->customPlot1->yAxis->setTickPen(QPen(Qt::black));
    ui->customPlot1->yAxis->setSubTickPen(QPen(Qt::black));

    ui->customPlot1->yAxis->setTickLabelColor(Qt::black);
    ui->customPlot1->yAxis->setLabelColor(Qt::black);

    ///ADD QUANTITY:
    QSqlQuery gettype (QSqlDatabase::database("libpro_user"));
    gettype.prepare("select * from user_account where account_name = '" + curUser->getUsername()+"'");
    gettype.exec();
    int General , Programing , Chemistry, Physics, Enviroment , Electronic ,Technology, max = 0;
    while (gettype.next())
    {
        General = gettype.value(9).toInt();
        if (General> max) max = General;
        Programing =  gettype.value(10).toInt();
         if (Programing > max) max = Programing;
        Chemistry =  gettype.value(11).toInt();
         if (Chemistry > max) max = Chemistry;
        Physics =  gettype.value(12).toInt();
         if (Physics > max) max = Physics;
        Enviroment =  gettype.value(13).toInt();
         if (Enviroment> max) max = Enviroment;
        Electronic=  gettype.value(14).toInt();
         if (Electronic > max) max = Electronic;
        Technology = gettype.value(15).toInt();
         if (Technology > max) max = Technology;

    }

     ui->customPlot1->yAxis->setRange(0, max+0.1*max);


    QVector<double> quantityData;
    quantityData   << General << Programing << Chemistry <<  Physics << Enviroment << Electronic << Technology;
    quantity->setData(ticks, quantityData);

    ui->customPlot1->plotLayout()->insertRow(0);
    QCPTextElement* b = new QCPTextElement(ui->customPlot, "", QFont("Ubuntu Light", 12, QFont::Bold));
    b->setTextColor(Qt::blue);
    ui->customPlot1->plotLayout()->addElement(0, 0, b);


    \
}
