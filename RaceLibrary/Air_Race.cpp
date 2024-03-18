#include "Air_Race.h"

Air_Race::Air_Race(int dist, int V, int k) {
    this->Distance = dist;
    this->Velocity = V;
    this->DistReductCoeff = k;
}

int Air_Race::get_k() { return DistReductCoeff; }

double Air_Race::RaceResult() {
    race_result = static_cast<double>(get_dist()) * (1.0 - (get_k() / 100.0)) / static_cast<double>(get_V());
    return race_result;
}