#include "Centaur.h"


namespace ak
{
	double Centaur::getTravelTime(int distance) const
	{
		int velocity{ 15 };
		int travelTimeToHalt{ 8 };

		double pureTravelTime = static_cast<double>(distance / velocity);
		int haltNum = static_cast<int>(pureTravelTime / travelTimeToHalt);

		double pureRestTime = 2.0f * haltNum;

		double travelTime = pureTravelTime + pureRestTime;

		return travelTime;
	}
}