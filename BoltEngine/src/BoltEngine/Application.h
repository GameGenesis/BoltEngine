#pragma once

#include "Core.h"

namespace BoltEngine
{

	class BOLT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();

}

