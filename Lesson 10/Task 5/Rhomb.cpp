#include "Rhomb.h"


Rhomb::Rhomb(int sideA, int angleA, int angleB) :
	Quadrangle(sideA, sideA, sideA, sideA, angleA, angleB, angleA, angleB)
{
	name = "Ромб";
}