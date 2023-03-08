#include "Leaver.h"
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	Leaver leaver;
	leaver.leave(name);
}
