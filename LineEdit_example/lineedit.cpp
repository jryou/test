#include "lineedit.h"
#include "ui_lineedit.h"

LineEdit::LineEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LineEdit)
{
    ui->setupUi(this);
}

LineEdit::~LineEdit()
{
    delete ui;
}

void LineEdit::on_pushButton_clicked()
{
    //calc
    name = ui->lineEdit->text();
    math = ui->lineEdit_2->text().toInt();
    eng = ui->lineEdit_3->text().toInt();
    kor = ui->lineEdit_4->text().toInt();

    total = math + eng + kor;
    avg = total/3;

    ui->label_5->setText("kor : " + QString::number(kor) + " eng :" + QString::number(eng) + " math : " + QString::number(math) + " \ntotal & avg : " + QString::number(total) +" & " + QString::number(avg));


}

void LineEdit::on_pushButton_2_clicked()
{
    //close
    this->close();
}
