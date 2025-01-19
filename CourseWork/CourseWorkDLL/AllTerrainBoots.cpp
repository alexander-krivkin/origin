#include "AllTerrainBoots.h"


namespace ak
{
	float AllTerrainBoots::getTravelTime(int distance) const
	{
		int velocity{ 6 };
		int travelTimeToHalt{ 60 };

		float pureTravelTime = static_cast<float>(distance) / velocity;
		int haltNum = pureTravelTime / travelTimeToHalt;

		float pureRestTime{};
		if (haltNum == 1)
		{
			pureRestTime = 10.0f;
		}
		else if (haltNum > 1)
		{
			pureRestTime = 10.0f + 5.0f * (haltNum - 1);
		}

		float travelTime = pureTravelTime + pureRestTime;

		return travelTime;
	}
}