# Walter Manger U54576622
# Assignment 3 Makefile

OBJECTFILES = assembler.o shapes.o
COMPILER = g++
DEBUG = -g
COMPILERFLAGS = -Wall -c $(DEBUG)
LINKERFLAGS = -Wall $(DEBUG)
OUTNAME = myproject  
#named myproject per the document

$(OUTNAME): $(OBJECTFILES) 
	$(COMPILER) $(LINKERFLAGS) $(OBJECTFILES) -o $(OUTNAME) 

assembler.o: assembler.cpp shapes.h 
	$(COMPILER) $(COMPILERFLAGS) assembler.cpp 

shapes.o: shapes.cpp shapes.h
	$(COMPILER) $(COMPILERFLAGS) shapes.cpp

clean:
	\rm *.o *~ assignment3
