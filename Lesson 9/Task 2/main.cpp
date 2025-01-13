#include <string>
#include <iostream>
#include <exception>


#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"


void printCreationInfo(Figure* figure)
{
	figure->print();
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Figure* pFigure{};
	Figure* pTriangle{};
	Figure* pRightTriangle{};
	Figure* pIsoscelesTriangle{};
	Figure* pEquilateralTriangle{};
	Figure* pQuadrangle{};
	Figure* pRectangle{};
	Figure* pSquare{};
	Figure* pParallelogram{};
	Figure* pRhomb{};

	try
	{
		pFigure = new Figure;
		printCreationInfo(pFigure);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pTriangle = new Triangle(10, 20, 30, 50, 60, 70);
		printCreationInfo(pTriangle);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pRightTriangle = new RightTriangle(10, 20, 30, 50, 60);
		printCreationInfo(pRightTriangle);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pIsoscelesTriangle = new IsoscelesTriangle(10, 20, 50, 60);
		printCreationInfo(pIsoscelesTriangle);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pEquilateralTriangle = new EquilateralTriangle(30);
		printCreationInfo(pEquilateralTriangle);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pQuadrangle = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
		printCreationInfo(pQuadrangle);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pRectangle = new Rectangle(10, 20);
		printCreationInfo(pRectangle);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pSquare = new Square(20);
		printCreationInfo(pSquare);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pParallelogram = new Parallelogram(20, 30, 30, 40);
		printCreationInfo(pFigure);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	try
	{
		pRhomb = new Rhomb(30, 30, 40);
		printCreationInfo(pFigure);
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

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

	std::cout << std::endl << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}