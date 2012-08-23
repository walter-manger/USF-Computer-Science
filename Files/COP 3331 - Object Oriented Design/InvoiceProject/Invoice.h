#include <string>

using namespace std;

class Invoice
{
public:
	Invoice( string, string, int, int );
	void setPartNumber( string );
	string getPartNumber();
	void setPartDescription( string );
	string getPartDescription();
	void setQuantityPurchased( int );
	int getQuantityPurchased();
	void setPrice( int );
	int getPrice();
	int getInvoiceAmount();
private:
	string partNumber;
	string partDescription;
	int quantityPurchased;
	int price;
};
