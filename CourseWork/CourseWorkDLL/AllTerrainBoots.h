#ifndef AK_ALL_TERRAIN_BOOTS_H
#define AK_ALL_TERRAIN_BOOTS_H

#include "LandTransport.h"


namespace ak
{
	class COURSEWORKDLL_API AllTerrainBoots final : public LandTransport
	{
	public:
		AllTerrainBoots() : LandTransport("Ботинки-вездеходы") {}
		~AllTerrainBoots() = default;
		Transports getType() const override { return Transports::ALL_TERRAIN_BOOTS; }
		double getTravelTime(int distance) const override;
	};
}

#endif