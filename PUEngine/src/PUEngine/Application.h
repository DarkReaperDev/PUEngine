#pragma once

#include "Core.h"

namespace PUEngine {

	class PU_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();

}

