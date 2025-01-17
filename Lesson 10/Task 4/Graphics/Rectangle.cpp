#include "Rectangle.h"


Rectangle::Rectangle(int sideA, int sideB) :
	Quadrangle(sideA, sideB, sideA, sideB, 90, 90, 90, 90)
{
	name = "Прямоугольник";
}