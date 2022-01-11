#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>

namespace Ui {
class dialog;
}

class dialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit dialog(QWidget *parent = 0);
    ~dialog();

private:
    Ui::dialog *ui;

private:
    QStringList QStringList_filter(const QStringList *that,const QRegExp &rx);
    QStringList regExp(const QStringList *that);
};


#endif // DIALOG_H
