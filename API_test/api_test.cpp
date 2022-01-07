#include "api_test.h"
#include "ui_api_test.h"

API_test::API_test(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::API_test)
{
    ui->setupUi(this);
}

API_test::~API_test()
{
    delete ui;
}
