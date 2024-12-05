#include <string>
#include <iostream>


enum class Months
{
	JAN = 1,
	FEB,
	MAR,
	APR,
	MAY,
	JUN,
	JUL,
	AUG,
	SEP,
	OCT,
	NOV,
	DEC,
};


int main()
{
	setlocale(LC_ALL, "Russian");

	int month{};

	do
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> month;

		switch (month)
		{
			case static_cast<int>(Months::JAN) : std::cout << "Январь" << std::endl;
				break;
				case static_cast<int>(Months::FEB) : std::cout << "Февраль" << std::endl;
					break;
					case static_cast<int>(Months::MAR) : std::cout << "Март" << std::endl;
						break;
						case static_cast<int>(Months::APR) : std::cout << "Апрель" << std::endl;
							break;
							case static_cast<int>(Months::MAY) : std::cout << "Май" << std::endl;
								break;
								case static_cast<int>(Months::JUN) : std::cout << "Июнь" << std::endl;
									break;
									case static_cast<int>(Months::JUL) : std::cout << "Июль" << std::endl;
										break;
										case static_cast<int>(Months::AUG) : std::cout << "Август" << std::endl;
											break;
											case static_cast<int>(Months::SEP) : std::cout << "Сентябрь" << std::endl;
												break;
												case static_cast<int>(Months::OCT) : std::cout << "Октябрь" << std::endl;
													break;
													case static_cast<int>(Months::NOV) : std::cout << "Ноябрь" << std::endl;
														break;
														case static_cast<int>(Months::DEC) : std::cout << "Декабрь" << std::endl;
															break;
														case 0:
															break;
														default: std::cout << "Неправильный номер!" << std::endl;
															break;
		}
	} while (month);

	std::cout << "До свидания!" << std::endl;
	return EXIT_SUCCESS;
}
