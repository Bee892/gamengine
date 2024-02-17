//include statements
//need to install libraries, vulkan installed


void main() {

	bool engineActive = true;

	while (engineActive) {
		renderScene(); //create renderer h file
		switch (getInput())	//create inputmanager cpp and h files
		{
		case "move": {/*camera, physics update*/ break; }		//replace with actual cases
		case "interact": {/*animate door, asset loading*/ renderScene() break; }
		case "quit": { engineActive = false };
		}
	}

}