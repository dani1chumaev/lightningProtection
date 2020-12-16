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
