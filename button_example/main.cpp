#include "button_example.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    button_example w;
    w.show();

    return a.exec();
}
