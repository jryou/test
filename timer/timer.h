#ifndef TIMER_H
#define TIMER_H

#include <QMainWindow>

namespace Ui {
class timer;
}

class timer : public QMainWindow
{
    Q_OBJECT

public:
    explicit timer(QWidget *parent = 0);
    ~timer();

private:
    Ui::timer *ui;
};

#endif // TIMER_H
