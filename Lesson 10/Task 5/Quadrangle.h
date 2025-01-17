#ifndef AK_QUADRANGLE_H
#define AK_QUADRANGLE_H

#include <string>
#include <iostream>

#include "Figure.h"


class Quadrangle : public Figure
{
public:
	Quadrangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
	void print() override;

protected:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};

#endif