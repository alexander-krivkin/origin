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
	std::cout << "Город: " << adress.city << std::endl;
	std::cout << "Улица: " << adress.street << std::endl;
	std::cout << "Номер дома: " << adress.house << std::endl;
	std::cout << "Номер квартиры: " << adress.apartment << std::endl;
	std::cout << "Индекс: " << adress.postIndex << std::endl << std::endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Adress adress1{ "Москва", "Арбат", 12, 8, 123456 };
	Adress adress2{ "Ижевск", "Пушкина", 59, 143, 953769 };

	printAdress(adress1);
	printAdress(adress2);

	return EXIT_SUCCESS;
}
