#include <iostream>
#include "Position.h"
#include "Maze.h"

const Position NoPos = Position(-1,-1);

int main()
{
   cout << "Welcome to the Maze Project\n";
   cout << "You will tell us the size of the maze,\n";
   cout << "specify the open positions in the maze,\n";
   cout << "and the locations of the start and exit positions.\n";
   cout << "We will then put Remy at the start position of the maze\n";
   cout << "and print out the list of positions in a shortest path that\n";
   cout << "will allow poor Remy to escape from the maze.\n\n";

   int maze_size, dimension;

   cout << "Input the size of the maze (not including the hedge): ";
   cin >> maze_size;
   dimension = maze_size+2;

   Position **pred = new Position*[dimension];
   for (int i = 0; i < dimension; i++) {
      pred[i] = new Position[dimension];
      for (int j = 0; j < dimension; j++)
		pred[i][j] = NoPos;
   }

   Maze RatHaus(dimension);

   RatHaus.initialize();
   RatHaus.display(cout);

   //cout << "pred is " << pred[0][0] << endl;

   if (!RatHaus.findExit(pred))
      cout << "Oh no, there is now way to escape from the maze.  Poor Remy!\n\n";
   else {
      cout << "Remy, here is the shortest sequence of positions you can use to escape the maze:"
	   << endl;
      RatHaus.printPath(pred);
      cout << "\n\n";
   }
   
   return 0;
}
