#include "mainwindow.h"
#include <QApplication>
#include <string>
#include <iostream>
#include <QInputDialog>
#include <QSpinBox>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
