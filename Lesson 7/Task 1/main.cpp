#include <string>
#include <iostream>
#include <exception>
#include <windows.h>


class forbiddenLengthError : public std::exception
{
	const char* what() const override
	{
		return "�� ����� ����� ��������� �����! �� ��������";
	}
};


int function(std::string str, int forbiddenLength)
{
	if (str.length() == forbiddenLength)
	{
		forbiddenLengthError ex;
		throw ex;
	}
	return str.length();
}


int main()
{
	//setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string str{};
	int forbiddenLength{};

	std::cout << "������� ��������� �����: ";
	std::cin >> forbiddenLength;

	while (true)
	{
		std::cout << "������� �����: ";
		std::cin >> str;

		try
		{
			std::cout << "����� ����� \"" << str << "\" ����� " <<
				function(str, forbiddenLength) << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
			return EXIT_FAILURE;
		}
	}

	return EXIT_SUCCESS;
}