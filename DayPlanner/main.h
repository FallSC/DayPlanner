#pragma once

//Planner class holds all necessary functions the program needs to carry out tasks
class Planner {
public:
	//Creating main menu function of class, handles output and taking of input from the user so that they can move to different parts of the program
	void MainMenu()
	{
		//Outputs the main text: Day Planner / Scheduler, this is done regardless of the function executed and persists throughout the program
		std::cout << MAIN_TEXT << std::endl;
		//Outputs title of method to user taking into account any number of spaces required to keep everything symmetrical
		std::cout << NoOfSpaceCompute() << "* Main Menu *" << std::endl;

		return;
	}
	//Performs task of computing number of spaces required to adjust the method title in conjunction to the main: Day Planner / Scheduler text
	std::string NoOfSpaceCompute()
	{
		//Runs a loop - adjusting the number of spaces string based on how many character the main text consists of
		for (int i = 0; i < NUMBER_OF_CHAR; i++)
		{
			//Modifies string with a space each time
			ADDED_SPACES.append(" ");
		}
		//Method returns the string consisting of only spaces
		return ADDED_SPACES;
	}
private:
	//constant string of the program's main text that will be outputted regardless of the method executed
	const std::string MAIN_TEXT = "* Day Planner / Scheduler *";
	//constant integer equalling the number of characters present within the main text string divided by four
	const int NUMBER_OF_CHAR = (MAIN_TEXT.size()/4);
	//initialising the added spaces text as empty
	std::string ADDED_SPACES = "";
};