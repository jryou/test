#include "combobox.h"
#include "ui_combobox.h"

comboBox::comboBox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::comboBox)
{
    ui->setupUi(this);
    ui->comboBox_2->addItem("홀리");
    ui->comboBox_2->addItem("몰리");
    ui->comboBox_2->addItem("돌리");
}

comboBox::~comboBox()
{
    delete ui;
}

void comboBox::on_comboBox_2_currentIndexChanged(int index)
{
    //ui->comboBox_2->clear();
    if(index == 0){
        ui->comboBox_3->clear();
        ui->comboBox_3->addItem("연남동");
        ui->comboBox_3->addItem("서교동");
        ui->comboBox_3->addItem("동교동");
    }


    if(index == 1){
        ui->comboBox_3->clear();
        ui->comboBox_3->addItem("대치동");
        ui->comboBox_3->addItem("광명동");
        ui->comboBox_3->addItem("7동");
    }


    if(index == 2){
        ui->comboBox_3->clear();
        ui->comboBox_3->addItem("하안동");
        ui->comboBox_3->addItem("서초동");
        ui->comboBox_3->addItem("5동");
    }

}

void comboBox::on_comboBox_3_currentIndexChanged(int index)
{
    ui->lineEdit->setText("choose one is" + ui->comboBox_2->currentText() + " and " + ui->comboBox_3->currentText() + ".");
}
