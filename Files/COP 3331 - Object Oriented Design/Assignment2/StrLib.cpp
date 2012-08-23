// Walter Manger U54576622

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include "StrLib.h"

using namespace std;

ostream &operator<<(ostream &out, const StrLib &s)
{
	out << s.cstr;
	return out;
}

istream &operator>>(istream &in, StrLib &s)
{
	string tempIn;
	getline(cin, tempIn);
	StrLib sTemp(&tempIn[0]);
	s = sTemp;

	return in;
}

// Per class discussion, this function is a friend and does NOT do an in-place string replace
StrLib stringReverse(StrLib &in)
{
	StrLib temp(in);
	char *pointerTemp, *pointerIn;

	pointerTemp = temp.cstr; 
	pointerIn = in.cstr + (in.length() - 1);

	while(pointerIn >= in.cstr)
	{
		*pointerTemp++ = *pointerIn--;
	}

	return temp;
}

StrLib::StrLib() { 
	cstr = new char[1];
	cstr[0] = '\0';
} 

StrLib::StrLib(const char* cstr) 
{
	this->cstr = new char[strlen(cstr) + 1];
	strcpy(this->cstr, cstr);
}

StrLib::StrLib(const StrLib &in) 
{
	cstr = new char[in.length() + 1];
	strcpy(this->cstr, in.cstr);
}

StrLib::StrLib(int i) 
{
	string in; 
	stringstream converted;

	converted << i;	
	in = converted.str();

	cstr = new char[strlen(&in[0]) + 1];

	strcpy(cstr, &in[0]);
}

StrLib &StrLib::operator=(const char *cstr1) 
{
	StrLib s(cstr1);

	if(this != &s)
	{
		delete[] this->cstr;
		this->cstr = new char[strlen(cstr1) + 1];
		strcpy(this->cstr,cstr1);
	}

	return *this;
}

StrLib &StrLib::operator=(const StrLib &mstr) 
{
	if(this != &mstr)
	{
		delete[] this->cstr;
		this->cstr = new char[mstr.length() + 1];
		strcpy(this->cstr,mstr.cstr);
	}

	return *this;
}

StrLib StrLib::operator+(const StrLib &mstr) 
{
	StrLib value;
	char *temp = new char[strlen(cstr) + 1 + mstr.length() + 1];
		
	strcpy(temp, cstr);
	strcat(temp, mstr.cstr);

	value = temp;

	delete [] temp;

	return value;
}

char &StrLib::operator[](int pos) 
{
	if(0 < pos && pos < length())
		return cstr[pos];

	cerr << "\nError: Subscript " << pos << " out of range" << endl;
	return cstr[0];
}

int StrLib::operator<(const StrLib &mstr) { return strcmp(this->cstr, mstr.cstr) == -1; }
int StrLib::operator>(const StrLib &mstr) { return strcmp(this->cstr, mstr.cstr) == 1; }
int StrLib::operator==(const StrLib &mstr) { return strcmp(this->cstr, mstr.cstr) == 0; }

int StrLib::length() const 
{
	return strlen(cstr);
}

StrLib::~StrLib () 
{
	delete[] cstr; 
}
