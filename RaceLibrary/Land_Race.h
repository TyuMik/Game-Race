#pragma once
#include "Race.h"
#include "Spec.h"

class RLIB_API Land_Race : public Race {
protected:
    double RestTime_1;
    double RestTime_2;
    double RestTime_3;
    int MovementTime;

public:
    Land_Race(int, int, double, double, double, int);
    double get_rt_1();
    double get_rt_2();
    double get_rt_3();
    int get_mt();
    double RaceResult() override;
};