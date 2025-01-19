#include "Errors.h"


namespace ak
{
	ErrLandTransportRequired::ErrLandTransportRequired()
	{
		report = ">  Ошибка. Можно зарегистрировать только наземный транспорт";
	}

	const char* ErrLandTransportRequired::what() const
	{
		return report.c_str();
	}

	ErrAirTransportRequired::ErrAirTransportRequired()
	{
		report = ">  Ошибка. Можно зарегистрировать только воздушный транспорт";
	}

	const char* ErrAirTransportRequired::what() const
	{
		return report.c_str();
	}

	ErrDuplicatedTransport::ErrDuplicatedTransport()
	{
		report = ">  Ошибка. Введён уже зарегистрированный транспорт";
	}

	const char* ErrDuplicatedTransport::what() const
	{
		return report.c_str();
	}
}
