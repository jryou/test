#include "combobox.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    comboBox w;
    w.show();

    return a.exec();
}
