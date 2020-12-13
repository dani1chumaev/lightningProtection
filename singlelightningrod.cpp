#include "singlelightningrod.h"
#include "cmath"

singleLightningRod::singleLightningRod()
{

}

/**
 * @brief singleLightningRod::fullHeightA
 * @return полная высота молниеотвода для зоны A м
 */
double singleLightningRod::fullHeightA() {
    double Rx = singleLightningRod::protectionZoneRadiusAtHeigthHxA();
    return (1.1 + 0.0024 * hx - sqrt(pow((1.1+0.0024 * hx), 2) - 0.01 * hx - 0.008 * Rx)) / 0.004;
}

/**
 * @brief singleLightningRod::fullHeightB
 * @return полная высота молниеотвода для зоны B м
 */
double singleLightningRod::fullHeightB() {
    double Rx = singleLightningRod::protectionZoneRadiusAtHeigthHxB();
    return (Rx + 1.63 * hx) / 1.5;
}

/**
 * @brief singleLightningRod::protectionZoneHeightA
 * @return высота защиты для зоны A м
 */
double singleLightningRod::protectionZoneHeightA() {
    double h = singleLightningRod::fullHeightA();
    return 0.85 * h;
}

/**
 * @brief singleLightningRod::protectionZoneHeightB
 * @return высота защиты для зоны B м
 */
double singleLightningRod::protectionZoneHeightB() {
    double h = singleLightningRod::fullHeightB();
    return 0.92 * h;
}

/**
 * @brief singleLightningRod::protectionZoneBoundaryA
 * @return граница защиты для зоны A м
 */
double singleLightningRod::protectionZoneBoundaryA () {
    double h = singleLightningRod::fullHeightA();
    return (1.1 - 0.002 * h) * h;
}

/**
 * @brief singleLightningRod::protectionZoneBoundaryB
 * @return граница защиты для зоны B м
 */
double singleLightningRod::protectionZoneBoundaryB () {
    double h = singleLightningRod::fullHeightB();
    return 1.5 * h;
}

/**
 * @brief singleLightningRod::protectionZoneRadiusAtHeigthHxA
 * @return радиус зоны защиты на высоте hх для зоны A м
 */
double singleLightningRod::protectionZoneRadiusAtHeigthHxA () {
    double h = singleLightningRod::fullHeightA();
    return (1.1 - 0.002 * h) * (int (h - (hx / 0.85)));
}

/**
 * @brief singleLightningRod::protectionZoneRadiusAtHeigthHxB
 * @return радиус зоны защиты на высоте hх для зоны B м
 */
double singleLightningRod::protectionZoneRadiusAtHeigthHxB () {
    double h = singleLightningRod::fullHeightB();
    return 1.5 * (h - (hx / 0.92));
}

/**
 * @brief singleLightningRod::protectionZoneRadiusAtHeigthHx
 * @return радиус зоны защиты на высоте hx м
 */
double singleLightningRod::protectionZoneRadiusAtHeigthHx () {
    return sqrt(pow(L / 2, 2) + pow(S + l, 2));
}
