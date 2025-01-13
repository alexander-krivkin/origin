#include "Errors.h"
#include "Quadrangle.h"


Quadrangle::Quadrangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) :
	sideA(sideA), sideB(sideB), sideC(sideC), sideD(sideD), angleA(angleA), angleB(angleB), angleC(angleC), angleD(angleD)
{
	name = "Четырёхугольник";
	sides = 4;
	checkAnglesAmountEqual360();
}

Quadrangle::Quadrangle(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) :
	sideA(sideA), sideB(sideB), sideC(sideC), sideD(sideD), angleA(angleA), angleB(angleB), angleC(angleC), angleD(angleD)
{
	this->name = name;
	sides = 4;
	checkAnglesAmountEqual360();
}

void Quadrangle::checkAnglesAmountEqual360()
{
	if ((angleA + angleB + angleC + angleD) != 360)
	{
		throw ErrAnglesAmountNotEqual360(name);
	}
}

const void Quadrangle::print() const
{
	std::cout << "Фигура \"" << name << "\" создана " <<
	"(стороны: a= " << sideA << " b= " << sideB << " c= " << sideC << " d= " << sideD <<
	", углы: A= " << angleA << " B= " << angleB << " C= " << angleC << " D= " << angleD << ")" << std::endl;
}