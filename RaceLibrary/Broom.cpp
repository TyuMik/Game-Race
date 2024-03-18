#include "Broom.h"

Broom::Broom(int dist) : Air_Race(dist, 20, 0) { name = "Метла"; }

int Broom::get_k() {
    DistReductCoeff = get_dist() * 1 / 1000;
    return DistReductCoeff;
}