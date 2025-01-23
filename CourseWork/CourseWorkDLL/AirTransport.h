#ifndef AK_AIR_TRANSPORT_H
#define AK_AIR_TRANSPORT_H

#include "Transport.h"


namespace ak
{
	class COURSEWORKDLL_API AirTransport : public Transport
	{
	public:
		AirTransport() = default;
		explicit AirTransport(std::string name) : Transport(name) {}
		virtual ~AirTransport() = default;
		virtual Transports getType() const override { return Transports::NONE; }
		virtual double getTravelTime(int distance) const override;
	};
}

#endif