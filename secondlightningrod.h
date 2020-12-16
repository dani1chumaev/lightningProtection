#ifndef LIGHTNINGPROTECTION_SECONDLIGHTNINGROD_H
#define LIGHTNINGPROTECTION_SECONDLIGHTNINGROD_H


class secondLightningRod
{
public:
    secondLightningRod();

    // [hc, h] вычисление растояния между молниеотводами
    double fullHeightB(int hc, int l);


    /*
     * Входные параметры для одиночного молниеотвода
     *
     * hc - высота зоны защиты на середине расстояния между молниеотводами
     * h - высота молниеотвода
     *
     */
    double hc {};
    double h {};
    double S {};
    double l {};

};


#endif //LIGHTNINGPROTECTION_SECONDLIGHTNINGROD_H
