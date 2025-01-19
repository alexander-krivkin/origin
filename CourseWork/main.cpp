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
		"для наземного транспорта",
		"для воздушного транспорта",
		"для наземного и воздушного транспорта" };
	int distance{};
	int choice{};
	bool startRace{};

	std::cout << "Добро пожаловать в гоночный симулятор!" << std::endl << std::endl;
	do
	{
		do
		{
			std::cout << "1. Гонка для наземного транспорта" << std::endl;
			std::cout << "2. Гонка для воздушного транспорта" << std::endl;
			std::cout << "3. Гонка для наземного и воздушного транспорта" << std::endl;
			std::cout << "Выберите тип гонки: ";
			std::cin >> raceType;
		} while ((raceType < 1) || (raceType > 3));

		std::cout << "Укажите длину дистанции (должна быть положительна): ";
		std::cin >> distance;

		do
		{
			std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства" << std::endl << std::endl;
			do
			{
				startRace = false;

				std::cout << "Гонка " << raceTypeStr[raceType] << ". Расстояние: " << distance << std::endl;
				if (scene->getRegisteredTransportNum()) std::cout << "Зарегистрированные транспортные средства: " <<
					scene->getRegisteredTransportNames() << std::endl;

				std::cout << "1. Ботинки-вездеходы" << std::endl;
				std::cout << "2. Метла" << std::endl;
				std::cout << "3. Верблюд" << std::endl;
				std::cout << "4. Кентавр" << std::endl;
				std::cout << "5. Орёл" << std::endl;
				std::cout << "6. Верблюд-быстроход" << std::endl;
				std::cout << "7. Ковёр-самолёт" << std::endl;
				std::cout << "0. Закончить регистрацию" << std::endl;
				std::cout << "Выберите транспорт или 0 для окончания процесса регистрации: ";
				std::cin >> choice;

				try
				{
					scene->registerTransport(static_cast<ak::RaceTypes>(raceType), static_cast<ak::Transports>(choice));
					std::cout << scene->getLastRegisteredTransport() + " успешно зарегистрирован" << std::endl << std::endl;
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
						std::cout << "1. Зарегистрировать транспорт" << std::endl;
						std::cout << "2. Начать гонку" << std::endl;
						std::cout << "Выберите действие: ";
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

		std::cout << "Результаты гонки:" << std::endl;
		std::cout << scene->getRegisteredTransportTravelTimes(distance) << std::endl;
		scene->cleanScene();

		do
		{
			std::cout << "1. Провести ещё одну гонку" << std::endl;
			std::cout << "2. Выйти" << std::endl;
			std::cout << "Выберите действие: ";
			std::cin >> choice;
		} while ((choice < 1) || (choice > 2));

		std::cout << std::endl;

	} while (choice != 2);

	delete scene;

	system("pause");
	return EXIT_SUCCESS;
}