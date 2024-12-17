#include <string>
#include <iostream>


class Figure
{
public:
	Figure()
	{
		name = "������";
		sides = 0;
	}

	void printSides()
	{
		std::cout << name << ": " << sides << std::endl;
	}

protected:
	std::string name;
	int sides;
};

class Triangle : public Figure
{
public:
	Triangle()
	{
		name = "�����������";
		sides = 3;
	}
};

class Quadrangle : public Figure
{
public:
	Quadrangle()
	{
		name = "��������������";
		sides = 4;
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");

	Figure* pFigure1 = new Figure{};
	Triangle* pTriangle1 = new Triangle{};
	Quadrangle* pQuadrangle1 = new Quadrangle{};

	std::cout << "���������� ������:" << std::endl;
	pFigure1->printSides();
	pTriangle1->printSides();
	pQuadrangle1->printSides();

	delete pFigure1;
	delete pTriangle1;
	delete pQuadrangle1;

	return EXIT_SUCCESS;
}
