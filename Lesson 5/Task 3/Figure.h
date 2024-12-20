#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <iostream>


class Figure
{
public:
	Figure();
	virtual void print();

protected:
	std::string name;
	int sides;
};

#endif