#include "Land_Race.h"

Land_Race::Land_Race(int dist, int V, double rt_1, double rt_2, double rt_3, int mt) {
    this->Distance = dist;
    this->Velocity = V;
    this->RestTime_1 = rt_1;
    this->RestTime_2 = rt_2;
    this->RestTime_3 = rt_3;
    this->MovementTime = mt;
}

double Land_Race::get_rt_1() { return RestTime_1; }
double Land_Race::get_rt_2() { return RestTime_2; }
double Land_Race::get_rt_3() { return RestTime_3; }
int Land_Race::get_mt() { return MovementTime; }

double Land_Race::RaceResult() {
    int num_stops = (get_dist() / get_V()) / get_mt();
    switch (num_stops) {
    case(0):
        race_result = static_cast<double>(get_dist()) / static_cast<double>(get_V());
        break;
    case(1):
        if ((get_dist() - get_V() * get_mt() * num_stops) == 0) {
            race_result = static_cast<double>(get_dist()) / static_cast<double>(get_V());
        }
        else {
            race_result = (static_cast<double>(get_dist()) / static_cast<double>(get_V())) + get_rt_1();
        }
        break;
    case(2):
        if ((get_dist() - get_V() * get_mt() * num_stops) == 0) {
            race_result = (static_cast<double>(get_dist()) / static_cast<double>(get_V())) + get_rt_1();
        }
        else {
            race_result = (static_cast<double>(get_dist()) / static_cast<double>(get_V())) + get_rt_1() + get_rt_2();
        }
        break;
    default:
        if ((get_dist() - get_V() * get_mt() * num_stops) == 0) {
            race_result = (static_cast<double>(get_dist()) / static_cast<double>(get_V())) + get_rt_1() + get_rt_2() + static_cast<double>((num_stops - 3) * get_rt_3());
        }
        else {
            race_result = (static_cast<double>(get_dist()) / static_cast<double>(get_V())) + get_rt_1() + get_rt_2() + static_cast<double>((num_stops - 2) * get_rt_3());
        }
        break;
    }
    return race_result;
}