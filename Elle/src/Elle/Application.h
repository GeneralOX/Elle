#pragma once
#include "Core.h"

namespace Elle {

	class ELLE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}