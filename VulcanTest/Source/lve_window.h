#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW\glfw3.h>

#include <string>
#include <stdint.h>

namespace lve {
	
	class LveWindow 
	{
	private:
		uint32_t width;
		uint32_t height;

		std::string name;
		GLFWwindow* window;

		void initWindow();


	public:
		LveWindow(uint32_t width, uint32_t height, std::string name);
		~LveWindow();

		LveWindow(const LveWindow&) = delete;
		LveWindow& operator = (const LveWindow&) = delete;

		bool shouldClose() { return glfwWindowShouldClose(window); }

	};

}
