#ifndef RHOMB_H
#define RHOMB_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class Rhomb final : public Quadrangle
{
public:
	explicit Rhomb(int sideA, int angleA, int angleB);
};

#endif