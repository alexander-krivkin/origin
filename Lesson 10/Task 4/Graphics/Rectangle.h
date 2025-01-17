#ifndef AK_RECTANGLE_H
#define AK_RECTANGLE_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class GRAPHICS_API Rectangle final : public Quadrangle
{
public:
	Rectangle(int sideA, int sideB);
};

#endif