// Specification file for the System class
#ifndef SYSTEM_H
#define SYSTEM_H

// Preprocessor Directives
#include <iostream>
#include <vector>
#include "User.h"

//System class declaration
class System
{
public:
	System();
	void mainMenu();
	void createNewAccount();
	void createNewUser();
	void viewAccountInfo();
	void transferFunds();
	void updatePersonalInfo();
private:
	//vector<int> users;
protected:
};

#endif