#pragma once

#ifdef PU_PLATFORM_WINDOWS
	#ifdef PU_BUILD_DLL
		#define PU_API __declspec(dllexport)
	#else
		#define PU_API __declspec(dllimport)
	#endif
#else
	#error Parallel Universe Engine currently only supports windows systems
#endif
