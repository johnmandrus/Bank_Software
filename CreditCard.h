#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

// Preprocessor Directives
#include <iostream>
#include "Account.h"

using namespace std;

class CreditCard : public Account
{
public:
	CreditCard(string, int, double, double);
	void charge(double);
	void pay(double);
	double getBalance();
	double getPoints();

private:
	double accountBalance;
	double points;
	double interestRate;
	double pointRate;
};

#endif