#include "checkbox.h"
#include "ui_checkbox.h"

CheckBox::CheckBox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CheckBox)
{
    ui->setupUi(this);
}
CheckBox::~CheckBox()
{
    delete ui;
}

void CheckBox::on_pushButton_clicked()
{
    sum = 0;
    int debt;
    int trans = 15000;
    if(ui->checkBox->isChecked())
        sum += 12;
    if(ui->checkBox_2->isChecked())
        sum += 20;
    if(ui->checkBox_3->isChecked())
        sum += 25;
    if(ui->checkBox_4->isChecked())
        sum += 30;
    if(ui->checkBox_5->isCheckable()&&ui->checkBox_6->isCheckable()&&ui->checkBox_7->isCheckable())
        ui->lineEdit_3->clear();


    if(ui->checkBox_5->isChecked()){
        debt = (sum * trans)/3;
    }

    if(ui->checkBox_6->isChecked()){
        debt = (sum * trans)/6;
    }

    if(ui->checkBox_7->isChecked()){
        debt = (sum * trans)/9;
    }
    ui->lineEdit->setText(QString::number(sum) + "만골드");
    ui->lineEdit_2->setText(QString::number((sum) * trans) + "원");
    ui->lineEdit_3->setText(QString::number(debt));
}
void CheckBox::reset(QCheckBox *checkbox){

    checkbox->setEnabled(true);
    checkbox->setChecked(0);

}


void CheckBox::on_pushButton_2_clicked()
{
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(0);
    ui->checkBox_4->setChecked(0);

    reset(ui->checkBox_5);
    reset(ui->checkBox_6);
    reset(ui->checkBox_7);

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
}

void CheckBox::on_checkBox_5_clicked()
{
    if(ui->checkBox_5->isChecked()){
        ui->checkBox_6->setEnabled(false);
        ui->checkBox_7->setEnabled(false);
    }
    else{
        ui->checkBox_6->setEnabled(true);
        ui->checkBox_7->setEnabled(true);
    }

}

void CheckBox::on_checkBox_6_clicked()
{
    if(ui->checkBox_6->isChecked()){
        ui->checkBox_5->setEnabled(false);
        ui->checkBox_7->setEnabled(false);
    }
    else{
        ui->checkBox_5->setEnabled(true);
        ui->checkBox_7->setEnabled(true);
    }
}

void CheckBox::on_checkBox_7_clicked()
{
    if(ui->checkBox_7->isChecked()){
        ui->checkBox_6->setEnabled(false);
        ui->checkBox_5->setEnabled(false);
    }
    else{
        ui->checkBox_6->setEnabled(true);
        ui->checkBox_5->setEnabled(true);
    }
}
