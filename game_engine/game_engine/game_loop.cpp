#include "game_loop.h"

namespace GameEngine {
	void GameLoop::run() {
		bool engineActive = true;
		while (!engineWindow.closeWindow() && engineActive) {
			glfwPollEvents();
			/*
			//load objects
			switch (getInput())	//create inputmanager
			{//replace with actual cases
			case "move":	{
							//update camera 
							//update physics
							break; 
							}		
			case "interact": {
							//animate door
							//load asset
							//render
							break; 
							}
			case "quit":	{ 
							engineActive = false 
							};
			}*/
		}
	}
}