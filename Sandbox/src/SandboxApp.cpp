#include <BoltEngine.h>

#include <imgui/imgui.h>

class ExampleLayer : public BoltEngine::Layer
{
public:
	ExampleLayer()
		: Layer("Example") { }

	void OnUpdate() override
	{
		if (BoltEngine::Input::IsKeyPressed(INPUT_KEY_TAB))
		{
			BOLTENGINE_TRACE("Tab key is pressed!");
		}

		if (BoltEngine::Input::IsMouseButtonPressed(INPUT_MOUSE_BUTTON_LEFT))
		{
			BOLTENGINE_TRACE("Left Mouse Button is pressed!");
		}
	}

	virtual void OnImGuiRender() override
	{
		ImGui::Begin("Test");
		ImGui::Text("Hello World");
		ImGui::End();
	}


	void OnEvent(BoltEngine::Event& event) override
	{
		if (event.GetEventType() == BoltEngine::EventType::KeyPressed)
		{
			BoltEngine::KeyPressedEvent& e = (BoltEngine::KeyPressedEvent&)event;
			BOLTENGINE_TRACE("{0}", (char)e.GetKeyCode());
		}
	}
};

class Sandbox : public BoltEngine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}
};

BoltEngine::Application* BoltEngine::CreateApplication()
{
	return new Sandbox();
}