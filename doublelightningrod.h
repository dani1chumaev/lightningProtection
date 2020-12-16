#ifndef LIGHTNINGPROTECTION_DOUBLELIGHTNINGROD_H
#define LIGHTNINGPROTECTION_DOUBLELIGHTNINGROD_H


class doublelightningrod
{
public:
    doublelightningrod();

    // [hc, L] вычисление высоты для зоны B
    double fullHeightB(double hc, double L);
    // [hc, L] вычисление высоты для зоны А
    double fullHeightA(double hc, double L);
    // [L] радиус зоны защиты
    double radiusZoneProtection(double L);

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

#endif //LIGHTNINGPROTECTION_SINGLECABELROD_H
