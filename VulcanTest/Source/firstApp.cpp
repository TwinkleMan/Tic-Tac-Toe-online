#include "firstApp.h"

namespace lve {

	void lve::FirstApp::run()
	{
		while (!lveWindow.shouldClose())
		{
			glfwPollEvents();
		}
	}

}
