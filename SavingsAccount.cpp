// Security Class
#include "SavingsAccount.h"

//Other Preprocessor Directives
#include <iostream>

using namespace std;

SavingsAccount::SavingsAccount(string name, int num, double sbal) : Account(name, num)
{
	accountBalance = sbal;
}

void SavingsAccount::deposit(double amount)
{
	accountBalance += amount;
}

void SavingsAccount::withdraw(double amount)
{
	if (amount < accountBalance)
	{
		accountBalance -= amount;
	}
}

double SavingsAccount::getAccountBalance()
{
	return accountBalance;
}