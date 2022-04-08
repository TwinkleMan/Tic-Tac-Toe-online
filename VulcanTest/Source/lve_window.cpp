#include "lve_window.h"

namespace lve {

	LveWindow::LveWindow(uint32_t window_width, uint32_t window_height, std::string window_name) : width{ window_width }, height{ window_height }, name{ window_name } {
		initWindow();
	}

	LveWindow::~LveWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void LveWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
	}

}
