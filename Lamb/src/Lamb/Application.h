#pragma once

#include "core.h"

namespace Lamb {

	class LAMB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

