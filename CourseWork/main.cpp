#include <iostream>
#include <Windows.h>

#include "Scene.h"


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ak::Scene* scene = new ak::Scene{};

	int raceType{};
	std::string raceTypeStr[4]{
		"",
		"��� ��������� ����������",
		"��� ���������� ����������",
		"��� ��������� � ���������� ����������" };
	int distance{};
	int choice{};
	bool startRace{};

	std::cout << "����� ���������� � �������� ���������!" << std::endl << std::endl;
	do
	{
		do
		{
			std::cout << "1. ����� ��� ��������� ����������" << std::endl;
			std::cout << "2. ����� ��� ���������� ����������" << std::endl;
			std::cout << "3. ����� ��� ��������� � ���������� ����������" << std::endl;
			std::cout << "�������� ��� �����: ";
			std::cin >> raceType;
		} while ((raceType < 1) || (raceType > 3));

		std::cout << "������� ����� ��������� (������ ���� ������������): ";
		std::cin >> distance;

		do
		{
			std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������" << std::endl << std::endl;
			do
			{
				startRace = false;

				std::cout << "����� " << raceTypeStr[raceType] << ". ����������: " << distance << std::endl;
				if (scene->getRegisteredTransportNum()) std::cout << "������������������ ������������ ��������: " <<
					scene->getRegisteredTransportNames() << std::endl;

				std::cout << "1. �������-���������" << std::endl;
				std::cout << "2. �����" << std::endl;
				std::cout << "3. �������" << std::endl;
				std::cout << "4. �������" << std::endl;
				std::cout << "5. ���" << std::endl;
				std::cout << "6. �������-���������" << std::endl;
				std::cout << "7. ����-������" << std::endl;
				std::cout << "0. ��������� �����������" << std::endl;
				std::cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
				std::cin >> choice;

				try
				{
					scene->registerTransport(static_cast<ak::RaceTypes>(raceType), static_cast<ak::Transports>(choice));
					std::cout << scene->getLastRegisteredTransport() + " ������� ���������������" << std::endl << std::endl;
				}
				catch (const std::exception& ex)
				{
					std::cout << std::endl << ex.what() << std::endl << std::endl;
				}

				if ((!choice) && (scene->getRegisteredTransportNum() < 2))
				{
					break;
				}

				if ((!choice) && (scene->getRegisteredTransportNum() >= 2))
				{
					do
					{
						std::cout << "1. ���������������� ���������" << std::endl;
						std::cout << "2. ������ �����" << std::endl;
						std::cout << "�������� ��������: ";
						std::cin >> choice;
						if (choice == 2)
						{
							startRace = true;
						}
					} while ((choice < 1) || (choice > 2));

					std::cout << std::endl;
				}
			} while (!startRace);
		} while (scene->getRegisteredTransportNum() < 2);

		std::cout << "���������� �����:" << std::endl;
		std::cout << scene->getRegisteredTransportTravelTimes(distance) << std::endl;
		scene->cleanScene();

		do
		{
			std::cout << "1. �������� ��� ���� �����" << std::endl;
			std::cout << "2. �����" << std::endl;
			std::cout << "�������� ��������: ";
			std::cin >> choice;
		} while ((choice < 1) || (choice > 2));

		std::cout << std::endl;

	} while (choice != 2);

	delete scene;

	system("pause");
	return EXIT_SUCCESS;
}