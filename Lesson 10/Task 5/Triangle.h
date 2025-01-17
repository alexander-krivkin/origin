#ifndef AK_TRIANGLE_H
#define AK_TRIANGLE_H

#include <string>
#include <iostream>

#include "Figure.h"


class Triangle : public Figure
{
public:
	Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
	void print() override;

protected:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};

#endif