#pragma once

#ifdef BOLTENGINE_PLATFORM_WINDOWS

extern BoltEngine::Application* BoltEngine::CreateApplication();

int main(int argc, char** argv)
{
	BoltEngine::Log::Init();

	BOLTENGINE_CORE_WARN("Initialized Log");
	int a = 5;
	BOLTENGINE_INFO("Hello! Var = {0}", a);

	auto app = BoltEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif

