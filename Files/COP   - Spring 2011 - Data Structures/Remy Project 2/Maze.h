#include "Position.h"
#include <queue>
#include <iostream>
#ifndef __MAZE
#define __MAZE
using namespace std;

// Note the use of the STL queue ADT
// Be aware that it uses push instead of enqueue
// and pop instead of dequeue; front is the same as our Queue classes

typedef enum{OPEN,WALL,VISITED} state;

class Maze
{
  public:
   static const int MAZEMAX = Position::POSMAX;
   Maze();
   Maze(int m);
   Maze::Maze(Position s, Position e);
   Maze(Position s, Position e, int m);

   bool findExit(Position **);

   void display(ostream &out) const;

   state getState(const Position &P) const;

   void setState(const Position &P, state s);
   // precondition: P corresponds to a non-hedge position within the maze

   void initialize();
   void printPath(Position ** pred);

  private:
   queue<Position> myQ;
   state **M; // two-dimensional array of state values
   int size;
   Position start;
   Position exit;
};


void recursivePrintPath(Position first, Position target, Position **Pred);

#endif
