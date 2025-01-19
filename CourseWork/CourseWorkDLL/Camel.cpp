#include "Camel.h"


namespace ak
{
	float Camel::getTravelTime(int distance) const
	{
		int velocity{ 10 };
		int travelTimeToHalt{ 30 };

		float pureTravelTime = static_cast<float>(distance) / velocity;
		int haltNum = pureTravelTime / travelTimeToHalt;
		if (!(distance % (velocity * travelTimeToHalt))) --haltNum;

		float pureRestTime{};
		if (haltNum == 1)
		{
			pureRestTime = 5.0f;
		}
		else if (haltNum > 1)
		{
			pureRestTime = 5.0f + 8.0f * (haltNum - 1);
		}

		float travelTime = pureTravelTime + pureRestTime;

		return travelTime;
	}
}