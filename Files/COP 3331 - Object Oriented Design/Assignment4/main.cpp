// Walter Manger U54576622

#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <functional>
#include "Employee.h"

using namespace std;

int ShowMenu();
int ShowEmployeeMenu();
Employee EnterNewEmployee(list<Employee> &);
void EditEmployee(list<Employee>::iterator &, list<Employee> &);
bool IdIsUnique(string, list<Employee> &);

int main()
{
	string employeeId = "";
	list<Employee> employeeList;
	list<Employee>::const_iterator ei;
	list<Employee>::iterator i; 

	Employee emp;
	int menuValue = 0;

	cout << "Welcome to the Employee Database Program: " << endl << endl;

	do
	{
		menuValue = ShowMenu();

		switch(menuValue)
		{
		case 1: 
			emp = EnterNewEmployee(employeeList);
			employeeList.push_back(emp);
			cout << endl;
			break;
		case 2:
			cout << endl << "Enter an Employee ID: ";
			getline(cin, employeeId);

			i = find(employeeList.begin(), employeeList.end(), employeeId);

			if(i != employeeList.end())
				cout << endl << *i << endl << endl;
			else
				cout << "Could not find Employee with ID: " << employeeId << endl;
			break;
		case 3:
			cout << endl << "Enter an Employee ID to edit an Employee: ";
			getline(cin, employeeId);

			i = find(employeeList.begin(), employeeList.end(), employeeId);

			if(i != employeeList.end())
				EditEmployee(i, employeeList);
			else
				cout << "Could not find Employee with ID: " << employeeId << endl;
			break;

		case 4:
			cout << endl << "Listing Employees Alphabetically by Name: " << endl << endl;
			employeeList.sort(); // Sorts the list Alphabetically
			for(ei = employeeList.begin(); ei != employeeList.end(); ei++)
				cout << *ei << endl;
			break;
		case 5:
			cout << "Exiting" << endl;
			menuValue = 0;
			break;
		default:
			cout << "Unrecognized Option: Exiting" << endl;
			menuValue = 0;
			break;
		}

		cout << endl;
		
	}while(menuValue > 0);

	return 0;
}

int ShowMenu()
{
	int selectionValue = 0;
	
	while(selectionValue == 0)
	{
		cout << "Select an option from the menu:" << endl;
		cout << "1. Add a new Employee's name, ID, Date of Birth, Date of Joining, Job Title" << endl;
		cout << "2. Search and print and employee based on Employee ID." << endl;
		cout << "3. Edit employee information." << endl;
		cout << "4. Print all the employee names in the database in alphabetical order." << endl;
		cout << "5. Exit" << endl << endl;

		cout << "Your selection? ";

		cin >> selectionValue;
		while(cin.get() != '\n'); // Clear the buffer

		if(selectionValue > 5 || selectionValue < 1)
			selectionValue = 0;
	}

	return selectionValue;	
}

Employee EnterNewEmployee(list<Employee> &l)
{
	string Name;
	string ID;
	string BirthDate;
	string JoinDate;
	string Title;
	bool unique = false;
	Employee e;

	cout << "Enter a name: ";
	getline(cin, Name);

	cout << "Enter an ID: ";
	getline(cin, ID);

	unique = IdIsUnique(ID, l);

	while(!unique)
	{
		cout << "The ID you entered is not unique, please enter one that is unique" << endl;
		cout << "Enter an ID: ";
		getline(cin, ID);
		unique = IdIsUnique(ID, l);
	}

	cout << "Enter a Date of Birth: ";
	getline(cin, BirthDate);

	cout << "Enter a Join Date: "; 
	getline(cin, JoinDate);

	cout << "Enter a Job Title: "; 
	getline(cin, Title);

	e = Employee(Name, ID, BirthDate, JoinDate, Title);

	return e;
}

void EditEmployee(list<Employee>::iterator &e, list<Employee> &l)
{
	int menuValue = 0;

	string Name;
	string ID;
	string BirthDate;
	string JoinDate;
	string Title;
	bool unique = false;

	string currentID = e->getID(); 

	do
	{
		menuValue = ShowEmployeeMenu();

		switch(menuValue)
		{
		case 1: 
			cout << "New Name: ";
			getline(cin, Name);
			e->setName(Name);
			break;
		case 2:
			cout << "New ID: ";
			getline(cin, ID);

			if(currentID != ID)
			{
				unique = IdIsUnique(ID, l);

				while(!unique)
				{
					cout << "The ID you entered is not unique, please enter one that is unique" << endl;
					cout << "New ID: ";
					getline(cin, ID);
					unique = IdIsUnique(ID, l);
				}

				e->setID(ID);
			}

			break;
		case 3:
			cout << "New Date of Birth: ";
			getline(cin, BirthDate);
			e->setBirthDate(BirthDate);
			break;
		case 4:
			cout << "New Join Date: "; 
			getline(cin, JoinDate);
			e->setJoinDate(JoinDate);
			break;
		case 5:
			cout << "New Job Title: "; 
			getline(cin, Title);
			e->setTitle(Title);
			break;
		case 6:
			menuValue = 0;
			break;
		default:
			cout << "Unrecognized Option: Exiting" << endl;
			break;
		}

		cout << endl;
		
	}while(menuValue > 0);
}

int ShowEmployeeMenu()
{
	int selectionValue = 0;
	
	while(selectionValue == 0)
	{
		cout << "Select an option from the menu:" << endl;
		cout << "1. Edit Name. " << endl;
		cout << "2. Edit ID." << endl;
		cout << "3. Edit Date of Birth." << endl;
		cout << "4. Edit Date of Joining." << endl;
		cout << "5. Edit Job Title" << endl;
		cout << "6. Return to Main Menu." << endl << endl;

		cout << "Your selection? ";

		cin >> selectionValue;
		while(cin.get() != '\n'); // Clear the buffer

		if(selectionValue > 6 || selectionValue < 1)
			selectionValue = 0;
	}

	return selectionValue;	
}

bool IdIsUnique(string id, list<Employee> &l)
{
	list<Employee>::iterator q; 
	q = find(l.begin(), l.end(), id);
	return q == l.end();
}