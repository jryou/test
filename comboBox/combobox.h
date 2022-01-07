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

private:
    Ui::comboBox *ui;
};

#endif // COMBOBOX_H
