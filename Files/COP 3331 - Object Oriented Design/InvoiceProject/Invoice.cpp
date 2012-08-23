#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice( string partNum, string partDesc, int partPrice, int partQuantity)
{
	setPartNumber(partNum);
	setPartDescription(partDesc);
	setPrice(partPrice);
	setQuantityPurchased(partQuantity);
}

void Invoice::setPartNumber( string partNum )
{
	partNumber = partNum;
}

string Invoice::getPartNumber()
{
	return partNumber;
}

void Invoice::setPartDescription( string partDesc )
{
	partDescription = partDesc;
}

string Invoice::getPartDescription()
{
	return partDescription;
}

void Invoice::setQuantityPurchased( int quantPurchased )
{
	quantityPurchased = quantPurchased < 0 ? 0 : quantPurchased;
}

int Invoice::getQuantityPurchased()
{
	return quantityPurchased;
}

void Invoice::setPrice( int itemPrice )
{
	price = itemPrice < 0 ? 0 : itemPrice;
}

int Invoice::getPrice()
{
	return price;
}

int Invoice::getInvoiceAmount()
{
	return getPrice() * getQuantityPurchased();
}

