#include "mainwindow.h"
#include <iostream>
#include <singlelightningrod.h>
#include <doublelightningrod.h>
#include <singlecabelrod.h>
#include <QApplication>
#include "cmath"


enum Methods {
    singleCabel,
    doubleLightning,
    singleLightning
};

void singleCabelRod_method(){
    //TODO посмотреть входные данные и расчетные формулы. Ответы не совпадают

    singleCabelRod singleCabel;

    double a = 30;
    double b = 30;
    double hx = 75;

    double rx = 0.5 * sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "For method a " << singleCabel.fullHeightA(hx, rx) << "\n";

    std::cout << "For method b " << singleCabel.fullHeightB(hx, rx) << "\n";

}

void doubleLightningrod_method(){
    //TODO посмотреть входные данные и расчетные формулы. Ответы не совпадают

    double a = 30;
    double b = 30;
    double hx = 75;

    double l = 10; // Раастояние между молниеотводами
    doublelightningrod doublelightning;

    double rx = 0.5 * sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "For method a " << doublelightning.fullHeightA(hx , rx) << "\n";

    std::cout << "For method b " << doublelightning.fullHeightB(hx, rx) << "\n";
};

void singleLightningRod_method(){
    double a = 30;
    double b = 30;
    double hx = 75;

    double rx = 0.5 * sqrt(pow(a, 2) + pow(b, 2));

    singleLightningRod singleLightning;
    std::cout << "For method a " << singleLightning.fullHeightA(hx, rx) << "\n";

    std::cout << "For method b " << singleLightning.fullHeightB(hx, rx) << "\n";
}


void swichCase(Methods method){
    switch(method){
        case singleCabel:
            singleCabelRod_method();
            break;
        case singleLightning:
            singleLightningRod_method();
            break;
        case doubleLightning:
            doubleLightningrod_method();
            break;

    }
}

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();

    swichCase(singleCabel);
}


