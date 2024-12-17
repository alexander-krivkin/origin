#include <string>
#include <iostream>


class Figure
{
public:
	Figure()
	{
		name = "Фигура";
		sides = 0;
	}

	virtual void print()
	{
		std::cout << std::endl << name << ": " << std::endl;
		std::cout << "Количество сторон: " << sides << std::endl;
	}

protected:
	std::string name;
	int sides;
};

class Triangle : public Figure
{
public:
	Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) :
		sideA(sideA), sideB(sideB), sideC(sideC), angleA(angleA), angleB(angleB), angleC(angleC)
	{
		name = "Треугольник";
		sides = 3;
	}

	void print() override
	{
		Figure::print();
		std::cout << "Стороны: a= " << sideA << " b= " << sideB << " c= " << sideC << std::endl;
		std::cout << "Углы: A= " << angleA << " B= " << angleB << " C= " << angleC << std::endl;
	}

protected:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};

class Quadrangle : public Figure
{
public:
	Quadrangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) :
		sideA(sideA), sideB(sideB), sideC(sideC), sideD(sideD), angleA(angleA), angleB(angleB), angleC(angleC), angleD(angleD)
	{
		name = "Четырёхугольник";
		sides = 4;
	}

	void print() override
	{
		Figure::print();
		std::cout << "Стороны: a= " << sideA << " b= " << sideB << " c= " << sideC << " d= " << sideD << std::endl;
		std::cout << "Углы: A= " << angleA << " B= " << angleB << " C= " << angleC << " D= " << angleD << std::endl;
	}

protected:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};


class RightTriangle final : public Triangle
{
public:
	RightTriangle(int sideA, int sideB, int sideC, int angleA, int angleB) :
		Triangle(sideA, sideB, sideC, angleA, angleB, 90)
	{
		name = "Прямоугольный треугольник";
	}
};

class IsoscelesTriangle final : public Triangle
{
public:
	IsoscelesTriangle(int sideA, int sideB, int angleA, int angleB) :
		Triangle(sideA, sideB, sideA, angleA, angleB, angleA)
	{
		name = "Равнобедренный треугольник";
	}
};

class EquilateralTriangle final : public Triangle
{
public:
	EquilateralTriangle(int sideA) :
		Triangle(sideA, sideA, sideA, 60, 60, 60)
	{
		name = "Равносторонний треугольник";
	}
};

class Rectangle final : public Quadrangle
{
public:
	Rectangle(int sideA, int sideB) :
		Quadrangle(sideA, sideB, sideA, sideB, 90, 90, 90, 90)
	{
		name = "Прямоугольник";
	}
};


class Square final : public Quadrangle
{
public:
	Square(int sideA) :
		Quadrangle(sideA, sideA, sideA, sideA, 90, 90, 90, 90)
	{
		name = "Квадрат";
	}
};

class Parallelogram final : public Quadrangle
{
public:
	Parallelogram(int sideA, int sideB, int angleA, int angleB) :
		Quadrangle(sideA, sideB, sideA, sideB, angleA, angleB, angleA, angleB)
	{
		name = "Параллелограмм";
	}
};

class Rhomb final : public Quadrangle
{
public:
	Rhomb(int sideA, int angleA, int angleB) :
		Quadrangle(sideA, sideA, sideA, sideA, angleA, angleB, angleA, angleB)
	{
		name = "Ромб";
	}
};


void printInfo(Figure* figure)
{
	figure->print();
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Figure* pFigure = new Figure;
	Figure* pTriangle = new Triangle(10, 20, 30, 50, 60, 70);
	Figure* pRightTriangle = new RightTriangle(10, 20, 30, 50, 60);
	Figure* pIsoscelesTriangle = new IsoscelesTriangle(10, 20, 50, 60);
	Figure* pEquilateralTriangle = new EquilateralTriangle(30);
	Figure* pQuadrangle = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
	Figure* pRectangle = new Rectangle(10, 20);
	Figure* pSquare = new Square(20);
	Figure* pParallelogram = new Parallelogram(20, 30, 30, 40);
	Figure* pRhomb = new Rhomb(30, 30, 40);

	printInfo(pFigure);
	printInfo(pTriangle);
	printInfo(pRightTriangle);
	printInfo(pIsoscelesTriangle);
	printInfo(pEquilateralTriangle);
	printInfo(pQuadrangle);
	printInfo(pRectangle);
	printInfo(pSquare);
	printInfo(pParallelogram);
	printInfo(pRhomb);

	delete pFigure;
	delete pTriangle;
	delete pRightTriangle;
	delete pIsoscelesTriangle;
	delete pEquilateralTriangle;
	delete pQuadrangle;
	delete pRectangle;
	delete pSquare;
	delete pParallelogram;
	delete pRhomb;

	return EXIT_SUCCESS;
}
