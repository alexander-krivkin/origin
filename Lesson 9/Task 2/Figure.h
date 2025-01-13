#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <iostream>


class Figure
{
public:
	Figure();
	virtual const void print() const;

protected:
	std::string name;
	int sides;
};

#endif