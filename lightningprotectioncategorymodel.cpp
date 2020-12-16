#include "lightningprotectioncategorymodel.h"

LightningProtectionCategoryModel::LightningProtectionCategoryModel(QObject *parent) : QObject(parent)
{

}

QString LightningProtectionCategoryModel::getString(LightningProtectionCategory lightningProtectionCategory) {
    switch (lightningProtectionCategory) {
    case I:
        return *new QString("I");
        break;
    case II:
        return *new QString("II");
        break;
    case III:
        return *new QString("III");
        break;
    case IV:
        return *new QString("IV");
        break;
    case V:
        return *new QString("V");
        break;
    }
}
