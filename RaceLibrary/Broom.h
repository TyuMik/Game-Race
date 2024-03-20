#pragma once
#include "Air_Race.h"
#include "Spec.h"

class RLIB_API Broom : public Air_Race {
public:
    Broom(int);
    int get_k() override;
};