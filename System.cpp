#include "System.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "User.h"
using namespace std;

System::System()
{
	cout << "Welcome to the Online Banking System" << endl;
	mainMenu();
}

void System::mainMenu()
{
	int selection;
	bool valid;
	
	do {

		// Main Menu
		cout << "[1] Sign up as new user" << endl;
		cout << "[2] View account information" << endl;
		cout << "[3] Create a new account" << endl;
		cout << "[4] Transfer funds between accounts" << endl;
		cout << "[5] Update Personal Information" << endl;
		cout << "[6] Exit" << endl;

		cin >> selection;

		switch(selection)
		{
		case 1:
			createNewUser();
			valid = true;
			break;
		case 2:
			viewAccountInfo();
			valid = true;
			break;
		case 3:
			createNewAccount();
			valid = true;
			break;
		case 4:
			transferFunds();
			valid = true;
			break;
		case 5:
			updatePersonalInfo();
			valid = true;
			break;
		case 6:
			exit(EXIT_FAILURE);
			break;
		default:
			cout << "Please enter a valid input" << endl;
			valid = false;
		}

	} while (!valid);
	
}

void System::createNewUser()
{
	string firstName;
	string middleName;
	string lastName;

	string address;

	int selection;
	string status;
	
	//Assign User Name
	cout << "Enter first, middle, and last name separated by spaces. If you do not have a middle name, please enter NA for your middle name: ";
	cin >> firstName >> middleName >> lastName;
	string fullName[3] = { firstName, middleName, lastName };
	cout << endl;

	//Assign User Address
	cout << "Enter your address: ";
	cin.ignore();
	getline(cin, address);
	cout << endl;

	//Assign User Status
	cout << "Would you like to pay a one-time fee to become a preferred status customer?" << endl;
	cout << "[1] Yes" << endl;
	cout << "[2] No" << endl;
	cin >> selection;

	if (selection == 1)
	{
		status = "Preferred";
	}
	else if (selection == 2)
	{
		status = "Standard";
	}

	//Create User Object
	
	//  newUser = User(fullName, address, status);

	mainMenu();
	
}

void System::viewAccountInfo()
{
	// Account Information Menu
	cout << "Which account would you like to view information on?" << endl;
	
	//User.listAccounts()

	mainMenu();
}

void System::createNewAccount()
{
	cout << "You created a new account!" << endl;

	mainMenu();
}

void System::transferFunds()
{
	cout << "You transferred funds!" << endl;
	
	mainMenu();
}

void System::updatePersonalInfo()
{
	int selection;
	bool valid;
	
	do {
		cout << "Which Information would you like to update?" << endl;
		cout << "[1] Name" << endl;
		cout << "[2] Phone Number" << endl;
		cout << "[3] Address" << endl;
		cout << "[4] Back to Main Menu" << endl;

		cin >> selection;

		switch (selection)
		{
		case 1:
			//User.setName()
			cout << "Information Change Complete!" << endl;
			valid = true;
			break;
		case 2:
			//User.setPhoneNumber();
			cout << "Information Change Complete!" << endl;
			valid = true;
			break;
		case 3:
			//User.setAddress();
			cout << "Information Change Complete!" << endl;
			valid = true;
			break;
		case 4:
			mainMenu();
			break;
		default:
			cout << "Please enter a valid input" << endl;
			valid = false;
		}

	} while (!valid);

	mainMenu();
	
}