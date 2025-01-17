#include <string>
#include <iostream>

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

	system("pause");
	return EXIT_SUCCESS;
}