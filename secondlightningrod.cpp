#include "secondlightningrod.h"
#include "cmath"

secondLightningRod::secondLightningRod()
{

}

double secondLightningRod::fullHeightB(int hc, int l) {
    return (hc + 0.14 * l)/1.06;
}