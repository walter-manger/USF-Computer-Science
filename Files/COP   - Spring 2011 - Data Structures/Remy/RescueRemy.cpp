#include <iostream>
#include "Position.h"
#include "Maze.h"

int main()
{
   cout << "Welcome to the Maze Project\n";
   cout << "You will tell us the size of the maze,\n";
   cout << "specify the open positions in the maze,\n";
   cout << "and the locations of the start and exit positions.\n";
   cout << "We will then put Remy at the start position of the maze\n";
   cout << "and print out the list of positions in a path that will\n";
   cout << "allow poor Remy to escape from the maze (if possible!).\n\n";

   int maze_size, dimension;
   cout << "Input the size of the maze (not including the hedge): ";
   cin >> maze_size;
   dimension = maze_size+2;

   Maze RatHaus(dimension);
   RatHaus.display(cout);

   RatHaus.initialize();
   cout << "Your maze:\n";
   RatHaus.display(cout);
   
   if (!RatHaus.findExit())
      cout << "Oh no, there is now way to escape from the maze.  Poor Remy!\n\n";
   else {
      cout << "Remy, here is the sequence of positions to escape the maze:\n";
      RatHaus.printPath();
      cout << "\n\n";
   }

   return 0;
}
