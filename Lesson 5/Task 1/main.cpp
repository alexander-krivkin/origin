#include <string>
#include <iostream>
#include <vector>

#include "Math.h"


int main()
{
	setlocale(LC_ALL, "Russian");

	int num1{}, num2{};
	int command{};

	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	std::cout << "������� ������ �����: ";
	std::cin >> num2;

	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	std::cin >> command;

	switch (command)
	{
	case 1:
		std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
		break;
	case 2:
		std::cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << std::endl;
		break;
	case 3:
		std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << std::endl;
		break;
	case 4:
		std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << std::endl;
		break;
	case 5:
		std::cout << num1 << " ^ " << num2 << " = " << power(num1, num2) << std::endl;
		break;

	default:
		break;
	}

	return EXIT_SUCCESS;
}
