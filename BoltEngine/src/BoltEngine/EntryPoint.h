#pragma once

#ifdef BE_PLATFORM_WINDOWS

extern BoltEngine::Application* BoltEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = BoltEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif

