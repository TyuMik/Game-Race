#include "Carpet.h"

Carpet::Carpet(int dist) : Air_Race(dist, 10, 0) { name = "Ковёр-самолёт"; }

int Carpet::get_k() {
    if (get_dist() < 1000) {
        DistReductCoeff = 1;
    }
    else
        if (get_dist() < 5000) {
            DistReductCoeff = 3;
        }
        else
            if (get_dist() < 10000) {
                DistReductCoeff = 10;
            }
            else {
                DistReductCoeff = 5;
            }
    return DistReductCoeff;
}