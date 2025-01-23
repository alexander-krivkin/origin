#include "Eagle.h"


namespace ak
{
	double Eagle::getTravelTime(int distance) const
	{
		int velocity{ 8 };
		int distanceReductionPercent{ 6 };

		double travelTime = 0.01f * (100 - distanceReductionPercent) * distance / velocity;

		return travelTime;
	}
}