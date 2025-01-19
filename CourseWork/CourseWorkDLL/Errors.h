#ifndef AK_ERRORS_H
#define AK_ERRORS_H

#include <string>
#include <exception>

#include "Transport.h"


namespace ak
{
	class COURSEWORKDLL_API ErrLandTransportRequired : public std::exception
	{
	public:
		ErrLandTransportRequired();
		const char* what() const override;

	private:
		std::string report;
	};

	class COURSEWORKDLL_API ErrAirTransportRequired : public std::exception
	{
	public:
		ErrAirTransportRequired();
		const char* what() const override;

	private:
		std::string report;
	};

	class COURSEWORKDLL_API ErrDuplicatedTransport : public std::exception
	{
	public:
		ErrDuplicatedTransport();
		const char* what() const override;

	private:
		std::string report;
	};
}

#endif