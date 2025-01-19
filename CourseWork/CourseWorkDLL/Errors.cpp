#include "Errors.h"


namespace ak
{
	ErrLandTransportRequired::ErrLandTransportRequired()
	{
		report = ">  ������. ����� ���������������� ������ �������� ���������";
	}

	const char* ErrLandTransportRequired::what() const
	{
		return report.c_str();
	}

	ErrAirTransportRequired::ErrAirTransportRequired()
	{
		report = ">  ������. ����� ���������������� ������ ��������� ���������";
	}

	const char* ErrAirTransportRequired::what() const
	{
		return report.c_str();
	}

	ErrDuplicatedTransport::ErrDuplicatedTransport()
	{
		report = ">  ������. ����� ��� ������������������ ���������";
	}

	const char* ErrDuplicatedTransport::what() const
	{
		return report.c_str();
	}
}
