#include "thunderstormActivity.h"
#include "cmath"

thunderStormActivity::thunderStormActivity()
{

}

/**
 *
 * @param H
 * @return
 * @brief thunderStormActivity::averageOfLighthingStrikes(int H)
 * @return среднегодовое число ударов молниина 1 км^2 земной поверхности, n
 */
double thunderStormActivity::averageOfLighthingStrikes(int H) {
    if (10 <= H && H < 20) {return 1;}
    if (20 <= H && H < 40) {return 3;}
    if (40 <= H && H < 60) {return 6;}
    if (60 <= H && H < 80) {return 9;}
    if (80 <= H) {return 12;}

}

/**
 *
 * @param n
 * @param hx
 * @param L
 * @param S
 * @return
 * @brief thunderStormActivity::averageOfLighthingStrikes(int n, double hx, double L, double S)
 * @return ожидаемое количество поражений в год N
 */
double thunderStormActivity::expectedNumberLighthingStrikes(int n, double hx, double L, double S){
    return (S + 6 * hx) * (L + 6 * hx) * n * pow(10, -6);
}