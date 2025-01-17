#ifndef AK_ISOSCELES_TRIANGLE_H
#define AK_ISOSCELES_TRIANGLE_H

#include <string>
#include <iostream>

#include "Triangle.h"


class IsoscelesTriangle final : public Triangle
{
public:
	IsoscelesTriangle(int sideA, int sideB, int angleA, int angleB);
};

#endif