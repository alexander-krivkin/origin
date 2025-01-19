#include "Eagle.h"


namespace ak
{
	float Eagle::getTravelTime(int distance) const
	{
		int velocity{ 8 };
		int distanceReductionPercent{ 6 };

		float travelTime = 0.01 * (100 - distanceReductionPercent) * distance /
			velocity;

		return travelTime;
	}
}