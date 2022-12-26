#include <iostream>
#include <string>
#include <algorithm>
#include <conio.h>
#include <stdlib.h>
#include <limits>

#include "SECURITY GUI.h"

//void SecurityGUI(int choice);
void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


int main()
{
	//User inputs.
    std::string email{ " " };
    int password{ 0 };
	//User new inputs.
	std::string newEmail{ " " };
	int newPassword{ 0 };
	//User registration inputs.
	std::string registrationEmail{ " " };
	int registrationPassword{ 0 };

	//Check if the user input is equal to right information about the login.
	std::string emailValidation{ " A " };
	int passwordValidation{ 123 };

	//Switch choices from the user.
	int choice{ 0 };

	//SECURITY GUI.
	std::cout << "-----------------\n";
	std::cout << "| Security Check |\n";
	std::cout << "-----------------\n";

	//User choice.
	std::cout << "Choose a option: \n";
	std::cout << "1.Login.\n";
	std::cout << "2.Registration.\n";
	std::cout << "3.Change password/email.\n";
	std::cout << "4.Exit.\n";
	std::cout << "\n";
	std::cout << "Option : ";
	std::cin >> choice;
	std::cout << "\n";

		//While loop for the choice , and switch choices.
		while (choice != 4)
		{
			switch (choice)
			{
			case 1://Login.

				//LOGIN GUI.
				std::cout << " ---------------\n";
				std::cout << "|     LOGIN     |\n";
				std::cout << " ---------------\n";

				//Login input.
				std::cout << "Enter email: ";
				std::cin >> email;
				std::cout << "Enter a password: ";
				std::cin >> password;

				//If check for the password and email if its correct.
				if (email == emailValidation && password == passwordValidation)//If successful.
				{
					//Successful login GUI.
					std::cout << "\n";
					std::cout << " -------------------\n";
					std::cout << "| Successful login! |\n";
					std::cout << " -------------------\n";
				}
				//else if (email != emailValidation || password != passwordValidation)//If Unseccessful login with the password or the email.
				//{
				//	//Unseccessful login GUI.
				//	std::cout << "\n";
				//	std::cout << " -----------------------------------\n";
				//	std::cout << "|        Unsuccessful login!        |\n";
				//	std::cout << "| Password or email is not correct! |\n";
				//	std::cout << " -----------------------------------\n";
				//}
				else
				{
					//Unseccessful login GUI.
					std::cout << "\n";
					std::cout << " ---------------------------\n";
					std::cout << "|    Unsuccessful login!    |\n";
					std::cout << "|  Non - existent profile.  |\n";
					std::cout << " ---------------------------\n";
					std::cout << " ------------------------------------------\n";
					std::cout << "|                 WARNING.                 |\n";
					std::cout << "| Check: Password or Email if not correct! |\n";
					std::cout << " ------------------------------------------\n";
				}

				std::cout << "\n";

				//SECURITY GUI.
				std::cout << " ----------------\n";
				std::cout << "| Security Check |\n";
				std::cout << " ----------------\n";

				//User choice.
				std::cout << "Choose a option: \n";
				std::cout << "1.Login.\n";
				std::cout << "2.Registration.\n";
				std::cout << "3.Change password/email.\n";
				std::cout << "4.Exit.\n";
				std::cout << "\n";
				std::cout << "Option : ";
				std::cout << "\n";
				std::cin >> choice;
				std::cout << "\n";
				break;
			case 2://Registration.

				//REGISTRATION GUI.
				std::cout << " --------------\n";
				std::cout << "| REGISTRATION |\n";
				std::cout << " --------------\n";

				//Registration input.
				std::cout << "Enter email: ";
				std::cin >> registrationEmail;
				std::cout << "Enter a password: ";
				std::cin >> registrationPassword;

				//Registration
				emailValidation = registrationEmail;
				passwordValidation = registrationPassword;

				//Successful registration GUI.
				std::cout << "\n";
				std::cout << " --------------------------\n";
				std::cout << "| Successful registration! |\n";
				std::cout << " --------------------------\n";

				std::cout << "\n";

				//SECURITY GUI.
				std::cout << " ----------------\n";
				std::cout << "| Security Check |\n";
				std::cout << " ----------------\n";

				//User choice.
				std::cout << "Choose a option: \n";
				std::cout << "1.Login.\n";
				std::cout << "2.Registration.\n";
				std::cout << "3.Change password/email.\n";
				std::cout << "4.Exit.\n";
				std::cout << "\n";
				std::cout << "Option : ";
				std::cin >> choice;
				std::cout << "\n";
				break;
			case 3://Change password or email.

				//REGISTRATION GUI.
				std::cout << " -----------------------\n";
				std::cout << "| CHANGE EMAIL/PASSWORD |\n";
				std::cout << " -----------------------\n";

				//Registration input.
				std::cout << "Enter new email: ";
				std::cin >> newEmail;
				std::cout << "Enter a new password: ";
				std::cin >> newPassword;

				//Registration
				emailValidation = newEmail;
				passwordValidation = newPassword;

				//Successful registration GUI.
				std::cout << "\n";
				std::cout << " ----------------------\n";
				std::cout << "| Successful changing! |\n";
				std::cout << " ----------------------\n";

				std::cout << "\n";

				//SECURITY GUI.
				std::cout << " ----------------\n";
				std::cout << "| Security Check |\n";
				std::cout << " ----------------\n";

				//User choice.
				std::cout << "Choose a option: \n";
				std::cout << "1.Login.\n";
				std::cout << "2.Registration.\n";
				std::cout << "3.Change password/email.\n";
				std::cout << "4.Exit.\n";
				std::cout << "\n";
				std::cout << "Option : ";
				std::cin >> choice;
				std::cout << "\n";
				break;
			case 4://Exit

				//Exiting.
				break;
			default:
				choice = 4;
				break;
			}
		}
	std::cout << " ------------\n";
	std::cout << "| EXITING... |\n";
	std::cout << " ------------\n";

	return 0;
}
