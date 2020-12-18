#include "mainwindow.h"

#include <QApplication>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QFontDatabase fontDB;
    fontDB.addApplicationFont(":/font/font/latinmodern-math.otf");
    QStringList list = fontDB.families();


    w.show();
    return a.exec();
}


