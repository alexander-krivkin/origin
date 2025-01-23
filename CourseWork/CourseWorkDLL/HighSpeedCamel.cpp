#include "HighSpeedCamel.h"


namespace ak
{
	double HighSpeedCamel::getTravelTime(int distance) const
	{
		int velocity{ 40 };
		int travelTimeToHalt{ 10 };

		double pureTravelTime = static_cast<double>(distance / velocity);
		int haltNum = static_cast<int>(pureTravelTime / travelTimeToHalt);

		double pureRestTime{};
		if (haltNum == 1)
		{
			pureRestTime = 5.0f;
		}
		else if (haltNum == 2)
		{
			pureRestTime = 5.0f + 6.5f;
		}
		else if (haltNum > 2)
		{
			pureRestTime = 5.0f + 6.5f + 8.0f * (haltNum - 2);
		}

		double travelTime = pureTravelTime + pureRestTime;

		return travelTime;
	}
}