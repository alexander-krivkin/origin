#include "MagicCarpet.h"


namespace ak
{
	float MagicCarpet::getTravelTime(int distance) const
	{
		int velocity{ 10 };

		int distanceReductionPercent{};
		if (distance >= 10000)
		{ 
			distanceReductionPercent = 5;
		}
		else if (distance >= 5000)
		{
			distanceReductionPercent = 10;
		}
		else if (distance >= 1000)
		{
			distanceReductionPercent = 3;
		}

		float travelTime = 0.01 * (100 - distanceReductionPercent) * distance /
			velocity;

		return travelTime;
	}
}