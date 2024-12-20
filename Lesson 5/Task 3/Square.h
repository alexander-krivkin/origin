#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class Square final : public Quadrangle
{
public:
	Square(int sideA);
};

#endif