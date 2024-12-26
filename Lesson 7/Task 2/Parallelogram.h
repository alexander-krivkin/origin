#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class Parallelogram final : public Quadrangle
{
public:
	explicit Parallelogram(int sideA, int sideB, int angleA, int angleB);
};

#endif