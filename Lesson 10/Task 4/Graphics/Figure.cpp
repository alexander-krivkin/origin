#include "Figure.h"


Figure::Figure()
{
	name = "������";
	sides = 0;
}

void Figure::print()
{
	std::cout << std::endl << name << ": " << std::endl;
	std::cout << "���������� ������: " << sides << std::endl;
}