#ifndef SINGLELIGHTNINGROD_H
#define SINGLELIGHTNINGROD_H


class singleLightningRod
{
public:
    singleLightningRod();

    // [h] полная высота молниеотвода для зоны A (не болше 150 м) м
    double fullHeightA (double hx, double Rx);
    // [h] полная высота молниеотвода для зоны B (не болше 150 м) м
    double fullHeightB (double hx, double Rx);
    // [h0] высота защиты для зоны A м
    double protectionZoneHeightA (double h);
    // [h0] высота защиты для зоны B м
    double protectionZoneHeightB (double h);
    // [R0] граница защиты для зоны A м
    double protectionZoneBoundaryA (double h);
    // [R0] граница защиты для зоны B м
    double protectionZoneBoundaryB (double h);
    // [Rx] радиус зоны защиты на высоте hх для зоны A м
    //double protectionZoneRadiusAtHeigthHxA (double h, double hx);
    // [Rx] радиус зоны защиты на высоте hх для зоны B м
    //double protectionZoneRadiusAtHeigthHxB (double h, double hx);
    // [Rx] радиус зоны защиты на высоте hx м


    /*
     * Входные параметры для одиночного молниеотвода
     *
     * hx - высота защищаемого здания м
     * L - длина здания м
     * S - ширина здания м
     * l - расстояние от стены здания до молниеотвода (не менее 4 м) м
     */
    double hx {};
    double L {};
    double S {};
    double l {};
    /*
     * Вычисляемые параметры для одиночного молниеотвода
     *
     * h - высота молниеотвода м
     * Rx - радиус зоны защиты на высоте hх м
     * R0 - граница зоны защиты на уровне земли м
     * h0 -  высота зоны защиты м
     */
    //    double h {};
    //    double Rx {};
    //    double h0 {};
    //    double R0 {};

};

#endif // SINGLELIGHTNINGROD_H
