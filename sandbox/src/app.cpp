#include <Elle.h>

class Sandbox : public Elle::Application
{
public:
	Sandbox(){}
	~Sandbox(){}
};

Elle::Application* Elle::CreateApplication() {
	return new Sandbox();
}