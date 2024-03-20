#pragma once
#include "Air_Race.h"
#include "Spec.h"

class RLIB_API Carpet : public Air_Race {
public:
    Carpet(int);
    int get_k() override;
};