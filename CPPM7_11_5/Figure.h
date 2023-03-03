#pragma once
#include <iostream>
#ifndef FIGURELIBRARYDYNAMIC_EXPORTS
#define FIGURELIBRARY_API __declspec(dllexport)
#else
#define FIGURELIBRARY_API __declspec(dllimport)
#endif
// Класс фигура
class Figure {
public:
	FIGURELIBRARY_API void get_sides_count();
	FIGURELIBRARY_API virtual void print_info();
	FIGURELIBRARY_API virtual bool check();
	FIGURELIBRARY_API virtual void get_info();
protected:
	std::string name = "Фигура";
	int sides_count = 0;
};