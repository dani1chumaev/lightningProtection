#include "doublelightningrod.h"
#include "cmath"
#include "iostream"

doublelightningrod::doublelightningrod() {

}

/**
 *
 * @param hx
 * @param rx
 * @return высота молниеотвода зоны защиты А
 */

double doublelightningrod::fullHeightA(double hx, double L) {
    return 1.0/6 * (sqrt(3) * sqrt(40000 * hx + 3 * pow(L, 2) - 13600 * L + 34680000) + 3 * L - 10200);
}

/**
 *
 * @param hx
 * @param L
 * @return высота молниеотвода зоны защиты B
 */
double doublelightningrod::fullHeightB(double hx, double L) {
    return (hx + 0.14 * L) / 1.06;
}


/**
 *
 * @param L
 * @return radius zone protection
 */

double doublelightningrod::radiusZoneProtection(double L) {
    return sqrt(pow(0.5 * L, 2) + pow(0.5 * L, 2));
}
