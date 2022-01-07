#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QMainWindow>

namespace Ui {
class ListWidget;
}

class ListWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit ListWidget(QWidget *parent = 0);
    ~ListWidget();

private slots:

    void on_pushButton_clicked();


    void on_lineEdit_returnPressed();


private:
    Ui::ListWidget *ui;
};

#endif // LISTWIDGET_H
