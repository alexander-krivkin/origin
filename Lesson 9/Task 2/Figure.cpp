#include "Figure.h"


Figure::Figure()
{
	name = "Фигура";
	sides = 0;
}

const void Figure::print() const
{
	std::cout << "Фигура \"" << name << "\" создана " << std::endl;
}