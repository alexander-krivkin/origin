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
		std::cout << "������� ����� ������: ";
		std::cin >> month;

		switch (month)
		{
			case static_cast<int>(Months::JAN) : std::cout << "������" << std::endl;
				break;
				case static_cast<int>(Months::FEB) : std::cout << "�������" << std::endl;
					break;
					case static_cast<int>(Months::MAR) : std::cout << "����" << std::endl;
						break;
						case static_cast<int>(Months::APR) : std::cout << "������" << std::endl;
							break;
							case static_cast<int>(Months::MAY) : std::cout << "���" << std::endl;
								break;
								case static_cast<int>(Months::JUN) : std::cout << "����" << std::endl;
									break;
									case static_cast<int>(Months::JUL) : std::cout << "����" << std::endl;
										break;
										case static_cast<int>(Months::AUG) : std::cout << "������" << std::endl;
											break;
											case static_cast<int>(Months::SEP) : std::cout << "��������" << std::endl;
												break;
												case static_cast<int>(Months::OCT) : std::cout << "�������" << std::endl;
													break;
													case static_cast<int>(Months::NOV) : std::cout << "������" << std::endl;
														break;
														case static_cast<int>(Months::DEC) : std::cout << "�������" << std::endl;
															break;
														case 0:
															break;
														default: std::cout << "������������ �����!" << std::endl;
															break;
		}
	} while (month);

	std::cout << "�� ��������!" << std::endl;
	return EXIT_SUCCESS;
}
