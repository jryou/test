#include "timer.h"
#include "ui_timer.h"

timer::timer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::timer)
{
    ui->setupUi(this);
    timer1 = new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this,SLOT(tupdate()));

    timer1->start(1000);
}

timer::~timer()
{
    delete ui;
}

int timer::tupdate(){
    QDateTime local(QDateTime::currentDateTime());
    ui->label->setText(local.toString());
    return 0;
}
