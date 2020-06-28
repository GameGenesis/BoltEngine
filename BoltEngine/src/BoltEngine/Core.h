#pragma once

#ifdef BOLTENGINE_PLATFORM_WINDOWS
	#ifdef BOLTENGINE_BUILD_DLL
		#define BOLTENGINE_API __declspec(dllexport)
	#else
		#define BOLTENGINE_API __declspec(dllimport)
	#endif
#else
	#error Platform Not Supported
#endif

#ifdef BOLTENGINE_ENABLE_ASSERTS
	#define BOLTENGINE_ASSERT(x, ...) { if(!(x)) { BOLTENGINE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define BOLTENGINE_CORE_ASSERT(x, ...) { if(!(x)) { BOLTENGINE_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define BOLTENGINE_ASSERT(x, ...)
	#define BOLTENGINE_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
