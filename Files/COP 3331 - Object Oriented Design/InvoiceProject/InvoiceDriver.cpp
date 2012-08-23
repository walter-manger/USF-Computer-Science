#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
	char yesNo;
	string partNumber;
	string partDescription;
	int partPrice;
	int partQuantity;

	cout << "Welcome to the Invoicing Program\n" << endl;

	cout << "Would you like to enter an Invoice? y/n" << endl;

	yesNo = getchar();

	while(getchar() != '\n'); // Clear Buffer... 

	while(yesNo == 'y')
	{
		cout << endl << "Enter a Part Number: ";

		getline(cin, partNumber);

		cout << "Enter a Part Description: "; 

		getline(cin, partDescription);

		cout << "Enter a Part Price: "; 

		cin >> partPrice;

		cout << "Enter a Quantity Purchased: "; 

		cin >> partQuantity;

		cout << endl << "You've Entered: \n" << endl;

		Invoice invoice(partNumber, partDescription, partPrice, partQuantity);

		cout << "Part Number: " << invoice.getPartNumber() << endl << "Part Description: " << invoice.getPartDescription() << endl << "Part Price: " << invoice.getPrice() << endl << "Quantity Purchased: " << invoice.getQuantityPurchased() << endl << "Invoice Amount: " << invoice.getInvoiceAmount() << endl << endl;

		cout << "Enter Another? y/n: " << endl; 

		while(getchar() != '\n'); // Clear Buffer... 

		yesNo = getchar();

		while(getchar() != '\n'); // Clear Buffer... 
	}

	cout << "Exiting..." << endl;

	return 0;
}