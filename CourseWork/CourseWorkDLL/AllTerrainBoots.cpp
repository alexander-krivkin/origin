#include "AllTerrainBoots.h"


namespace ak
{
	double AllTerrainBoots::getTravelTime(int distance) const
	{
		int velocity{ 6 };
		int travelTimeToHalt{ 60 };

		double pureTravelTime = static_cast<double>(distance / velocity);
		int haltNum = static_cast<int>(pureTravelTime / travelTimeToHalt);

		double pureRestTime{};
		if (haltNum == 1)
		{
			pureRestTime = 10.0f;
		}
		else if (haltNum > 1)
		{
			pureRestTime = 10.0f + 5.0f * (haltNum - 1);
		}

		double travelTime = pureTravelTime + pureRestTime;

		return travelTime;
	}
}