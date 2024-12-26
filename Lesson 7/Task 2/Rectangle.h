#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class Rectangle final : public Quadrangle
{
public:
	explicit Rectangle(int sideA, int sideB);
};

#endif