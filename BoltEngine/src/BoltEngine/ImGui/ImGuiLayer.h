#pragma once

#include "BoltEngine/Layer.h"

#include "BoltEngine/Events/ApplicationEvent.h"
#include "BoltEngine/Events/KeyEvent.h"
#include "BoltEngine/Events/MouseEvent.h"

namespace BoltEngine
{

	class BOLTENGINE_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;
		
		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}
