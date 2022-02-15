// Security Class
#include "Security.h"

//Other Preprocessor Directives
#include <iostream>

using namespace std;

Security::Security(string tick, double price, double quant)
{
	ticker = tick;
	buyPrice = price;
	currentPrice = price;  //Initializes current price equal to purchase price
	quantity = quant;
}

double Security::getBuyPrice()
{
	return buyPrice;
}

double Security::getSellPrice()
{
	return sellPrice;
}

double Security::getQuantity()
{
	return quantity;
}

double Security::getCurrentPrice()
{
	return currentPrice;
}

string Security::getTicker()
{
	return ticker;
}

void Security::setBuyPrice(double price)
{
	buyPrice = price;
}

void Security::setSellPrice(double price)
{
	sellPrice = price;
}

void Security::setCurrentPrice(double price)
{
	currentPrice = price;
}