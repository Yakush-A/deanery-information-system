#include<QApplication>

#include "mainwindow.h"

int main(int argc, char* argv[])
{
    QApplication mainApp(argc, argv);

    MainWindow mainInterface;

    mainInterface.show();

    return mainApp.exec();
}
