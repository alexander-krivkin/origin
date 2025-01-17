#ifndef AK_LEAVER_H
#define AK_LEAVER_H

#ifdef DYNAMICLIB_EXPORTS
#define DYNAMICLIB_API __declspec(dllexport)
#else
#define DYNAMICLIB_API __declspec(dllimport)
#endif

#include <string>


namespace ak
{
	DYNAMICLIB_API void leave(std::string name);
}

#endif