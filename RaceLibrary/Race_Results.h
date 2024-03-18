#pragma once
#include <string>

#ifdef RACELIBRARY_EXPORTS
#define RLIB_API __declspec(dllexport)
#else
#define RLIB_API __declspec(dllimport)
#endif

class RLIB_API Race_Results {
protected:
    std::string race_name;
    double race_result;
public:
    Race_Results();
    void set_race_name(std::string);
    void set_race_result(double);
    std::string get_race_name();
    double get_race_result();
    void sort(Race_Results*, int);
};