#include "api_test.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    API_test w;
    w.show();

    return a.exec();
}
