#pragma once
#include "Race.h"

#ifdef RACELIBRARY_EXPORTS
#define RLIB_API __declspec(dllexport)
#else
#define RLIB_API __declspec(dllimport)
#endif

class RLIB_API Air_Race : public Race {
protected:
    int DistReductCoeff;
public:
    Air_Race(int, int, int);
    virtual int get_k();
    double RaceResult() override;
};