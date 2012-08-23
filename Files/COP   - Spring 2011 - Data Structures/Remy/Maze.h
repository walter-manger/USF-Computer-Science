#include "Position.h"
#include "DStackT.h"
#include <iostream>
#ifndef __MAZE
#define __MAZE
using namespace std;

typedef enum{OPEN,WALL,VISITED} state;

class Maze
{
  public:
   static const int MAZEMAX = 12;

   //start set to upper left corner, exit to lower right corner, size to MAZEMAX
   Maze();
   //start set to upper left corner, exit to lower right corne
   Maze(int m); 
   Maze(Position s, Position e);
   Maze(Position s, Position e, int m);

   bool findExit();

   void display(ostream &out) const;

   state getState(const Position &P) const;

   void setState(const Position &P, state s);
   // precondition: P corresponds to a non-hedge position within the maze

   void printPath();

   void initialize();

  private:
   Stack <Position> path;
   state **M; // two-dimensional array of state values
   int size;
   Position start;
   Position exit;
};

#endif
