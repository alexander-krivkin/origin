#ifndef AK_FIGURE_H
#define AK_FIGURE_H

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