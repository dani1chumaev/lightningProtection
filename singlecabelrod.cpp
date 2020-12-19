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
//    return -1/40.0 * sqrt(pow(10800 - 17 * hx, 2) - 640000 * rx) + 17 * hx/40 + 270;
    return -10.0/17 * (sqrt(pow(hx - 459, 2) - 1156 * rx) - hx - 459);
//    return -1/50.0 * sqrt(-1000000 * rx + 441 * pow(hx, 2) - 573000 * hx + 182250000) + 21*hx/50 + 270;
}

/**
 *
 * @param b
 * @return radius zone protection
 */

double singleCabelRod::radiusZoneProtection(double b){
    return sqrt(pow(0.5 * b, 2) + pow(0.5 * b, 2));
}

double singleCabelRod::heightOfZoneProtectionZoneA(double h) {
    return 0.85 * h;
}

double singleCabelRod::radiusOfZoneProtectionZoneA(double h) {
    return (1.35 - 0.0025 * h) * h;
}

double singleCabelRod::radiuseHeightProtectionOnHeightZoneA(double h, double hx) {
    return (1.35 - 0.0025 * h) * (h - hx * 0.85);
}

double singleCabelRod::heightOfZoneProtectionZoneB(double h) {
    return 0.92 * h;
}

double singleCabelRod::radiusOfZoneProtectionZoneB(double h) {
    return 1.7 * h;
}

double singleCabelRod::radiuseHeightProtectionOnHeightZoneB(double h, double hx) {
    return 1.7 * (h - hx * 0.92);
}
