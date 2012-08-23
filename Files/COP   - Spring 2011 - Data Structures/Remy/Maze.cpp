#include "Maze.h"
#include "Position.h"
#include "DStackT.h"
#include <iostream>
#include <cassert>

using namespace std;

// FILL IN THE MISSING CODE

// Hint Question. For stack: what is the longest possible path in a maze?
Maze::Maze()
{ 
	size = MAZEMAX;

	start = Position(1,1);
	exit = Position(size-1,size-1);

	for (int i=0; i < size;i++) {
		M[i] = new state[size];
		for(int j=0;j < size; j++)
			M[i][j] = WALL;
	}
}   

Maze::Maze(int max)
{
	size = max;

	start = Position(1,1);
	exit = Position(size-1,size-1);

	M = new state*[size];

	for (int i=0; i < size;i++) {
		M[i] = new state[size];
		for(int j=0;j < size; j++)
			M[i][j] = WALL;
	}
}

Maze::Maze(Position s, Position e):start(s),exit(e)
{
	size = MAZEMAX;

	M = new state*[size];

	for (int i=0; i < size;i++) {
		M[i] = new state[size];
		for(int j=0;j < size; j++)
			M[i][j] = WALL;
	}
}

Maze::Maze(Position s, Position e, int n)
{
	start = s;
	exit = e;
	size = n;

	M = new state*[size];

	for (int i=0; i < size;i++) {
		M[i] = new state[size];
		for(int j=0;j < size; j++)
			M[i][j] = WALL;

	}
}


state  Maze::getState(const Position &P) const
{
   return M[P.getRow()][P.getCol()];
}

void Maze::display(ostream &out) const
{
   out << '\n';
   for (int i=0; i < size;i++) {

      for (int j=0; j < size; j++)
	  {
		if (Position(i,j) == start)
			cout << 's';
		else if (Position(i,j) == exit)
			cout << 'e';
		else if (M[i][j] == WALL)
			out << '*';
		else
			out << ' ';
	  }
      out << '\n';
   }
   out << '\n';
}

void Maze::setState(const Position &P, state s)
{
   int i = P.getRow();
   int j = P.getCol();
   assert(1 <= i && i <= size && 1 <= j && j <= size);
   M[i][j] = s;
}

bool Maze::findExit()
{
	bool found = false; 
	Position current = start;
	Position next = current;

	if(path.empty())
	{
		setState(start,VISITED);
		path.push(start);
	}

	found = path.top() == exit;

	while(!found)
	{
		next = current;

		if(M[current.getRow()+1][current.getCol()] == OPEN)
			next = current.Neighbor(DOWN);
		else if(M[current.getRow()][current.getCol()-1] == OPEN)
			next = current.Neighbor(LEFT);
		else if(M[current.getRow()-1][current.getCol()] == OPEN)
			next = current.Neighbor(UP);
		else if(M[current.getRow()][current.getCol()+1] == OPEN)
			next = current.Neighbor(RIGHT);

		if(next == current)
			if(path.empty())
				return false; //Breaking Case
			else
			{
				path.pop();
				if(!path.empty())
					current = path.top();
				else
					current = start;

			}
		else
		{
			current = next; 
			setState(current, VISITED);
			path.push(current);
		}

		found = current == exit;
	}

	return found;
}

void Maze::printPath()
{
   Position P;
   Stack<Position> T(size*size);

   while (!path.empty()) {
      T.push(path.top());
      path.pop();
   }
   while (!T.empty()) {
      cout << T.top() << '\n';
      T.pop();
   }
  

}

void Maze::initialize() // Assumes size already set
{
   int i, j;
   cout << "All position indices k must satisfy 1 <= k < = " << (size-1) << '\n';
   cout << "Enter the start position:\n";
   cin >> start;
   cout << "Enter the exit position:\n";
   cin >> exit;
   cout << "Please enter column indices for each row\n";

   for (i = 1; i < size-1; i++) {
      cout << "row " << i << ": ";
      cin >> j;
      while (j > 0){
	 M[i][j] = OPEN;
	 cin >> j;
      };
   }
   if (getState(start) != OPEN) {
      cout << "start position must be open; will fix that now\n";
      M[start.getRow()][start.getCol()] = OPEN;
   }
   if (getState(exit) != OPEN)
      cout << "Boy, are you mean, setting the exit in the wall.  Poor Remy!\n";
   cout << "Maze entry complete\n";
}
