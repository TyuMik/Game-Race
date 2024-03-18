#include "Counter.h"

Counter::Counter() : count(0) { }

void Counter::increment() { count++; }

int Counter::getCounter() const { return count; }