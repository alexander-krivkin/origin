#include "Quadrangle.h"


Quadrangle::Quadrangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) :
	sideA(sideA), sideB(sideB), sideC(sideC), sideD(sideD), angleA(angleA), angleB(angleB), angleC(angleC), angleD(angleD)
{
	name = "��������������";
	sides = 4;
}

void Quadrangle::print()
{
	Figure::print();
	std::cout << "�������: a= " << sideA << " b= " << sideB << " c= " << sideC << " d= " << sideD << std::endl;
	std::cout << "����: A= " << angleA << " B= " << angleB << " C= " << angleC << " D= " << angleD << std::endl;
}