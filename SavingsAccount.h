#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

// Preprocessor Directives
#include <iostream>
#include "Account.h"

using namespace std;

//System class declaration
class SavingsAccount : public Account
{
public:
	SavingsAccount(string, int, double);
	void deposit(double);
	void withdraw(double);
	double getAccountBalance();

private:
	double interestRate;
	double accountBalance;

protected:

};

#endif

