#include "Broomstick.h"


namespace ak
{
	double Broomstick::getTravelTime(int distance) const
	{
		int velocity{ 20 };
		int distanceReductionPercent = static_cast<int>(distance / 1000);

		double travelTime = 0.01f * (100 - distanceReductionPercent) * distance / velocity;

		return travelTime;
	}
}