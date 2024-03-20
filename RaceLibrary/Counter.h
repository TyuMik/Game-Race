#pragma once
#include "Spec.h"

class RLIB_API Counter {
private:
	int count;
public:
	Counter();
	void increment();
	int getCounter() const;
};