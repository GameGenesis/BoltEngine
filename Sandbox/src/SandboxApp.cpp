#include <BoltEngine.h>

class ExampleLayer : public BoltEngine::Layer
{
public:
	ExampleLayer()
		: Layer("Example") { }

	void OnUpdate() override
	{
		BOLTENGINE_INFO("ExampleLayer::Update");
	}

	void OnEvent(BoltEngine::Event& event) override
	{
		BOLTENGINE_TRACE(event.ToString());
	}
};

class Sandbox : public BoltEngine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new BoltEngine::ImGuiLayer());
	}

	~Sandbox()
	{

	}
};

BoltEngine::Application* BoltEngine::CreateApplication()
{
	return new Sandbox();
}