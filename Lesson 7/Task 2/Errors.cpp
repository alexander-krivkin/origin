#include "Errors.h"


ErrAnglesAmountNotEqual180::ErrAnglesAmountNotEqual180()
{
	report = ">  ������ ��������. �������: ����� ����� �� ����� 180";
}

ErrAnglesAmountNotEqual180::ErrAnglesAmountNotEqual180(std::string objectName)
{
	report = ">  " + objectName + ": ������ ��������. �������: ����� ����� �� ����� 180";
}

const char* ErrAnglesAmountNotEqual180::what() const
{	
	return report.c_str();
}

ErrAnglesAmountNotEqual360::ErrAnglesAmountNotEqual360()
{
	report = ">  ������ ��������. �������: ����� ����� �� ����� 360";
}

ErrAnglesAmountNotEqual360::ErrAnglesAmountNotEqual360(std::string objectName)
{
	report = ">  " + objectName + ": ������ ��������. �������: ����� ����� �� ����� 360";
}

const char* ErrAnglesAmountNotEqual360::what() const
{
	return report.c_str();
}