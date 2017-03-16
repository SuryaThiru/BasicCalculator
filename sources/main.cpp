/*
 *  Basic Calculator V 1.0
 *  Creator : Surya K
 */


#include "mainwindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("Calculator");
    w.setWindowIcon(QIcon(":/icon/icon/icon_calculator.png"));
    w.show();

    return a.exec();
}
