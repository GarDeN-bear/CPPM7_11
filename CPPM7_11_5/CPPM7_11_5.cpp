#include "Figure.h"
#include "Triangle.h"
#include "Quadrilateral.h"
#include <Windows.h>


void print_info(Figure::Figure* figure) {
	figure->get_info();
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Figure::Triangle triangle(10, 20, 30, 50, 60, 70);
	Figure::Figure* ptr_triangle = &triangle;
	print_info(ptr_triangle);
	Figure::RightTriangle rightTriangle(10, 20, 30, 50, 60);
	Figure::Figure* ptr_rightTriangle = &rightTriangle;
	print_info(ptr_rightTriangle);
	Figure::IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	Figure::Figure* ptr_isoscelesTriangle = &isoscelesTriangle;
	print_info(ptr_isoscelesTriangle);
	Figure::EquilateralTriangle equilateralTriangle(30, 60);
	Figure::Figure* ptr_equilateralTriangle = &equilateralTriangle;
	print_info(ptr_equilateralTriangle);
	Figure::Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Figure::Figure* ptr_quadrilateral = &quadrilateral;
	print_info(ptr_quadrilateral);
	Figure::Rectangle rectangle(10, 20);
	Figure::Figure* ptr_rectangle = &rectangle;
	print_info(ptr_rectangle);
	Figure::Square square(20);
	Figure::Figure* ptr_square = &square;
	print_info(ptr_square);
	Figure::Parallelogram parallelogram(20, 30, 30, 40);
	Figure::Figure* ptr_parallelogram = &parallelogram;
	print_info(ptr_parallelogram);
	Figure::Rhombus rhombus(30, 30, 40);
	Figure::Figure* ptr_rhombus = &rhombus;
	print_info(ptr_rhombus);
	system("pause"); // проверял .exe с dll и без dll 
}