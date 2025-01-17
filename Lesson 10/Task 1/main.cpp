#include <iostream>
#include <string>
#include <Windows.h>

#include "Greeter.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name{};
	std::cout << "¬ведите им€: ";
	std::cin >> name;

	ak::greet(name);

	system("pause");
	return EXIT_SUCCESS;
}