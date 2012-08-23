// Walter Manger U54576622

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
	friend ostream &operator<<(ostream &out, const Employee &e);
	friend istream &operator>>(istream &in, Employee &e);

public:
	Employee();
	Employee(string, string, string, string, string);
	string getName () const;
	string getID() const;
	string getBirthDate() const;
	string getJoinDate() const;
	string getTitle() const;
	void setName(string name);
	void setID(string id);
	void setBirthDate(string birthDate);
	void setJoinDate(string joinDate);
	void setTitle(string title);
	bool operator<(const Employee &);
	bool operator==(const string &);
private:
	string Name;
	string ID;
	string BirthDate;
	string JoinDate;
	string Title;
};


#endif