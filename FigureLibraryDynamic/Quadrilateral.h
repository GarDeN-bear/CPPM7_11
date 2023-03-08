#pragma once
#include "Figure.h"
namespace Figure {
	// ����� ��������������
	class Quadrilateral : public Figure {
	public:
		FIGURELIBRARY_API Quadrilateral();
		FIGURELIBRARY_API Quadrilateral(double a_, double b_, double c_, double d_, double A_, double B_, double C_, double D_);
		FIGURELIBRARY_API void get_info() override;

		FIGURELIBRARY_API virtual void print_info() override;
		FIGURELIBRARY_API virtual bool check() override;
	protected:
		double a, b, c, d;
		double A, B, C, D;
	};

	//�������������
	class Rectangle : public Quadrilateral {
	public:
		FIGURELIBRARY_API Rectangle(double a_, double b_);
	};

	//�������
	class Square : public Quadrilateral {
	public:
		FIGURELIBRARY_API Square(double a_);
	};

	// ��������������
	class Parallelogram : public Quadrilateral {
	public:
		FIGURELIBRARY_API Parallelogram(double a_, double b_, double A_, double B_);
	};

	//����
	class Rhombus : public Quadrilateral {
	public:
		FIGURELIBRARY_API Rhombus(double a_, double A_, double B_);
	};
}