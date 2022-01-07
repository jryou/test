#include "mainwindow.h"
#include <QApplication>
#include <QtCore/QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    int i;
    cout << "input " <<endl;
    cin >> i ;
    cout << "hello : " << i <<endl;

    //MainWindow w;
    //w.show();


    return a.exec();
}
