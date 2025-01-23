#ifndef AK_CAMEL_H
#define AK_CAMEL_H

#include "LandTransport.h"


namespace ak
{
	class COURSEWORKDLL_API Camel final : public LandTransport
	{
	public:
		Camel() : LandTransport("�������") {}
		~Camel() = default;
		Transports getType() const override { return Transports::CAMEL; }
		double getTravelTime(int distance) const override;
	};
}

#endif