#pragma once


#ifdef PU_PLATFORM_WINDOWS

extern PUEngine::Application* PUEngine::CreateApplication();

int main(int argc, char** argv) {
	printf("Parallel Universe Engine\n");
	auto app = PUEngine::CreateApplication();
	app->Run();

	delete app;
}

#endif
	