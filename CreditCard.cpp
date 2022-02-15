// Security Class
#include "CreditCard.h"

//Other Preprocessor Directives
#include <iostream>

using namespace std;

CreditCard::CreditCard(string name, int num, double iRate, double pRate) : Account(name, num)
{
	interestRate = iRate;
	pointRate = pRate;
	
	accountBalance = 0;
	points = 0;
}

void CreditCard::charge(double amount)
{
	accountBalance += amount;
}

void CreditCard::pay(double amount)
{
	accountBalance -= amount;
}

double CreditCard::getBalance()
{
	return accountBalance;
}

double CreditCard::getPoints()
{
	return points;
}