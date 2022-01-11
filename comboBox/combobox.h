#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QMainWindow>

namespace Ui {
class comboBox;
}

class comboBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit comboBox(QWidget *parent = 0);
    ~comboBox();

private slots:
    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

private:
    Ui::comboBox *ui;
};

#endif // COMBOBOX_H
