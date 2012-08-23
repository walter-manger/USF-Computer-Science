// Walter Manger U54576622

#ifndef  StrLib_H
#define  StrLib_H

#include <iostream>

using namespace std;

class StrLib
{
	friend ostream &operator<<(ostream &out, const StrLib &s);
	friend istream &operator>>(istream &in, StrLib &s);
	friend StrLib stringReverse(StrLib &s); // Reverses a string, returns the reversed string

public:
	
	StrLib(); // Default Constructor
	StrLib(const char* cstr); // Parameterized Constructor
	StrLib(int i); // Parameterized Constructor
	StrLib(const StrLib &in); // Copy Constructor

	StrLib &operator=(const char *cstr); // Assignment from Costant Char Pointer
	StrLib &operator=(const StrLib &mstr); // Assignment from Constant StrLib object

	StrLib operator+(const StrLib &mstr); // Allows concatenating two StrLib objects using the '+' operator
	char& operator[](int pos); // Return the character at a given positio
	int operator<(const StrLib &mstr); // Returns 1 (true) if this->cstr is less than mstr.cstr
	int operator>(const StrLib &mstr); // Returns 1 (true) if this->cstr is greater than mstr.cstr
	int operator==(const StrLib &mstr); // Returns 1 (true) if this->cstr is equal to mstr.cstr

	int length() const;

	~StrLib(); // Destructor - Clears cstr

private:
	char *cstr;
};

#endif
