/*
	Walter Manger
	U54576622
*/

#include <iostream>
#include <string>
#include "person.h"
#include "birthday.h"

using namespace std;

person::person(string n, birthday bd)
{
	name = n;
	bday = bd;
}

person::person(string n, int m, int d, int y)
{
	name = n;
	bday = birthday(m,d,y);
}

void person::showPerson() const
{
	cout << name;
	bday.show();
}

person::~person()
{
	cout << endl << this->name;
	cout << " destructor called" << endl;
}