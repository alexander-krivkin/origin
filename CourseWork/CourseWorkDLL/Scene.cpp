#include <string>

#include "Scene.h"
#include "Errors.h"


namespace ak
{
	Scene::Scene() : currentIndex(-1)
	{
		for (int idx{}; idx < 7; ++idx)
		{
			transport[idx] = nullptr;
		}
	}

	void Scene::registerTransport(RaceTypes raceType, Transports transportType)
	{
		if (transportType == Transports::NONE)
			return;

		if (raceType == RaceTypes::ONLY_LAND)
		{
			if ((transportType == Transports::BROOMSTICK) ||
				(transportType == Transports::EAGLE) ||
				(transportType == Transports::MAGIC_CARPET))
			{
				throw ak::ErrLandTransportRequired();
				return;
			}
		}

		if (raceType == RaceTypes::ONLY_AIR)
		{
			if ((transportType != Transports::BROOMSTICK) &&
				(transportType != Transports::EAGLE) &&
				(transportType != Transports::MAGIC_CARPET))
			{
				throw ak::ErrAirTransportRequired();
				return;
			}
		}

		for (int idx{}; idx <= currentIndex; ++idx)
		{
			if(transportType == transport[idx]->getType())
			{
				throw ak::ErrDuplicatedTransport();
				return;
			}
		}

		switch (transportType)
		{
		case Transports::ALL_TERRAIN_BOOTS:
			transport[++currentIndex] = new AllTerrainBoots;
			break;
		case Transports::BROOMSTICK:
			transport[++currentIndex] = new Broomstick;
			break;
		case Transports::CAMEL:
			transport[++currentIndex] = new Camel;
			break;
		case Transports::CENTAUR:
			transport[++currentIndex] = new Centaur;
			break;
		case Transports::EAGLE:
			transport[++currentIndex] = new Eagle;
			break;
		case Transports::HIGH_SPEED_CAMEL:
			transport[++currentIndex] = new HighSpeedCamel;
			break;
		case Transports::MAGIC_CARPET:
			transport[++currentIndex] = new MagicCarpet;
			break;
		default:
			break;
		}
	}

	void Scene::cleanScene()
	{
		for (int idx{ currentIndex }; idx >= 0; --idx)
		{
			delete transport[currentIndex];
			transport[currentIndex--] = nullptr;
		}
	}

	int Scene::getRegisteredTransportNum() const
	{
		return (currentIndex + 1);
	}

	std::string Scene::getLastRegisteredTransport() const
	{
		return transport[currentIndex]->getName();
	}

	std::string Scene::getRegisteredTransportNames() const
	{
		std::string names{};

		for (int idx{}; idx < currentIndex; ++idx)
		{
			names += transport[idx]->getName();
			names += ", ";
		}

		names += transport[currentIndex]->getName();

		return names;
	}

	std::string Scene::getRegisteredTransportTravelTimes(int distance) const
	{
		float rawTravelTimeArr[7]{};
		int indiciesArr[7]{};

		for (int idx{}; idx <= currentIndex; ++idx)
		{
			rawTravelTimeArr[idx] = transport[idx]->getTravelTime(distance);
			indiciesArr[idx] = idx;
		}

		for (int i{}; i <= currentIndex - 1; ++i)
		{
			for (int j{}; j <= currentIndex - i - 1; ++j)
			{
				if (rawTravelTimeArr[j] > rawTravelTimeArr[j + 1])
				{
					float tmpTravelTime = rawTravelTimeArr[j];
					rawTravelTimeArr[j] = rawTravelTimeArr[j + 1];
					rawTravelTimeArr[j + 1] = tmpTravelTime;

					int tmpIndex = indiciesArr[j];
					indiciesArr[j] = indiciesArr[j + 1];
					indiciesArr[j + 1] = tmpIndex;
				}
			}
		}

		std::string travelTimes{};

		for (int idx{}; idx <= currentIndex; ++idx)
		{
			travelTimes += std::to_string(idx + 1);
			travelTimes += ". ";
			travelTimes += transport[indiciesArr[idx]]->getName();
			travelTimes += ". Время: ";
			travelTimes += std::to_string(transport[indiciesArr[idx]]->getTravelTime(distance));
			travelTimes += "\n";
		}

		return travelTimes;
	}
}