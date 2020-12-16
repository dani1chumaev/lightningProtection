#include "puamodel.h"

PUAModel::PUAModel(QObject *parent) : QObject(parent)
{

}

QString PUAModel::getString(PUA pua) {
    switch (pua) {
    case P1:
        return *new QString("P-1");
        break;
    };
}
