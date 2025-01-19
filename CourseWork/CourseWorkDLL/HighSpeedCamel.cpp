#include "HighSpeedCamel.h"


namespace ak
{
	float HighSpeedCamel::getTravelTime(int distance) const
	{
		int velocity{ 40 };
		int travelTimeToHalt{ 10 };

		float pureTravelTime = static_cast<float>(distance) / velocity;
		int haltNum = pureTravelTime / travelTimeToHalt;

		float pureRestTime{};
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

		float travelTime = pureTravelTime + pureRestTime;

		return travelTime;
	}
}