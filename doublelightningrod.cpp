#include "doublelightningrod.h"
#include "cmath"
#include "iostream"

doublelightningrod::doublelightningrod() {

}

/**
 *
 * @param hc
 * @param rx
 * @return высота молниеотвода зоны защиты А
 */

double doublelightningrod::fullHeightA(double hc, double rx) {
    return -10.0/17 * (sqrt(pow(hc - 459, 2) - 1156 * rx) - hc - 459);;
}

/**
 *
 * @param hc
 * @param L
 * @return высота молниеотвода зоны защиты B
 */
double doublelightningrod::fullHeightB(double hc, double L) {
    return (hc + 0.14 * L) / 1.13;
}


/**
 *
 * @param L
 * @return radius zone protection
 */

double doublelightningrod::radiusZoneProtection(double L) {
    return sqrt(pow(0.5 * L, 2) + pow(0.5 * L, 2));
}
