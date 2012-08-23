#include <iostream>
#include "a.h"
#include "b.h" 

using namespace std;

a::a(int x1, int y1) { x = x1; y = y1; }

void a::display(b &in) const
{
	cout << x << " " << y << " & " << in.x << " " << in.y << endl;
}

a::~a() {};