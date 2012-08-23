/*
	Walter Manger
	U54576622
*/

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "birthday.h"

using namespace std;

class person
{
public:
	person(string name, birthday bd);
	person(string name, int m, int d, int y);
	void showPerson() const;
	~person();
private:
	string name;
	birthday bday;
};

#endif
