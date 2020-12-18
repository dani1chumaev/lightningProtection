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
