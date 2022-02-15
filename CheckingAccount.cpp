// Security Class
#include "CheckingAccount.h"

//Other Preprocessor Directives
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount(string name, int num, double sbal, double fee) : Account(name, num)
{
	accountBalance = sbal;
	overdraftFee = fee;
}

void CheckingAccount::deposit(double amount)
{
	accountBalance += amount;
}

void CheckingAccount::withdraw(double amount)
{
	if (amount < accountBalance)
	{
		accountBalance -= amount;
	}
}

double CheckingAccount::getAccountBalance()
{
	return accountBalance;
}

double CheckingAccount::getOverdraftFee()
{
	return overdraftFee;
}