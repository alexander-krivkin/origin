#ifndef AK_PARALLELOGRAM_H
#define AK_PARALLELOGRAM_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class GRAPHICS_API Parallelogram final : public Quadrangle
{
public:
	Parallelogram(int sideA, int sideB, int angleA, int angleB);
};

#endif