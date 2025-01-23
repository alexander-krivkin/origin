#ifndef AK_CENTAUR_H
#define AK_CENTAUR_H

#include "LandTransport.h"


namespace ak
{
	class COURSEWORKDLL_API Centaur final : public LandTransport
	{
	public:
		Centaur() : LandTransport("Кентавр") {}
		~Centaur() = default;
		Transports getType() const override { return Transports::CAMEL; }
		double getTravelTime(int distance) const override;
	};
}

#endif