#ifndef SINGLELIGHTNINGROD_H
#define SINGLELIGHTNINGROD_H


class singleLightningRod
{
public:
    singleLightningRod();

    // [h] полная высота молниеотвода для зоны A (не болше 150 м) м
    double fullHeightA ();
    // [h] полная высота молниеотвода для зоны B (не болше 150 м) м
    double fullHeightB ();
    // [h0] высота защиты для зоны A м
    double protectionZoneHeightA ();
    // [h0] высота защиты для зоны B м
    double protectionZoneHeightB ();
    // [R0] граница защиты для зоны A м
    double protectionZoneBoundaryA ();
    // [R0] граница защиты для зоны B м
    double protectionZoneBoundaryB ();
    // [Rx] радиус зоны защиты на высоте hх для зоны A м
    double protectionZoneRadiusAtHeigthHxA ();
    // [Rx] радиус зоны защиты на высоте hх для зоны B м
    double protectionZoneRadiusAtHeigthHxB ();
    // [Rx] радиус зоны защиты на высоте hx м
    double protectionZoneRadiusAtHeigthHx ();


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
