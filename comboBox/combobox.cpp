#include "combobox.h"
#include "ui_combobox.h"

comboBox::comboBox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::comboBox)
{
    ui->setupUi(this);
}

comboBox::~comboBox()
{
    delete ui;
}
