#include "dialog.h"
#include "ui_dialog.h"
#include <QString>
#include <QStringList>
#include<QDebug>
dialog::dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
    QStringList phonebookList;
        phonebookList << "홍 길 동";
        phonebookList << "홍길 동";
        phonebookList << "홍 길동";
        phonebookList << "홍길동";
        phonebookList << "나는 홍길동 이다.";
        phonebookList << "홍길동 형";
        phonebookList << "홍길동 누나";
        phonebookList << "홍길동 아버지";
        phonebookList << "홍길동친구";
        phonebookList << "미디어젠 홍길동 연구원";
        phonebookList << "홍길동 미디어젠 연구원";

        qDebug() << "pb size : " << phonebookList.size();

}

dialog::~dialog()
{
    delete ui;
}
