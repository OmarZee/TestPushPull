#include "mainwindow.h"
#include<QDebug>

#include <QApplication>

int main(int argc, char *argv[])
{
    qDebug() << "Your message here";
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug() << "Your message here";
    return a.exec();


}
