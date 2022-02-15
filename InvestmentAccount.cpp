// Security Class
#include "InvestmentAccount.h"

//Other Preprocessor Directives
#include <iostream>
#include <iomanip>

using namespace std;

InvestmentAccount::InvestmentAccount(string name, int num, double fee) : Account(name, num)
{
	brokerFee = fee;
}

void InvestmentAccount::buySecurity(string tick, double quant, double price)
{
	Security newSecurity = Security(tick, price, quant);
	portfolio.push_back(newSecurity);
}

void InvestmentAccount::sellSecurity(string tick, double quant, double price)
{
	for (int i=0; i<portfolio.size(); i++)
	{
		if (portfolio[i].getTicker() == tick)
		{
			portfolio.erase(portfolio.begin()+i);
			break;
		}
	}
}

double InvestmentAccount::getAccountBalance()
{
	double accountBalance = 0;

	for (int i=0; i<portfolio.size(); i++)
	{
		accountBalance += portfolio[i].getCurrentPrice()*portfolio[i].getQuantity();
	}

	return accountBalance;
}

void InvestmentAccount::getAccountSummary()
{
	int columnWidth = 10;
	cout << "Account Name: " << accountName << endl;
	cout << "Account Number: " << accountNumber << endl;
	cout << left 
				 << setw(columnWidth) << "Ticker" 
				 << setw(columnWidth) << "Shares" 
				 << setw(columnWidth) << "Value" 
		<< endl;

	for (int i = 0; i < portfolio.size(); i++)
	{
		cout << setw(columnWidth) << left << portfolio[i].getTicker();
		cout << setw(columnWidth) << left << portfolio[i].getQuantity();
		cout << setw(columnWidth) << left << (portfolio[i].getQuantity() * portfolio[i].getCurrentPrice());
		cout << endl;
	}
}