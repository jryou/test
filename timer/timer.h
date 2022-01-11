#ifndef TIMER_H
#define TIMER_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
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
    QTimer* timer1;
private slots:
    int tupdate();
};

#endif // TIMER_H
