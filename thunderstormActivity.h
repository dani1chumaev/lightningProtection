#ifndef THUNDERSTORMACTIVITY
#define THUNDERSTORMACTIVITY

class thunderStormActivity
{
public:
    thunderStormActivity();

    // [H] интенсивность грозовой деятельности в год
    static double averageOfLighthingStrikes (int H);
    // [n, hx, L, S]
    static double expectedNumberLighthingStrikes (int n, double hx, double L, double S);

    /*
     * Входные параметры для определить ожидаемое количество поражений молнией в
     * год зданий и сооружений, не оборудованных молниезащитой
     *
     * hx - высота защищаемого здания м
     * h - интенсивность грозовой деятельности в год, в часах
     * L - длина здания м
     * S - ширина здания м
     *
     */

    double hx {};
    double H {};
    double L {};
    double S {};

};

#endif
