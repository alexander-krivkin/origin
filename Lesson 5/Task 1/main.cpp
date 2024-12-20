#include <string>
#include <iostream>
#include <vector>

#include "Math.h"


int main()
{
	setlocale(LC_ALL, "Russian");

	int num1{}, num2{};
	int command{};

	std::cout << "¬ведите первое число: ";
	std::cin >> num1;
	std::cout << "¬ведите второе число: ";
	std::cin >> num2;

	std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
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
