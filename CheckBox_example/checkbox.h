#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QMainWindow>
#include <QCheckBox>
namespace Ui {
class CheckBox;
}

class CheckBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit CheckBox(QWidget *parent = 0);
    ~CheckBox();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_5_clicked();

    void on_checkBox_6_clicked();

    void on_checkBox_7_clicked();

    void reset(QCheckBox *checkbox);

private:
    Ui::CheckBox *ui;
    int sum;

};

#endif // CHECKBOX_H
