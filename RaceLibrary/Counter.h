#pragma once

#ifdef RACELIBRARY_EXPORTS
#define RLIB_API __declspec(dllexport)
#else
#define RLIB_API __declspec(dllimport)
#endif

class RLIB_API Counter {
private:
	int count;
public:
	Counter();
	void increment();
	int getCounter() const;
};