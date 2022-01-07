#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog *ui;
    int data;
    int data1;
    int data2;
    int i;
    int j;
    int k = 0;
    //int gugu[10][10];
    int a;
    int height = 10,width = 10;
    int **gugu = new int*[height];



};

#endif // DIALOG_H
