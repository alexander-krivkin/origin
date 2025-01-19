#ifndef AK_HIGH_SPEED_CAMEL_H
#define AK_HIGH_SPEED_CAMEL_H

#include "LandTransport.h"


namespace ak
{
	class COURSEWORKDLL_API HighSpeedCamel final : public LandTransport
	{
	public:
		HighSpeedCamel() : LandTransport("�������-���������") {}
		~HighSpeedCamel() = default;
		Transports getType() const override { return Transports::HIGH_SPEED_CAMEL; }
		float getTravelTime(int distance) const override;
	};
}

#endif