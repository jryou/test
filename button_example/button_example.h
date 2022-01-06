#ifndef BUTTON_EXAMPLE_H
#define BUTTON_EXAMPLE_H

#include <QMainWindow>

namespace Ui {
class button_example;
}

class button_example : public QMainWindow
{
    Q_OBJECT

public:
    explicit button_example(QWidget *parent = 0);
    ~button_example();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::button_example *ui;
};

#endif // BUTTON_EXAMPLE_H
