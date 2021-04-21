#pragma once

#ifdef EL_PLATFORM_WINDOWS
	#ifdef EL_BUILD_DLL
		#define ELLE_API _declspec(dllexport)
	#else
		#define ELLE_API _declspec(dllimport)	
	#endif
#else
	#error Elle only support Windows!
#endif
