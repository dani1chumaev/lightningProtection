#include "puamodel.h"

PUAModel::PUAModel(QObject *parent) : QObject(parent)
{

}

QString PUAModel::getString(PUA pua) {
    switch (pua) {
    case P1:
        return *new QString("П-I");
        break;
    case P2:
        return *new QString("П-II");
        break;
    case P2a:
        return *new QString("П-IIа");
        break;
    case P3:
        return *new QString("П-III");
        break;
    case B1:
        return *new QString("В-I");
        break;
    case B1a:
        return *new QString("В-Iа");
        break;
    case B1b:
        return *new QString("В-Iб");
        break;
    case B1g:
        return *new QString("В-Iг");
        break;
    case B2:
        return *new QString("В-II");
        break;
    case B2a:
        return *new QString("В-IIа");
        break;
    };
}
