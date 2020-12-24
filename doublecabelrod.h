#ifndef LIGHTNINGPROTECTION_DOUBLECABELROD_H
#define LIGHTNINGPROTECTION_DOUBLECABELROD_H

class doubleCabelRod
{

public:
    doubleCabelRod();

    // [hc, L] вычисление высоты для зоны B
    double fullHeightB(double hc, double L);
    // [hc, L] вычисление высоты для зоны А
    double fullHeightA(double hc, double L);
    // [h0] высота зоны защиты для A
    double heightZoneProtectionZoneA(double h);
    // [r0] вычисление радиуса зоны защиты на поверхности земли для А
    double radiusZoneProtectionZoneA(double h);
    // [rx] вычисление радиуса зоны защиты на высоте hx для А
    double radiusZoneProtectionZoneA(double h, double hx);

    // [h0] высота зоны защиты для B
    double heightZoneProtectionZoneB(double h);
    // [r0] вычисление радиуса зоны защиты на поверхности земли для B
    double radiusZoneProtectionZoneB(double h);
    // [rx] вычисление радиуса зоны защиты на высоте hx для B
    double radiusZoneProtectionZoneB(double h, double hx);

    // [Hc] высота проседа для A
    double heightOfProsedLEZoneA(double h);
    // [Rc] вычисление радиуса зоны защиты на поверхности земли для А
    double radiusCLEZoneA(double h);
    // [Rcx] вычисление радиуса зоны защиты на высоте hx для А
    double radiusCXLEZoneA(double h, double hx);

    // [Hc] высота проседа для B
    double heightOfProsedLEZoneB(double h);
    // [Rc] вычисление радиуса зоны защиты на поверхности земли для B
    double radiusCLEZoneB(double h);
    // [Rcx] вычисление радиуса зоны защиты на высоте hx для B
    double radiusCXLEZoneB(double h, double hx);

    // [Hc] высота проседа для A при h < L <= 2h
    double heightOfProsed1LL2ZoneA(double h0, double L, double h);
    // [Rx] высота проседа для A при h < L <= 2h
    double radiusXWithStreak1LL2ZoneA(double h0, double L, double hx, double hc);
    // [Rcx] высота проседа для A при h < L <= 2h
    double radiusCX1LL2ZoneA(double r0, double hc, double hx);
    // [Rc] вычисление радиуса зоны защиты на поверхности земли для А при h < L <= 2h
    double radiusC1LL2ZoneA(double h);

    // [Hc] высота проседа для A при 2h < L <= 4h
    double heightOfProsed2LL4ZoneA(double h0, double L, double h);
    // [Rx] высота проседа для A при 2h < L <= 4h
    double radiusXWithStreak2LL4ZoneA(double h0, double L, double hx, double hc);
    // [Rcx] высота проседа для A при 2h < L <= 4h
    double radiusCX2LL4ZoneA(double rc, double r0, double hc, double hx);
    // [Rc] вычисление радиуса зоны защиты на поверхности земли для А при 2h < L <= 4h
    double radiusC2LL4ZoneA(double r0, double h, double l);

    // [Hc] высота проседа для B при h < L <= 6h
    double heightOfProsed1LL6ZoneB(double h0, double L, double h);
    // [Rx] высота проседа для B при h < L <= 6h
    double radiusXWithStreak1LL6ZoneB(double h0, double L, double hx, double hc);
    // [Rcx] высота проседа для B при h < L <= 6h
    double radiusCX1LL6ZoneB(double r0, double hc, double hx);
    // [Rc] вычисление радиуса зоны защиты на поверхности земли для B при h < L <= 6h
    double radiusC1LL6ZoneB(double h);

    /*
     * Входные параметры для одиночного молниеотвода
     *
     * hc - высота здания
     * L - расстояние между двумя молнеотводами
     *
     */

    double hc {};
    double L {};
};


#endif //LIGHTNINGPROTECTION_DOUBLECABELROD_H
