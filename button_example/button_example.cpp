#include "button_example.h"
#include "ui_button_example.h"
#include<QLabel>
button_example::button_example(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::button_example)
{
    ui->setupUi(this);
}

button_example::~button_example()
{
    delete ui;
}

void button_example::on_pushButton_1_clicked()
{
    ui->label->setText("하드웨어 지원 최강");
    ui->pushButton_1->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
}

void button_example::on_pushButton_2_clicked()
{
    ui->label->setText("유저가 최강");
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(true);
}

void button_example::on_pushButton_3_clicked()
{
    ui->label->setText("스타벅스 가냐?");
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(false);
}
