#ifndef AK_LAND_TRANSPORT_H
#define AK_LAND_TRANSPORT_H

#include "Transport.h"


namespace ak
{
	class COURSEWORKDLL_API LandTransport : public Transport
	{
	public:
		LandTransport() = default;
		explicit LandTransport(std::string name) : Transport(name) {}
		virtual ~LandTransport() = default;
		virtual Transports getType() const override { return Transports::NONE; }
		virtual float getTravelTime(int distance) const override;
	};
}

#endif