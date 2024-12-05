#include <string>
#include <iostream>


struct Adress
{
	std::string city{};
	std::string street{};
	int house{};
	int apartment{};
	int postIndex{};
};

void printAdress(const Adress& adress)
{
	std::cout << "�����: " << adress.city << std::endl;
	std::cout << "�����: " << adress.street << std::endl;
	std::cout << "����� ����: " << adress.house << std::endl;
	std::cout << "����� ��������: " << adress.apartment << std::endl;
	std::cout << "������: " << adress.postIndex << std::endl << std::endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Adress adress1{ "������", "�����", 12, 8, 123456 };
	Adress adress2{ "������", "�������", 59, 143, 953769 };

	printAdress(adress1);
	printAdress(adress2);

	return EXIT_SUCCESS;
}
