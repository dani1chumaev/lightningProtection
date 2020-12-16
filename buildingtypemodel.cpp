#include "buildingtypemodel.h"

BuildingTypeModel::BuildingTypeModel(QObject *parent) : QObject(parent)
{

}

QString BuildingTypeModel::getString(Building building) {
    switch (building) {
    case Common:
        return *new QString("Обычные здания и сооружения");
        break;
    case Open:
        return *new QString("Наружные установки и открытые склады");
        break;
    case Public:
        return *new QString("Общественные здания");
        break;
    case Towering:
        return *new QString("Здания, возвышающиеся на 25 м над высотой окружающих зданий"
                            " в радиусе 400 м, отдельно стоящие здания высотой более 30 м,"
                            " удаленные от других зданий более чем на 400 м");
        break;
    case TallTower:
        return *new QString("Дымовые трубы, водонапорные башни, вышки высотой 15 м и более");
        break;
    }
}
