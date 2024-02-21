#include "engine_window.h"

namespace GameEngine {
	EngineWindow::EngineWindow(int width, int height, std::string name) : _width{ width }, _height{ height }, _windowName{ name } {
		initWindow();
	}

	EngineWindow::~EngineWindow() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void EngineWindow::initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(_width, _height, _windowName.c_str(), nullptr, nullptr);
	}
}