// Security Class
#include "Account.h"

//Other Preprocessor Directives
#include <iostream>

using namespace std;

Account::Account(string name, int num)
{
	accountName = name;
	accountNumber = num;
}

int Account::getAccountNumber()
{
	return accountNumber;
}

string Account::getAccountName()
{
	return accountName;
}