#include <iostream>
#include <string>
#include <algorithm>

#include "SECURITY GUI.h"

void SecurityGUI(int choice) 
{
	//SECURITY GUI.
	std::cout << " ----------------\n";
	std::cout << "| Security Check |\n";
	std::cout << " ----------------\n";
	std::cout << "\n";

	//User choice.
	std::cout << "Choose a option: \n";
	std::cout << "1.Login.\n";
	std::cout << "2.Registration.\n";
	std::cout << "3.Change password/email.\n";
	std::cout << "4.Exit.\n";
	std::cout << "\n";
	std::cout << "Option : ";
	std::cin >> choice;
}
