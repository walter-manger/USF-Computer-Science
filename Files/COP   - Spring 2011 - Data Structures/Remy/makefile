# Walter Manger U54576622

OBJECTFILES = Maze.o Position.o RescueRemy.o
COMPILER = g++
DEBUG = -g
COMPILERFLAGS = -Wall -c $(DEBUG)
LINKERFLAGS = -Wall $(DEBUG)
OUTNAME = RescueRemy 


$(OUTNAME): $(OBJECTFILES) 
	$(COMPILER) $(LINKERFLAGS) $(OBJECTFILES) -o $(OUTNAME) 

Position.o: Position.cpp Position.h
	$(COMPILER) $(COMPILERFLAGS) Position.cpp 

Maze.o: Maze.cpp Position.h
	$(COMPILER) $(COMPILERFLAGS) Maze.cpp 

RescueRemy.o: RescueRemy.cpp Position.h Maze.h 
	$(COMPILER) $(COMPILERFLAGS) RescueRemy.cpp 

clean:
	\rm *.o *~ Remy
