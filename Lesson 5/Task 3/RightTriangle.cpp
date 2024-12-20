#include "RightTriangle.h"


RightTriangle::RightTriangle(int sideA, int sideB, int sideC, int angleA, int angleB) :
	Triangle(sideA, sideB, sideC, angleA, angleB, 90)
{
	name = "Прямоугольный треугольник";
}