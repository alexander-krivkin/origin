#include "IsoscelesTriangle.h"


IsoscelesTriangle::IsoscelesTriangle(int sideA, int sideB, int angleA, int angleB) :
	Triangle(sideA, sideB, sideA, angleA, angleB, angleA)
{
	name = "Равнобедренный треугольник";
}