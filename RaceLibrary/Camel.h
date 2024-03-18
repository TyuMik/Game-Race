#pragma once
#include "Land_Race.h"

#ifdef RACELIBRARY_EXPORTS
#define RLIB_API __declspec(dllexport)
#else
#define RLIB_API __declspec(dllimport)
#endif

class RLIB_API Camel : public Land_Race {
public:
    Camel(int);
};