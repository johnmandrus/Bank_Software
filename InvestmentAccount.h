#ifndef INVESTMENT_ACCOUNT_H
#define INVESTMENT_ACCOUNT_H

// Preprocessor Directives
#include <iostream>
#include "Account.h"
#include "Security.h"
#include <vector>

using namespace std;

//System class declaration
class InvestmentAccount : public Account
{
public:
	InvestmentAccount(string, int, double);
	void buySecurity(string, double, double);
	void sellSecurity(string, double, double);
	double getAccountBalance();
	void getAccountSummary();

private:
	vector<Security> portfolio;
	double brokerFee;

protected:

};

#endif
