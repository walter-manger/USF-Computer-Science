/*
	Walter Manger
	U54576622
*/

#include <iostream>
#include <string>
#include "birthday.h"

using namespace std;

birthday::birthday(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void birthday::show() const
{
	cout << month << "/" << day << "/" << year;
}

birthday::~birthday()
{
	cout << endl;
	this->show();
	cout << "destructor called" << endl;
}

