#include "Triangle.h"


Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) :
	sideA(sideA), sideB(sideB), sideC(sideC), angleA(angleA), angleB(angleB), angleC(angleC)
{
	name = "Треугольник";
	sides = 3;
}

void Triangle::print()
{
	Figure::print();
	std::cout << "Стороны: a= " << sideA << " b= " << sideB << " c= " << sideC << std::endl;
	std::cout << "Углы: A= " << angleA << " B= " << angleB << " C= " << angleC << std::endl;
}