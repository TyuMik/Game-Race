#pragma once
#include <string>
#include "Spec.h"

class RLIB_API Race {
protected:
    int Distance;
    int Velocity;
    std::string name;
    double race_result;
public:
    Race();
    std::string get_name();
    int get_dist();
    int get_V();
    virtual double RaceResult();
};