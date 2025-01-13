#ifndef ERRORS_H
#define ERRORS_H

#include <string>
#include <exception>


class ErrAnglesAmountNotEqual180 : public std::exception
{
public:
	ErrAnglesAmountNotEqual180();
	explicit ErrAnglesAmountNotEqual180(std::string objectName);
	const char* what() const override;

private:
	std::string report;
};

class ErrAnglesAmountNotEqual360 : public std::exception
{
public:
	ErrAnglesAmountNotEqual360();
	explicit ErrAnglesAmountNotEqual360(std::string objectName);
	const char* what() const override;

private:
	std::string report;
};

#endif