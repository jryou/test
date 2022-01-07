#ifndef API_TEST_H
#define API_TEST_H

#include <QMainWindow>

namespace Ui {
class API_test;
}

class API_test : public QMainWindow
{
    Q_OBJECT

public:
    explicit API_test(QWidget *parent = 0);
    ~API_test();

private:
    Ui::API_test *ui;
};

#endif // API_TEST_H
