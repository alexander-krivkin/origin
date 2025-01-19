#ifndef AK_MAGIC_CARPET_H
#define AK_MAGIC_CARPET_H

#include "AirTransport.h"


namespace ak
{
	class COURSEWORKDLL_API MagicCarpet final : public AirTransport
	{
	public:
		MagicCarpet() : AirTransport("����-������") {}
		~MagicCarpet() = default;
		Transports getType() const override { return Transports::MAGIC_CARPET; }
		float getTravelTime(int distance) const override;
	};
}

#endif