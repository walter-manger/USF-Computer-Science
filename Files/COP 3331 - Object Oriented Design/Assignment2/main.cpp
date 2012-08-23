// Walter Manger U54576622

#include <iostream>
#include "StrLib.h"
#include <string>

using namespace std;

int main()
{
	StrLib str; // Default constructor
	cout << "Str is " << str << endl;

	str = "Hello";	// Assignment from char*
	cout << "Str is " << str << endl;

	StrLib str2 = "My"; // Constructor from char*
	cout << "Str2 is " << str2 << endl;

	//Reverse the string that is inside an object
	//StrLib a;
	// a = "Hello";
	//output: olleH
	cout << stringReverse(str) << endl; 

	StrLib str3(str2); // Constructor from StrLib&
	cout << "Str3 is " << str3 << endl;

	str3 = str;// Assignment from StrLib&
	cout << "Str3 is " << str3 << endl;

	StrLib str4;
	str4 = str + str2 + str3; // + operator and the = operator
	cout << "Str4 is " << str4 << endl;
	cout << str + str2 + str3 << endl;// + operator, with a
	// temporary string 
				
	// These are constructors called to create temporary StrLib
	cout << StrLib ("Hello ") + StrLib ("There!") << endl;

	cout << str3 + "Goodbye" << endl;// Here the compiler is smart enough to convert the char* into a StrLib and then call the + operator
	str3 = str3; // Assignment to self
	str3[4] = 'X';	// Change a character
	cout << "Str3: " << str3 << endl;

	cout << "Read two strings from user input: " << endl;
	cin >> str;// Exercise operator>>
	cin >> str2;
	cout << "You said: " << str << " and " << str2 << endl;

	cout << "Str: " << str << endl;
	cout << "Str2: " << str2 << endl;

	// Comments added for clarity.
	cout << (str < str2) << " (Returns 1 when " << str << " is alphanumerically less than " << str2 << ")" << endl; //< operator
	cout << (str > str2) << " (Returns 1 when " << str << " is alphanumerically greater than " << str2 << ")" << endl; //> operator
	cout << (str == str2) << " (Returns 1 when " << str << " is alphanumerically equal to " << str2 << ")" << endl; //== operator

	StrLib str5 = 100;
	cout << "Str5: " << str5 << endl;

	str5 = StrLib (400) + "+" + 700 + "==" + (200+300);  // This equality is wrong, but from the Original main.cpp
	cout << "Str5: " << str5 << endl;

	str5 = 500 + 600;	// Build a string "1100"
	cout << "Str5: " << str5 << endl;

	return 0;
}

