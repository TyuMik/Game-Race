#pragma once
#include "Race.h"
#include "Spec.h"

class RLIB_API Air_Race : public Race {
protected:
    int DistReductCoeff;
public:
    Air_Race(int, int, int);
    virtual int get_k();
    double RaceResult() override;
};