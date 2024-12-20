#include <cmath>

#include "Math.h"


int add(int num1, int num2)
{
	return num1 + num2;
}

int subtract(int num1, int num2)
{
	return num1 - num2;
}

int multiply(int num1, int num2)
{
	return num1 * num2;
}

double divide(int num1, int num2)
{
	return num1 / num2;
}

int power(int num1, int num2)
{
	return static_cast<int>(pow(num1, num2));
}
