#pragma once
#include <iostream>
//#ifdef FigureLibraryDynamic_EXPORTS
//#define FIGURELIBRARY_API __declspec(dllexport)
//#else
//#define FIGURELIBRARY_API __declspec(dllimport)
//#endif
// ����� ������
namespace Figure {
	class Figure {
	public:
		void get_sides_count();
		virtual void print_info();
		virtual bool check();
		virtual void get_info();
	protected:
		std::string name = "������";
		int sides_count = 0;
	};
}