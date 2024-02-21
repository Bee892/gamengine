#include "game_loop.h"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
	GameEngine::GameLoop gameLoop{};

	try {
		gameLoop.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}