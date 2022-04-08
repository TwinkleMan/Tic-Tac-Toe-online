#pragma once

#include "lve_window.h"

namespace lve {

	class FirstApp
	{

	public:
		static constexpr uint32_t WIDTH = 800;
		static constexpr uint32_t HEIGHT = 600;
		void run();

	private:
		LveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};

	};

}
