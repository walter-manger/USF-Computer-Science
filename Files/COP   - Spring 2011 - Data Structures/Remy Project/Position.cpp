//-------------Position.cpp---------------//

#include "Position.h"
#include <iostream>
#include <cassert>

using namespace std;

// Fill in the missing code

Position Position::Neighbor(const direction &d) const
{
	int newrow = row;
	int newcol = col;

	switch(d) {
      case DOWN: 
		  newrow++;
		  break;
      case LEFT: 
		  newcol--;
		  break;
      case UP:
		  newrow--;
		  break;
      case RIGHT:
		  newcol++;
	}

	return Position(newrow, newcol);
}

bool Position::operator==(const Position &other) const
{
   return row == other.row && col == other.col;
}


void Position::display(ostream & out) const
{
   out << '('<< row << ',' << col << ')';
}

void Position::input(istream & in)
{
   cout << "row index: ";
   in >> row;
   cout << "column index: ";
   in >> col;
}

ostream & operator<<(ostream &out, const Position &P)
{
   P.display(out);
   return out;
}

istream & operator>>(istream &in, Position &P)
{
   P.input(in);
   return in;
}

direction operator++(direction d) // prefix increment (++d)
{
   switch(d) {
      case DOWN: return LEFT;
      case LEFT: return UP;
      case UP:   return RIGHT;
      case RIGHT: return RIGHT;
   }
}

direction operator++(direction d,int) // postfix increment (d++)
{
   switch(d) {
      case DOWN: return LEFT;
      case LEFT: return UP;
      case UP:   return RIGHT;
      case RIGHT: return RIGHT;
   }
}
