#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <string>
#include <iostream>

#include "Figure.h"


class Triangle : public Figure
{
public:
	explicit Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
	explicit Triangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
	void checkAnglesAmountEqual180();
	const void print() const override;

protected:
	int sideA, sideB, sideC;
	int angleA, angleB, angleC;
};

#endif