#include "listwidget.h"
#include "ui_listwidget.h"
#include <listwidget.h>
ListWidget::ListWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ListWidget)
{
    ui->setupUi(this);
}

ListWidget::~ListWidget()
{
    delete ui;
}


void ListWidget::on_pushButton_clicked()
{
    ui->listWidget->addItem(ui->lineEdit->text());
    //ui->lineEdit->setText("");
}



void ListWidget::on_lineEdit_returnPressed()
{
    ui->listWidget->addItem(ui->lineEdit->text());
    ui->lineEdit->clear();
}
