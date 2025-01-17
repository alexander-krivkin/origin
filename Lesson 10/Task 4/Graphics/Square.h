#ifndef AK_SQUARE_H
#define AK_SQUARE_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class GRAPHICS_API Square final : public Quadrangle
{
public:
	Square(int sideA);
};

#endif