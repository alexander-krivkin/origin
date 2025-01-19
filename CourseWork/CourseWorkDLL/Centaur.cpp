#include "Centaur.h"


namespace ak
{
	float Centaur::getTravelTime(int distance) const
	{
		int velocity{ 15 };
		int travelTimeToHalt{ 8 };

		float pureTravelTime = static_cast<float>(distance) / velocity;
		int haltNum = pureTravelTime / travelTimeToHalt;

		float pureRestTime = 2.0f * haltNum;

		float travelTime = pureTravelTime + pureRestTime;

		return travelTime;
	}
}