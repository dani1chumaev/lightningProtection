#include "locationmodel.h"

LocationModel::LocationModel(QObject *parent) : QObject(parent)
{

}

QString LocationModel::getString(Location location) {
    switch (location) {
    case Whole:
        return *new QString("По всей территории");
        break;
    case LightningAverage10:
        return *new QString("В местах со среднегодовой грозовой деятельностью 10 ч и более");
        break;
    case LightningAverage20:
        return *new QString("В местах со среднегодовой грозовой деятельностью 20 ч и более");
        break;
    }
}
