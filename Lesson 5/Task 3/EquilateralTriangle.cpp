#include "EquilateralTriangle.h"


EquilateralTriangle::EquilateralTriangle(int sideA) :
	Triangle(sideA, sideA, sideA, 60, 60, 60)
{
	name = "Равносторонний треугольник";
}
