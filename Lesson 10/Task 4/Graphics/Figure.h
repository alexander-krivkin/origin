#ifndef AK_FIGURE_H
#define AK_FIGURE_H

#ifdef GRAPHICS_EXPORTS
#define GRAPHICS_API __declspec(dllexport)
#else
#define GRAPHICS_API __declspec(dllimport)
#endif

#include <string>
#include <iostream>


class GRAPHICS_API Figure
{
public:
	Figure();
	virtual void print();

protected:
	std::string name;
	int sides;
};

#endif