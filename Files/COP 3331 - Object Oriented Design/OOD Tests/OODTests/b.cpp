#include <iostream>
#include "b.h"

using namespace std;

b::b(){};

b::b(int x1, int y1) { x = x1; y = y1; }

b b::operator+(const b &in)
{
	b temp;
	temp.x = x + in.x;
	temp.y = y + in.y;
	return temp;
}

void b::display() const
{
	cout << x << " " << y << endl;
}

b::~b() {}