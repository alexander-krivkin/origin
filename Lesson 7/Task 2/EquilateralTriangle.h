#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include <string>
#include <iostream>

#include "Triangle.h"


class EquilateralTriangle final : public Triangle
{
public:
	explicit EquilateralTriangle(int sideA);
};

#endif