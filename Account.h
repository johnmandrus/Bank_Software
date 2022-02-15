#ifndef ACCOUNT_H
#define ACCOUNT_H

// Preprocessor Directives
#include <iostream>

using namespace std;

//System class declaration
class Account
{
public:
	Account(string, int);
	int getAccountNumber();
	string getAccountName();
	//virtual double getAccountBalance() const = 0;

private:
	double accountBalance;

protected:
	int accountNumber;
	string accountName;

};

#endif
