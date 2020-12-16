#include "singlecabelrod.h"
#include "cmath"

singleCabelRod::singleCabelRod()
{

}

/**
 *
 * @param hx
 * @param rx
 * @return fullHeight B protection
 */

double singleCabelRod::fullHeightB(double hx, double rx) {
    return (hx + 1.85 * rx)/1.7;
}

/**
 *
 * @param hx
 * @param rx
 * @return fullHeight A protection
 */

double singleCabelRod::fullHeightA(double hx, double rx) {
    double h1 = -10.0/17 * (sqrt(pow(hx - 459, 2) - 1156 * rx) - hx - 459);
    double h2 = 10.0/17 * (sqrt(pow(hx - 459, 2) - 1156 * rx) + hx + 459);
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
}

/**
 *
 * @param b
 * @return radius zone protection
 */

double singleCabelRod::radiusZoneProtection(double b){
    return sqrt(pow(0.5 * b, 2) + pow(0.5 * b, 2));
}