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

double doubleCabelRod::fullHeightA(double hc, double L) {
    return 1/2.0 * (-sqrt(-8000 * hc + pow(L, 2) + 2840 * L + 3920400) + L + 1980);
}

/**
 *
 * @param hx
 * @param L
 * @return высота молниеотвода зоны защиты B
 */
double doubleCabelRod::fullHeightB(double hc, double L) {
    return (hc  + 0.12 * L) / 1.04;
}

// [h0] высота зоны защиты для A
double doubleCabelRod::heightZoneProtectionZoneA(double h){
    return 0.85 * h;
};
// [r0] вычисление радиуса зоны защиты на поверхности земли для А
double doubleCabelRod::radiusZoneProtectionZoneA(double h){
    return (1.35 - 0.0025 * h) * h;
};
// [rx] вычисление радиуса зоны защиты на высоте hx для А
double doubleCabelRod::radiusZoneProtectionZoneA(double h, double hx){
    return (1.35 - 0.0025 * h)*(h - hx/0.85);
};

// [h0] высота зоны защиты для B
double doubleCabelRod::heightZoneProtectionZoneB(double h){
    return 0.92 * h;
};
// [r0] вычисление радиуса зоны защиты на поверхности земли для B
double doubleCabelRod::radiusZoneProtectionZoneB(double h){
    return 1.7 * h;
};
// [rx] вычисление радиуса зоны защиты на высоте hx для B
double doubleCabelRod::radiusZoneProtectionZoneB(double h, double hx){
    return 1.7 * (h - hx/0.92);
};

// [Hc] высота проседа для A
double doubleCabelRod::heightOfProsedLEZoneA(double h){
    return 0.85 * h;
};
// [Rc] вычисление радиуса зоны защиты на поверхности земли для А
double doubleCabelRod::radiusCLEZoneA(double h){
    return (1.35 - 0.0025 * h)/h;
};
// [Rcx] вычисление радиуса зоны защиты на высоте hx для А
double doubleCabelRod::radiusCXLEZoneA(double h, double hx){
    return (1.35 - 0.0025 * h)*(h - hx/0.85);
};

// [Hc] высота проседа для B
double doubleCabelRod::heightOfProsedLEZoneB(double h){
    return 0.92 * h;
};
// [Rc] вычисление радиуса зоны защиты на поверхности земли для B
double doubleCabelRod::radiusCLEZoneB(double h){
    return 1.7 * h;
};
// [Rcx] вычисление радиуса зоны защиты на высоте hx для B
double doubleCabelRod::radiusCXLEZoneB(double h, double hx){
    return 1.7 * (h - hx/0.92);
};

// [Hc] высота проседа для A при h < L <= 2h
double doubleCabelRod::heightOfProsed1LL2ZoneA(double h0, double L, double h){
    return h0 - (0.14 - 5 * pow(10, -4) * h) * (L - h);
};
// [Rx] высота проседа для A при h < L <= 2h
double doubleCabelRod::radiusXWithStreak1LL2ZoneA(double h0, double L, double hx, double hc){
    return L/2.0 * (h0 - hx)/(h0 - hc);
};
// [Rcx] высота проседа для A при h < L <= 2h
double doubleCabelRod::radiusCX1LL2ZoneA(double r0, double hc, double hx){
    return r0 * (hc - hx) / hc;
};
// [Rc] вычисление радиуса зоны защиты на поверхности земли для А при h < L <= 2h
double doubleCabelRod::radiusC1LL2ZoneA(double h){
    return (1.35 - 0.0025 * h) * h;
};

// [Hc] высота проседа для A при 2h < L <= 4h
double doubleCabelRod::heightOfProsed2LL4ZoneA(double h0, double L, double h){
    return h0 - (0.14 - 5 * pow(10, -4) * h) * (L - h);
};
// [Rx] высота проседа для A при 2h < L <= 4h
double doubleCabelRod::radiusXWithStreak2LL4ZoneA(double h0, double L, double hx, double hc){
    return L/2.0 * (h0 - hx)/(h0 - hc);
};
// [Rcx] высота проседа для A при 2h < L <= 4h
double doubleCabelRod::radiusCX2LL4ZoneA(double rc, double hc, double hx){
    return rc * (hc - hx)/hc;
};
// [Rc] вычисление радиуса зоны защиты на поверхности земли для А при 2h < L <= 4h
double doubleCabelRod::radiusC2LL4ZoneA(double r0, double h, double l){
    return r0 * (1 - (0.2*(l - 2 * h))/h);
};

// [Hc] высота проседа для B при h < L <= 6h
double doubleCabelRod::heightOfProsed1LL6ZoneB(double h0, double L, double h){
    return h0 - 0.12 * (L - h);
};
// [Rx] высота проседа для B при h < L <= 6h
double doubleCabelRod::radiusXWithStreak1LL6ZoneB(double h0, double L, double hx, double hc){
    return L/2.0 * (h0 - hx)/(h0 - hc);
};
// [Rcx] высота проседа для B при h < L <= 6h
double doubleCabelRod::radiusCX1LL6ZoneB(double r0, double hc, double hx){
    return r0 * (hc - hx) / hc;
};
// [Rc] вычисление радиуса зоны защиты на поверхности земли для B при h < L <= 6h
double doubleCabelRod::radiusC1LL6ZoneB(double h){
    return 1.7 * h;
};


