#include "Camel.h"


namespace ak
{
	double Camel::getTravelTime(int distance) const
	{
		int velocity{ 10 };
		int travelTimeToHalt{ 30 };

		double pureTravelTime = static_cast<double>(distance / velocity);
		int haltNum = static_cast<int>(pureTravelTime / travelTimeToHalt);
		if (!(distance % (velocity * travelTimeToHalt))) --haltNum;

		double pureRestTime{};
		if (haltNum == 1)
		{
			pureRestTime = 5.0f;
		}
		else if (haltNum > 1)
		{
			pureRestTime = 5.0f + 8.0f * (haltNum - 1);
		}

		double travelTime = pureTravelTime + pureRestTime;

		return travelTime;
	}
}