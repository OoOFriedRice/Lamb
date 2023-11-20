#pragma once

#ifdef LB_PLATFORM_WINDOWS

extern Lamb::Application* Lamb::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lamb::CreateApplication();
	app->Run();
	delete app;
}

#endif // LB_PLATROEM_WINDOWS
