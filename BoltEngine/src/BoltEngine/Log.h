#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace BoltEngine
{
	class BOLTENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
		
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define BOLTENGINE_CORE_TRACE(...)     ::BoltEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BOLTENGINE_CORE_INFO(...)      ::BoltEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BOLTENGINE_CORE_WARN(...)      ::BoltEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BOLTENGINE_CORE_ERROR(...)     ::BoltEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BOLTENGINE_CORE_CRITICAL(...)  ::BoltEngine::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client log macros
#define BOLTENGINE_TRACE(...)          ::BoltEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BOLTENGINE_INFO(...)           ::BoltEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define BOLTENGINE_WARN(...)           ::BoltEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BOLTENGINE_ERROR(...)          ::BoltEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define BOLTENGINE_CRITICAL(...)       ::BoltEngine::Log::GetClientLogger()->critical(__VA_ARGS__)