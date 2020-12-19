#ifndef LIGHTNINGPROTECTION_SINGLECABELROD_H
#define LIGHTNINGPROTECTION_SINGLECABELROD_H


class singleCabelRod
{
public:
    singleCabelRod();

    // [hc, rx] вычисление высоты для зоны B
    double fullHeightB(double hx, double rx);
    // [hc, rx] вычисление высоты для зоны А
    double fullHeightA(double hx, double rx);
    // [b] вычисление радиуса зоны защиты
    double radiusZoneProtection(double b);
    // [H0] вычисление высоты зоны защиты для А
    double heightOfZoneProtectionZoneA(double h);
    // [R0] вычисление радиуса зоны защиты на поверхности земли для А
    double radiusOfZoneProtectionZoneA(double h);
    // [Rx] вычисление радиуса зоны защиты на высоте hx для А
    double radiuseHeightProtectionOnHeightZoneA(double h, double hx);
    // [H0] вычисление высоты зоны защиты для Б
    double heightOfZoneProtectionZoneB(double h);
    // [R0] вычисление радиуса зоны защиты на поверхности земли для А
    double radiusOfZoneProtectionZoneB(double h);
    // [Rx] вычисление радиуса зоны защиты на высоте hx для А
    double radiuseHeightProtectionOnHeightZoneB(double h, double hx);


    /*
     * Входные параметры для одиночного молниеотвода
     *
     * hx - высота здания
     * rx - радиус зоны защиты
     * b - ширина здания
     * h - полная высота молниеотвода
     *
     */
    double hx {};
    double rx {};
    double b {};
    double h{};
};

#endif //LIGHTNINGPROTECTION_SINGLECABELROD_H
