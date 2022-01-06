#ifndef LINEEDIT_H
#define LINEEDIT_H
#include <QDebug>
#include <QMainWindow>

namespace Ui {
class LineEdit;
}

class LineEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit LineEdit(QWidget *parent = 0);
    ~LineEdit();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::LineEdit *ui;
    QString name;
    int kor;
    int eng;
    int math;

    int total;
    int avg;

};

#endif // LINEEDIT_H
