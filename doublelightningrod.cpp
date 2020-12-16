#include "doublelightningrod.h"
#include "cmath"

doublelightningrod::doublelightningrod() {

}

/**
 *
 * @param hc
 * @param rx
 * @return высота молниеотвода зоны защиты А
 */

double doublelightningrod::fullHeightA(double hc, double rx) {
    double h1 = -10.0/17 * (sqrt(pow(hc - 459, 2) - 1156 * rx) - hc - 459);
    double h2 = 10.0/17 * (sqrt(pow(hc - 459, 2) - 1156 * rx) + hc + 459);
    if(h1 < 0){
        if(h2 > 0){
            if (h2 > hс){
                return h2;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        if (h2 < 0) {
            return h1;
        } else {
            if(h1 < hс) {
                if (h2 > hс) {
                    return h2;
                } else {
                    return 0;
                }
            } else{
                if (h2 < hс) {
                    return h1;
                } else {
                    if (h2 > h1){
                        return h2;
                    } else {
                        return h1;
                    }
                }
            }
        }
    }
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