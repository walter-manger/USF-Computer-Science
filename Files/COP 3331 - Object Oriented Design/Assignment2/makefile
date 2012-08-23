# Walter Manger U54576622
# Assignment 2 Makefile

OBJECTFILES = main.o StrLib.o
COMPILER = g++
DEBUG = -g
COMPILERFLAGS = -Wall -c $(DEBUG)
LINKERFLAGS = -Wall $(DEBUG)
OUTNAME = assignment2

assignment2: $(OBJECTFILES) 
	$(COMPILER) $(LINKERFLAGS) $(OBJECTFILES) -o assignment2

main.o: main.cpp StrLib.h 
	$(COMPILER) $(COMPILERFLAGS) main.cpp 

StrLib.o: StrLib.cpp StrLib.h
	$(COMPILER) $(COMPILERFLAGS) StrLib.cpp

clean:
	\rm *.o *~ assignment2


