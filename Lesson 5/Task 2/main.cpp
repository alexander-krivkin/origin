#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>

#include "Counter.h"


int main()
{
	//setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Counter counter{};
	std::string str_cmd{};
	unsigned char ch_cmd{};

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> str_cmd;
	if (str_cmd == "да")
	{
		int i1{};
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> i1;
		counter.setCnt(i1);
	}

	while ((ch_cmd != 120) && (ch_cmd != 245))
	{
		std::cout << "Введите команду('+', '-', '=' или 'x'): ";
		std::cin >> ch_cmd;

		switch (ch_cmd)
		{
		case '+': counter.increaseCnt(); break;
		case '-': counter.decreaseCnt(); break;
		case '=': std::cout << "cnt= " << counter.getCnt() << std::endl; break;
		default: break;
		}
	}

	std::cout << std::endl;

	return EXIT_SUCCESS;
}
