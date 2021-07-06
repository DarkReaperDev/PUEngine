#include <PUEngine.h>

class Sandbox : public PUEngine::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

PUEngine::Application* PUEngine::CreateApplication() {
	return new Sandbox();
}