#include "doublecabelrod.h"
#include "cmath"
#include "iostream"

doubleCabelRod::doubleCabelRod() {

}

/**
 *
 * @param hx
 * @param L
 * @return высота молниеотвода зоны защиты А
 */

double doubleCabelRod::fullHeightA(double hx, double L) {
    return 1/2.0 * (sqrt(8000 * hx + pow(L, 2) - 2840 * L + 3920400) + L - 1980);
}

/**
 *
 * @param hx
 * @param L
 * @return высота молниеотвода зоны защиты B
 */
double doubleCabelRod::fullHeightB(double hx, double L) {
    return (hx  + 0.12 * L) / 1.04;
}


