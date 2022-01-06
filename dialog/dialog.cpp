#include "dialog.h"
#include "ui_dialog.h"
#include <QLabel>
#include <QDebug>
#include<QString>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    data1 = 10;
    data2 = 3;
    // 산술 연산
    qDebug() << "data1 + data2 = " << data1 + data2;
    qDebug() << "data1 - data2 = " << data1 - data2;
    qDebug() << "data1 * data2 = " << data1 * data2;
    qDebug() << "data1 / data2 = " << data1 / data2;
    qDebug() << "data1 % data2 = " << data1 % data2;

    // 논리 연산
    qDebug() << QString("(data1 < 11) && (data2 > 2) = %1").arg((data1 < 11) && (data2 > 2));
    qDebug() << QString("(data1 < 11) || (data2 < 2) = %1").arg((data1 < 11) || (data2 < 2));
    qDebug() << QString("!(data1 < 11) = %1").arg(!(data1 < 11));

    //int* gugu = new int[9];
    for(i = 0; i<10 ;i++){
        qDebug() << " 단 수 : " << i;
        for(j = 0; j< 10; j++){
            gugu[i][j] = i * j;
            qDebug() << "i = " << gugu[i][j];
            //ui->textBrowser->append(QString::number(gugu[i][j]));
        }
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
}

void Dialog::on_pushButton_2_clicked()
{
    ui->lineEdit->setStyleSheet("font-size : 15px; color :white; background-color: black");
    ui->lineEdit->setText("qt test");
}

void Dialog::on_pushButton_3_clicked()
{
    ui->lineEdit->setStyleSheet("background-color: white");
    ui->lineEdit->clear();
}

void Dialog::on_pushButton_4_clicked()
{
    data = 100;
    //qDebug() << data;
    data1 = 10;
    data2 = 3;



    ui->textBrowser->clear();

//    for(i = 0; i<10 ;i++){
//        qDebug() << " 단 수 : " << i;
//        for(j = 0; j< 10; j++){
//            gugu[i][j] = i * j;
//            qDebug() << "i = " << gugu[i][j];
//            //ui->textBrowser->append(QString::number(gugu[i][j]));
//        }
//    }

    j = 0;
    i = i+ 1;
    if(k > 9){
        ui->textBrowser->setText(QString::number(k));
    }
    else{
        for(j = 1; j < 10; j++){
            ui->textBrowser->append(QString::number(gugu[k][j]));
        }

    }
    k++;

    //ui->textBrowser->setText(QString("!(data1 < 11) = %1").arg(!(data1 < 11)));
    //ui->lineEdit->setText(QString::number(data));


}
