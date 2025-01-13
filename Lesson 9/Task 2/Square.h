#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class Square final : public Quadrangle
{
public:
	explicit Square(int sideA);
};

#endif