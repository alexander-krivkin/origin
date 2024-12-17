#include <string>
#include <iostream>


class Figure
{
public:
	Figure()
	{
		name = "Фигура";
		sides = 0;
		correctness = false;
	}

	virtual void print()
	{
		std::cout << std::endl << name << ": " << std::endl;
		std::cout << "Количество сторон: " << sides << std::endl;
	}

	virtual bool isCorrect()
	{
		if (sides == 0)
		{
			correctness = true;
			return correctness;
		}
		else
		{
			return false;
		}
	}

protected:
	std::string name;
	int sides;
	bool correctness;
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

	bool isCorrect() override
	{
		if (sides == 3 && (angleA + angleB + angleC) == 180)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
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

	bool isCorrect() override
	{
		if (sides == 4 && (angleA + angleB + angleC + angleD) == 360)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
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

	bool isCorrect() override
	{
		if (Triangle::isCorrect() &&
			angleC == 90)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
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

	bool isCorrect() override
	{
		if (Triangle::isCorrect() &&
			sideA == sideC && angleA == angleC)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
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

	bool isCorrect() override
	{
		if (Triangle::isCorrect() &&
			sideA == sideB && sideA == sideC &&
			angleA == 60 && angleB == 60 && angleC == 60)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
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
	bool isCorrect() override
	{
		if (Quadrangle::isCorrect() &&
			sideA == sideC && sideB == sideD &&
			angleA == 90 && angleB == 90 && angleC == 90 && angleD == 90)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
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
	bool isCorrect() override
	{
		if (Quadrangle::isCorrect() &&
			sideA == sideB && sideA == sideC && sideA == sideD &&
			angleA == 90 && angleB == 90 && angleC == 90 && angleD == 90)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
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
	bool isCorrect() override
	{
		if (Quadrangle::isCorrect() &&
			sideA == sideC && sideB == sideD &&
			angleA == angleC && angleB == angleD)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
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
	bool isCorrect() override
	{
		if (Quadrangle::isCorrect() &&
			sideA == sideB && sideA == sideC && sideA == sideD &&
			angleA == angleC && angleB == angleD)
		{
			correctness = true;
			return true;
		}
		else
		{
			return false;
		}
	}
};


void printInfo(Figure* figure)
{
	figure->print();

	if (figure->isCorrect())
	{
		std::cout << "Правильная " << std::endl;
	}
	else
	{
		std::cout << "Неправильная " << std::endl;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Figure* pFigure = new Figure;
	Figure* pTriangle = new Triangle(10, 20, 30, 50, 60, 70);
	Figure* pRightTriangle = new RightTriangle(10, 20, 30, 50, 40);
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
