#ifndef AK_EQUILATERAL_TRIANGLE_H
#define AK_EQUILATERAL_TRIANGLE_H

#include <string>
#include <iostream>

#include "Triangle.h"


class GRAPHICS_API EquilateralTriangle final : public Triangle
{
public:
	EquilateralTriangle(int sideA);
};

#endif