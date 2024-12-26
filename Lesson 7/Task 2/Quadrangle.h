#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include <string>
#include <iostream>

#include "Figure.h"


class Quadrangle : public Figure
{
public:
	explicit Quadrangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
	explicit Quadrangle(std::string name, int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD);
	void checkAnglesAmountEqual360();
	const void print() const override;

protected:
	int sideA, sideB, sideC, sideD;
	int angleA, angleB, angleC, angleD;
};

#endif