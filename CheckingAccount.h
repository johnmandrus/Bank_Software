#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

// Preprocessor Directives
#include <iostream>
#include "Account.h"

using namespace std;

//System class declaration
class CheckingAccount : public Account
{
public:
	CheckingAccount(string, int, double, double);
	void deposit(double);
	void withdraw(double);
	double getAccountBalance();
	double getOverdraftFee();

private:
	double overdraftFee;
	double accountBalance;

protected:

};

#endif
