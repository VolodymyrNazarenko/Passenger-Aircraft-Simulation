#include "GraphicsEngine.h"
#include "ConsoleEngine.h"

//Main function: GLUT runs as a console application starting at main()
int main(int argc, char** argv) {

	// Ask the user for either console or graphics version
	int choice;
	std::cout << "Would you like to run the simulation in the console (1) or with graphics (2)." << std::endl;
	std::cout << "Please enter the number corresponding to your choice: ";
	std::cin >> choice; 

	// Let them try again if entered any number other than 1 or 2
	while (choice != 1 && choice != 2)	{
		std::cout << "Sorry, invalid number. Please enter '1' for a console version or '2' for a graphics version: ";
		std::cin >> choice;
	}
	
	if (choice == 1) {		// Run the console version
		ConsoleEngine CE;
		CE.runConsoleEngine();
	}
	else {					// Run the graphics version
		GraphicsEngine GE;
		GE.runGraphicsEngine(argc, argv);
	}
	
	std::getchar();
	return 0;
}