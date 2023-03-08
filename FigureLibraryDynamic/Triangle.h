#pragma once
#include <iostream>
#include "Figure.h"
namespace Figure {
	// Класс треугольник
	class Triangle : public Figure {
	public:
		FIGURELIBRARY_API Triangle();
		FIGURELIBRARY_API Triangle(double a_, double b_, double c_, double A_, double B_, double C_);
		FIGURELIBRARY_API void get_info() override;
		FIGURELIBRARY_API virtual void print_info() override;
		FIGURELIBRARY_API virtual bool check() override;
	protected:
		double a, b, c;
		double A, B, C;
	};

	//Прямоугольный треугольник
	class RightTriangle : public Triangle {
	public:
		FIGURELIBRARY_API RightTriangle(double a_, double b_, double c_, double A_, double B_);
	};

	//Равнобедренный треугольник
	class IsoscelesTriangle : public Triangle {
	public:
		FIGURELIBRARY_API IsoscelesTriangle(double a_, double b_, double A_, double B_);
	};

	//Равносторонний треугольник
	class EquilateralTriangle : public Triangle {
	public:
		FIGURELIBRARY_API EquilateralTriangle(double a_, double A_);
	};
}