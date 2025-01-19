#ifndef AK_EAGLE_H
#define AK_EAGLE_H

#include "AirTransport.h"


namespace ak
{
	class COURSEWORKDLL_API Eagle final : public AirTransport
	{
	public:
		Eagle() : AirTransport("Îð¸ë") {}
		~Eagle() = default;
		Transports getType() const override { return Transports::EAGLE; }
		float getTravelTime(int distance) const override;
	};
}

#endif