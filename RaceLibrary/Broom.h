#pragma once
#include "Air_Race.h"

#ifdef RACELIBRARY_EXPORTS
#define RLIB_API __declspec(dllexport)
#else
#define RLIB_API __declspec(dllimport)
#endif

class RLIB_API Broom : public Air_Race {
public:
    Broom(int);
    int get_k() override;
};