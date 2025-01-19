#ifndef AK_BROOMSTICK_H
#define AK_BROOMSTICK_H

#include "AirTransport.h"


namespace ak
{
	class COURSEWORKDLL_API Broomstick final : public AirTransport
	{
	public:
		Broomstick() : AirTransport("Метла") {}
		~Broomstick() = default;
		Transports getType() const override { return Transports::BROOMSTICK; }
		float getTravelTime(int distance) const override;
	};
}

#endif