#pragma once
#include <string>

#ifdef RACELIBRARY_EXPORTS
#define RLIB_API __declspec(dllexport)
#else
#define RLIB_API __declspec(dllimport)
#endif

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