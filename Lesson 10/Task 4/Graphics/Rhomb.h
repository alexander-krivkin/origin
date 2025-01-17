#ifndef AK_RHOMB_H
#define AK_RHOMB_H

#include <string>
#include <iostream>

#include "Quadrangle.h"


class GRAPHICS_API Rhomb final : public Quadrangle
{
public:
	Rhomb(int sideA, int angleA, int angleB);
};

#endif