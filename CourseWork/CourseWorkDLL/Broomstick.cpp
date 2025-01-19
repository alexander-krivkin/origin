#include "Broomstick.h"


namespace ak
{
	float Broomstick::getTravelTime(int distance) const
	{
		int velocity{ 20 };
		int distanceReductionPercent = distance / 1000;

		float travelTime = 0.01 * (100 - distanceReductionPercent) * distance /
			velocity;

		return travelTime;
	}
}