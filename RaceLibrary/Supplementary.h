#pragma once
#include <windows.h>

#ifdef RACELIBRARY_EXPORTS
#define RLIB_API __declspec(dllexport)
#else
#define RLIB_API __declspec(dllimport)
#endif

RLIB_API void warning_command();
RLIB_API void screen();