#ifndef LIGHTNINGPROTECTION_DOUBLELIGHTNINGROD_H
#define LIGHTNINGPROTECTION_DOUBLELIGHTNINGROD_H


class doublelightningrod
{
public:
    doublelightningrod();

    // [hc, rx] вычисление высоты для зоны B
    double fullHeightB(double hc, double rx);
    // [hc, rx] вычисление высоты для зоны А
    double fullHeightA(double hc, double rx);
    // [L] радиус зоны защиты
    double radiusZoneProtection(double L);

    // [H0] вычисление высоты зоны защиты для А
    double heightOfZoneProtectionLEZoneA(double h);
    // [R0] вычисление радиуса зоны защиты на поверхности земли для А
    double radiusOfZoneProtectionLEZoneA(double h);
    // [Rx] вычисление радиуса зоны защиты на высоте hx для А
    double radiuseHeightProtectionOnHeightLEZoneA(double h, double hx);

    // [H0] вычисление высоты зоны защиты для А
    double heightOfZoneProtectionLLZoneA(double h, double l);
    // [R0] вычисление радиуса зоны защиты на поверхности земли для А
    double radiusOfZoneProtectionLLZoneA(double h);
    // [Rx] вычисление радиуса зоны защиты на высоте hx для А
    double radiuseHeightProtectionOnHeightLLZoneA(double h, double hc, double hx);

    // [H0] вычисление высоты зоны защиты для B
    double heightOfZoneProtectionLEZoneB(double h);
    // [R0] вычисление радиуса зоны защиты на поверхности земли для B
    double radiusOfZoneProtectionLEZoneB(double h);
    // [Rx] вычисление радиуса зоны защиты на высоте hx для B
    double radiuseHeightProtectionOnHeightLEZoneB(double h, double hx);

    // [H0] вычисление высоты зоны защиты для B
    double heightOfZoneProtectionLLZoneB(double h, double l);
    // [R0] вычисление радиуса зоны защиты на поверхности земли для B
    double radiusOfZoneProtectionLLZoneB(double h);
    // [Rx] вычисление радиуса зоны защиты на высоте hx для B
    double radiuseHeightProtectionOnHeightLLZoneB(double h, double r0, double hc, double hx);


    /*
     * Входные параметры для одиночного молниеотвода
     *
     * hc - высота здания
     * rx - радиус зоны защиты
     * L - расстояние между двумя молнеотводами
     *
     */

    double rx {};
    double hc {};
    double L {};
};

#endif //LIGHTNINGPROTECTION_SINGLECABELROD_H
