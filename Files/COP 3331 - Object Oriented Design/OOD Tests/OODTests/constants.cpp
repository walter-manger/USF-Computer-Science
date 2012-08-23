#include <iostream>
#include "constants.h"

using namespace std;


constants::constants(int start):startNumber(start)
{

}

int constants::getFirst() { return first; }

void constants::setFirst(int in) { first = in; }

int constants::getSecond() { return second; }

void constants::setSecond(int in) { second = in; }

int constants::getThird() { return third; }

void constants::setThird(int in) { third = in; }

// A non constant member can call a constant member
void constants::getShowValues() { showValues(); }

// Constants cannot call non-const public members
void constants::showValues() const
{ 
	cout << "First: " << first << endl;						// Can't call getFirst() for example
	cout << "Second: " << second << endl;
	cout << "Third: " << third << endl; 
	cout << "Start Number: " << startNumber << endl;
}
void constants::showSum() const { cout << "Sum is: " << (first + second + third) << endl; } 