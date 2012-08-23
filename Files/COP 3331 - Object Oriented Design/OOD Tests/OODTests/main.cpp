/*
	Walter Manger
	U54576622
*/

#include <iostream>
#include <string>
#include "birthday.h"
#include "person.h"
#include "constants.h"
#include "a.h"
#include "b.h"

using namespace std;

void outPut();
void passingReference(int &);
void passingPointer(int*);
void testStrings();
void testReferenceAndPointers();
void testFunctionPointers();
int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);
void dummyCounter();
void MorePointerStuff();
void testConstantMethods();

// Function Templates::::::::
template <class T, class U>
T max(T element1, T element2);

struct foo
{
	int (*operate)(int,int);
};

int x = 0;

int main()
{
	int pause = 0;


	/*
	for(int i = 0; i<10; i++)
		dummyCounter();

		double maxOut = max<double,double>(10.15,10.16);
	cout << "The max is: " << maxOut << endl;
	*/

	cin >> pause;
	return 0;
}

void showFriends()
{
	a newa(1,2);
	b newb(3,4);
	b newb2(4,5);

	newa.display(newb);
}

void testConstantMethods()
{
	constants c(20);

	c.setFirst(1);
	c.setSecond(2);
	c.setThird(3);

	c.getShowValues();
	c.showSum();
}

void MorePointerStuff()
{
	int pause = 0;
	int go = 1;

	// Constant Pointers... 
	const int *const high = &pause;
	const int *medium = &pause;
	const int low = pause;
	int open = 0;

	medium = &go;
}

void dummyCounter()
{
	static int x;
	cout << "Counter Called " << x++ << " Times" << endl;
	cout << "Even though the global is still " << ::x << endl;
}

template <class T, class U>
T max(T element1, T element2)
{
	return element1 < element2 ? element2 : element1;
}

void testFunctionPointers()
{

	foo adder;
	foo subtracter;
	foo multiplier;
	foo divider;

	adder.operate = add;
	subtracter.operate = subtract;
	multiplier.operate = multiply;
	divider.operate = divide;

	cout << "Function pointer output: (3+5) " << adder.operate(3,5) << endl; 
	cout << "Function pointer output: (3-5) " << subtracter.operate(3,5) << endl; 
	cout << "Function pointer output: (3*5) " << multiplier.operate(3,5) << endl; 
	cout << "Function pointer output: (3/5) " << divider.operate(3,5) << endl; 
}

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int divide(int x, int y)
{
	return x / y;
}

void testReferenceAndPointers()
{
	int dummy = 0;

	passingReference(dummy);
	passingReference(dummy);
	passingReference(dummy);

	cout << "The number is: " << dummy << endl;

	passingPointer(&dummy);

	cout << "The number is: " << dummy << endl;
}

void testStrings()
{
	string test;
	char *ptr;
	char *ptr2; 

	cout << "Type something please" << endl;

	getline(cin,test);

	ptr = &test[0];
	ptr2 = ptr + (test.length());

	for(;ptr < ptr + (ptr2 - ptr); ptr++)
	{
		cout << *ptr;
	}
}

void outPut()
{
	birthday b(10,12,1976);
	person p1("Fred Flintstone ",b);
	person p2("Walter Manger ", 10,12,1976);

	b.show();

	cout << endl;

	p1.showPerson();

	cout << endl;

	p2.showPerson();
}

void passingReference(int &in)
{
	in += 1;
}

void passingPointer(int *in)
{
	*in++;
}