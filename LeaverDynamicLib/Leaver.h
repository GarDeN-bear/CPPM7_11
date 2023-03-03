#pragma once
#include <iostream>
#ifdef LEAVERLIBRARY_API
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif
class Leaver {
public:
	LEAVERLIBRARY_API void leave(std::string str);
};