#ifndef AK_RIGHT_TRIANGLE_H
#define AK_RIGHT_TRIANGLE_H

#include <string>
#include <iostream>

#include "Triangle.h"


class RightTriangle final : public Triangle
{
public:
	RightTriangle(int sideA, int sideB, int sideC, int angleA, int angleB);
};

#endif