#include "refractorinessmodel.h"

RefractorinessModel::RefractorinessModel(QObject *parent) : QObject(parent)
{

}

QString RefractorinessModel::getString(Refractoriness refractoriness) {
    switch (refractoriness) {
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
