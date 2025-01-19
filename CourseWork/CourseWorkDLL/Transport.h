#ifndef AK_TRANSPORT_H
#define AK_TRANSPORT_H

#ifdef COURSEWORKDLL_EXPORTS
#define COURSEWORKDLL_API __declspec(dllexport)
#else
#define COURSEWORKDLL_API __declspec(dllimport)
#endif

#include <string>


namespace ak
{
	enum class COURSEWORKDLL_API Transports
	{
		NONE = 0,
		ALL_TERRAIN_BOOTS = 1,
		BROOMSTICK = 2,
		CAMEL = 3,
		CENTAUR = 4,
		EAGLE = 5,
		HIGH_SPEED_CAMEL = 6,
		MAGIC_CARPET = 7,
	};

	class COURSEWORKDLL_API Transport
	{
	public:
		Transport() = default;
		explicit Transport(std::string name) : name(name) {}
		virtual ~Transport() = default;
		std::string getName() const { return name; }
		virtual Transports getType() const { return Transports::NONE; }
		virtual float getTravelTime(int distance) const;

	private:
		std::string name;
	};
}

#endif