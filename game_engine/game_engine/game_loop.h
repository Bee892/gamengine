#pragma once

#include "engine_window.h"

namespace GameEngine {
	class GameLoop {
	public:
		static constexpr int WIDTH = 640;
		static constexpr int HEIGHT = 640;

		void run();

	private:
		EngineWindow engineWindow{ WIDTH, HEIGHT, "Game Engine" };
	};
}
