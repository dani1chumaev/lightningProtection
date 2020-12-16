#ifndef LIGHTNINGPROTECTION_SECONDLIGHTNINGROD_H
#define LIGHTNINGPROTECTION_SECONDLIGHTNINGROD_H


class secondLightningRod
{
public:
    secondLightningRod();

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

#endif //LIGHTNINGPROTECTION_SECONDLIGHTNINGROD_H
