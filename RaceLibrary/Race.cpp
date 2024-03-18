#include "Race.h"

Race::Race() : Distance(0), Velocity(0), race_result(0) { name = "race"; }

std::string Race::get_name() { return name; }

int Race::get_dist() { return Distance; }

int Race::get_V() { return Velocity; }

double Race::RaceResult() { return race_result; }