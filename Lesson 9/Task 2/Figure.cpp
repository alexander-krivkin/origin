#include "Figure.h"


Figure::Figure()
{
	name = "������";
	sides = 0;
}

const void Figure::print() const
{
	std::cout << "������ \"" << name << "\" ������� " << std::endl;
}