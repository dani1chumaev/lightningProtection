#include "zonetypemodel.h"

ZoneTypeModel::ZoneTypeModel(QObject *parent) : QObject(parent)
{

}

QString ZoneTypeModel::getString(ZoneType zoneType) {
    switch (zoneType) {
    case A:
        return *new QString("Зона A");
        break;
    case B:
        return *new QString("Зона B");
        break;
    }

}
