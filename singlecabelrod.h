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

    /*
     * Входные параметры для одиночного молниеотвода
     *
     * hx - высота здания
     * rx - радиус зоны защиты
     * b - ширина здания
     *
     */
    double hx {};
    double rx {};
    double b {};
};

#endif //LIGHTNINGPROTECTION_SINGLECABELROD_H
