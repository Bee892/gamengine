#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include<string>

namespace GameEngine {
	class EngineWindow {
	public:
		EngineWindow(int width, int height, std::string name);
		~EngineWindow();

		EngineWindow(const EngineWindow&) = delete;
		EngineWindow& operator=(const EngineWindow&) = delete;

		bool closeWindow() {
			return glfwWindowShouldClose(window);
		}

	private:
		void initWindow();

		const int _width;
		const int _height;
		std::string _windowName;
		GLFWwindow* window;
	};
}