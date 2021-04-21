#pragma once

#ifdef EL_PLATFORM_WINDOWS
	extern Elle::Application* Elle::CreateApplication();
	
	int main(int argc, char** argv) {
		printf("Welcome to Elle Engine.");

		auto app = Elle::CreateApplication();
		app->Run();
		delete app;
	}
#endif
