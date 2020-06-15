#pragma once

#ifdef TB_PLATFORM_WINDOWS
	#ifdef TB_BUILD_DLL
		#define	TBENGINE_API __declspec(dllexport)
	#else
		#define TBENGINE_API __declspec(dllimport)
	#endif
#else
	#error need windows
#endif