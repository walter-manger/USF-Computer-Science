// Walter Manger U54576622

#include "Employee.h"
#include <string>
#include <iomanip>

ostream &operator<<(ostream &out, const Employee &e)
{
	out << "Name: " <<  e.Name << endl;
	out << "ID: " << e.ID << endl; 
	out << "Birth Date: " << e.BirthDate << endl;
	out << "Join Date: " << e.JoinDate << endl;
	out << "Job Title: " << e.Title << endl;
	return out;
}

istream &operator>>(istream &in, Employee &e)
{
	return in;
}

Employee::Employee() {} // Default Constructor

Employee::Employee(string name, string id, string birthDate, string joinDate, string title)
{
	Name = name;
	ID = id;
	BirthDate = birthDate;
	JoinDate = joinDate;
	Title = title;
}

string Employee::getName() const { return this->Name; }
string Employee::getID() const { return this->ID; }
string Employee::getBirthDate() const { return this->BirthDate; }
string Employee::getJoinDate() const { return this->JoinDate; }
string Employee::getTitle() const { return this->Title; }

void Employee::setName(string name) { this->Name = name; }
void Employee::setID(string id) { this->ID = id; }
void Employee::setBirthDate(string birthDate) { this->BirthDate = birthDate; }
void Employee::setJoinDate(string joinDate) { this->JoinDate = joinDate; }
void Employee::setTitle(string title) { this->Title = title; }

bool Employee::operator<(const Employee &e) { return Name.compare(e.getName()) < 0; }
bool Employee::operator==(const string &right) { return ID.compare(right) == 0; }
