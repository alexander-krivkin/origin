#ifndef AK_SCENE_H
#define AK_SCENE_H

#include "Camel.h"
#include "HighSpeedCamel.h"
#include "Centaur.h"
#include "AllTerrainBoots.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broomstick.h"


namespace ak
{
	enum class COURSEWORKDLL_API RaceTypes
	{
		ONLY_LAND = 1,
		ONLY_AIR = 2,
		LAND_AND_AIR = 3,
	};

	class COURSEWORKDLL_API Scene
	{
	public:
		Scene();
		~Scene() = default;

		void registerTransport(RaceTypes raceType, Transports transportType);
		void cleanScene();
		int getRegisteredTransportNum() const;
		std::string getLastRegisteredTransport() const;
		std::string getRegisteredTransportNames() const;
		std::string getRegisteredTransportTravelTimes(int distance) const;

	private:
		int currentIndex;
		Transport* transport[7];
	};
}

#endif