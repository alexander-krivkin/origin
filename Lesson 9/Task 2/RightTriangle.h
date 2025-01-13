#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

#include <string>
#include <iostream>

#include "Triangle.h"


class RightTriangle final : public Triangle
{
public:
	explicit RightTriangle(int sideA, int sideB, int sideC, int angleA, int angleB);
};

#endif