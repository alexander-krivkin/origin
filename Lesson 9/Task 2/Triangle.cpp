#include "Errors.h"
#include "Triangle.h"


Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) :
	sideA(sideA), sideB(sideB), sideC(sideC), angleA(angleA), angleB(angleB), angleC(angleC)
{
	name = "Треугольник";
	sides = 3;
	checkAnglesAmountEqual180();
}

Triangle::Triangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) :
	sideA(sideA), sideB(sideB), sideC(sideC), angleA(angleA), angleB(angleB), angleC(angleC)
{
	this->name = name;
	sides = 3;
	checkAnglesAmountEqual180();
}

void Triangle::checkAnglesAmountEqual180()
{
	if ((angleA + angleB + angleC) != 180)
	{
		throw ErrAnglesAmountNotEqual180(name);
	}
}

const void Triangle::print() const
{	
	std::cout << "Фигура \"" << name << "\" создана " <<
		"(стороны: a= " << sideA << " b= " << sideB << " c= " << sideC <<
		", углы: A= " << angleA << " B= " << angleB << " C= " << angleC << ")" << std::endl;
}