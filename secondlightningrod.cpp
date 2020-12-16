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
    if(h1 < 0){
        if(h2 > 0){
            if (h2 > hx){
                return h2;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        if (h2 < 0) {
            return h1;
        } else {
            if(h1 < hx) {
                if (h2 > hx) {
                    return h2;
                } else {
                    return 0;
                }
            } else{
                if (h2 < hx) {
                    return h1;
                } else {
                    if (h2 > h1){
                        return h2;
                    } else {
                        return h1;
                    }
                }
            }
        }
    }


    return 0;
}

double secondLightningRod::radiusZoneProtection(double b) {
    return sqrt(pow(0.5 * b, 2) + pow(0.5 * b, 2));
}