#include "Lamb.h"

class Sandbox : public Lamb::Application
{
public:
	Sandbox() 
	{

	}

	~Sandbox() 
	{

	}
};


Lamb::Application* Lamb::CreateApplication()
{
	return new Sandbox();
}
// int main()
// {
// 	Sandbox* sandbox = new Sandbox();
// 	sandbox->Run();
// 	delete sandbox;
// }