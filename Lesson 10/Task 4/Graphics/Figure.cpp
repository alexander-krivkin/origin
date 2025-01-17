#include "Figure.h"


Figure::Figure()
{
	name = "Фигура";
	sides = 0;
}

void Figure::print()
{
	std::cout << std::endl << name << ": " << std::endl;
	std::cout << "Количество сторон: " << sides << std::endl;
}