#include <iostream>

using namespace std;

int GCD(int,int);
void DivisionAlgorithm(int &, int &, int &, int &);


int main()
{
	int a,b;

	cout << "Welcome to the Euclidean Algorithm program" << endl;

	cout << "This program will calculate the GCD of two integers using the Euclidean Algorithm" << endl << endl;

	cout << "Enter two integers (separated by a space): ";

	cin >> a;
	cin >> b;

	cout << endl;

	cout << "The GCD of " << a << " and " << b << " is " << GCD(a,b);

	cin.get(); // Keep the console open
	cin.get(); // Keep the console open
	return 0;
}

// Calculates the GCD for two entered integers
int GCD(int A, int B)
{
	int a = A; 
	int b = B;
	int q = 0;
	int r = B;

	while(b != 0)
	{
		DivisionAlgorithm(a, b, q, r);
		a = b;
		b = r;
	}

	return a;
}

// Divides and stores the separate parts of the int
// q = the quotient, r = the remainder
void DivisionAlgorithm(int &a, int &d, int &q, int &r)
{
	r = a;
	q = 0;

	while(r >= d)
	{
		r -= d;
		q++;
	}

	a = d*q + r;
}