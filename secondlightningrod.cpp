#include "secondlightningrod.h"
#include "cmath"

secondLightningRod::secondLightningRod()
{

}

double secondLightningRod::fullHeightB(double hx, double rx) {
    return (hx + 0.14 * rx)/1.06;
}

double secondLightningRod::fullHeightA(double hx, double rx) {
    double h1 = 270 - 2 * sqrt(25 * (729 - 4 * rx) - 158 * hx);
    double h2 = 2 * (sqrt(25 * (729 - 4 * rx) - 158 * hx) + 135);
    //Некая логика по выбору корня
    return 0;
}

double secondLightningRod::radiusZoneProtection(double b) {
    return sqrt(pow(0.5 * b, 2) + pow(0.5 * b, 2));
}