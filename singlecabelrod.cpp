#include "singlecabelrod.h"
#include "cmath"
#include "iostream"

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
    return (rx + 1.85 * hx)/1.7;
}

/**
 *
 * @param hx
 * @param rx
 * @return fullHeight A protection
 */

double singleCabelRod::fullHeightA(double hx, double rx) {
    return -10.0/17 * (sqrt(pow(hx * 100 - 459, 2) - 1156 * rx) - hx * 100 - 459)/100;
}

/**
 *
 * @param b
 * @return radius zone protection
 */

double singleCabelRod::radiusZoneProtection(double b){
    return sqrt(pow(0.5 * b, 2) + pow(0.5 * b, 2));
}