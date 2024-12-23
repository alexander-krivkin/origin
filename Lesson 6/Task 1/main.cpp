#include <string>
#include <iostream>


#define MODE 1

#ifndef MODE
#error "��������� ���������� MODE"
#endif

#ifdef MODE
void add()
{
	int num1, num2;

	std::cout << "������� ����� 1: ";
	std::cin >> num1;
	std::cout << "������� ����� 2: ";
	std::cin >> num2;
	std::cout << "��������� ��������: " << num1 + num2 << std::endl;
}
#endif


int main()
{
	setlocale(LC_ALL, "Russian");

#if (MODE == 1)
	std::cout << "������� � ������ ������" << std::endl;
	add();

#elif (MODE == 0)
	std::cout << "������� � ������ ����������" << std::endl;

#else
	std::cout << "����������� �����. ���������� ������" << std::endl;

#endif

	return EXIT_SUCCESS;
}