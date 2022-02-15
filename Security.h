#pragma once

#ifndef SECURITY_H
#define SECURITY_H

// Preprocessor Directives
#include <iostream>
#include <string>

using namespace std;

//System class declaration
class Security
{
public:
	Security(string,double,double);
	double getBuyPrice();
	double getSellPrice();
	double getQuantity();
	double getCurrentPrice();
	string getTicker();
	void setBuyPrice(double);
	void setSellPrice(double);
	void setCurrentPrice(double);

private:
	double buyPrice;
	double sellPrice;
	double currentPrice;
	double quantity;     //A user can old partial shares of a security
	string ticker;
	
};

#endif
