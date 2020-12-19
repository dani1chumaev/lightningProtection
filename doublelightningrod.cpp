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

double doublelightningrod::heightOfZoneProtectionLEZoneA(double h){
    return 0.85 * h;
};

double doublelightningrod::radiusOfZoneProtectionLEZoneA(double h){
    return (1.1 - 0.002 * h) * h;
};

double doublelightningrod::radiuseHeightProtectionOnHeightLEZoneA(double h, double hx){
    return (1.1 - 0.002 * h) * (h - hx * 0.85);
};

double doublelightningrod::heightOfZoneProtectionLLZoneA(double h, double l){
    return 0.85 * h - (0.17 + 3 * 10 - 4 * h) * (l - h);
};

double doublelightningrod::radiusOfZoneProtectionLLZoneA(double h){
    return (1.1 - 0.002 * h) * h;
};

double doublelightningrod::radiuseHeightProtectionOnHeightLLZoneA(double h, double hc, double hx){
    return (1.1 - 0.002 * h) * h * (hc - hx)/hc;
};

double doublelightningrod::heightOfZoneProtectionLEZoneB(double h){
    return 0.92 * h;
};

double doublelightningrod::radiusOfZoneProtectionLEZoneB(double h){
    return 1.5 * h;
};

double doublelightningrod::radiuseHeightProtectionOnHeightLEZoneB(double h, double hx){
    return 1.5 * (h - hx * 0.92);
};

double doublelightningrod::heightOfZoneProtectionLLZoneB(double h, double l){
    return 0.92 * h - 0.14 * (l - h);
};

double doublelightningrod::radiusOfZoneProtectionLLZoneB(double h){
    return 1.5 * h;
};

double doublelightningrod::radiuseHeightProtectionOnHeightLLZoneB(double h, double r0, double hc, double hx){
    return r0 * (hc - hx * hc);
};