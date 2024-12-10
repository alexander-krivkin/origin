#include <string>
#include <iostream>

class Calculator
{
private:
	double num1, num2;

public:
	explicit Calculator() : num1{}, num2{}
	{
	}

	explicit Calculator(const Calculator& _calculator) : num1{}, num2{}
	{
	}

	~Calculator()
	{
	}

	double add() const
	{
		return num1 + num2;
	}

	double multiply() const
	{
		return num1 * num2;
	}

	double subtract_1_2() const
	{
		return num1 - num2;
	}

	double subtract_2_1() const
	{
		return num2 - num1;
	}

	double divide_1_2() const
	{
		return num1 / num2;
	}

	double divide_2_1() const
	{
		return num2 / num1;
	}

	bool set_num1(double num1)
	{
		if (num1)
		{
			this->num1 = num1;
			return true;
		}
		else return false;
	}

	bool set_num2(double num2)
	{
		if (num2)
		{
			this->num2 = num2;
			return true;
		}
		else return false;
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");

	Calculator calc{};
	double d1{}, d2{};

	while (true)
	{
		d1 = 0;
		d2 = 0;

		while (!d1)
		{
			std::cout << "Введите num1: ";
			std::cin >> d1;

			if (!calc.set_num1(d1))
			{
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		while (!d2)
		{
			std::cout << "Введите num2: ";
			std::cin >> d2;

			if (!calc.set_num2(d2))
			{
				std::cout << "Неверный ввод!" << std::endl;
			}
		}

		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;

		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}