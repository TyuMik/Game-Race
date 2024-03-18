#pragma once
#include "Air_Race.h"

#ifdef RACELIBRARY_EXPORTS
#define RLIB_API __declspec(dllexport)
#else
#define RLIB_API __declspec(dllimport)
#endif

class RLIB_API Carpet : public Air_Race {
public:
    Carpet(int);
    int get_k() override;
};