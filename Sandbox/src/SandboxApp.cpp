#include <BoltEngine.h>

class Sandbox : public BoltEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

BoltEngine::Application* BoltEngine::CreateApplication()
{
	return new Sandbox();
}