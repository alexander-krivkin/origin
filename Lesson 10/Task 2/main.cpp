#include <iostream>
#include <string>
#include <Windows.h>

#include "Leaver.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name{};
	std::cout << "������� ���: ";
	std::cin >> name;

	ak::leave(name);

	system("pause");
	return EXIT_SUCCESS;
}