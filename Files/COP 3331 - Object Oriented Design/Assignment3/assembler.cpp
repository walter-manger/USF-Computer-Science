// Walter Manger U54576622

#include "shapes.h"
#include <iostream>
#include <string>
#include <typeinfo>
#include <time.h>
#include <cstdlib>

#define MAX_DIM 200
#define PIECE_COUNT 6

using namespace std;

float getRand(int max = MAX_DIM);
bool TryFitPiece(Shape &piece);
Shape *GetRandomPiece(Shape *s[]);
void RemoveAtPosition(int, Shape *[]);
Shape *getCanvas();


static float CanvasArea = 0;
static int PieceCount = PIECE_COUNT;
static int AvailableIndexes = 5;

int main()
{
	Shape *randomPiece = NULL;
	srand(int(time(NULL)));

	Rectangle r(getRand(100), getRand(100));
	Square s(getRand(100));
	Circle c(getRand(100));
	Triangle t(getRand(100), getRand(100));
	Pentagon p(getRand(100));
	Hexagon h(getRand(100));

	Shape *Pieces[PIECE_COUNT] = {&r, &s, &c, &t, &p, &h};

	Shape *canvas =  getCanvas(); 

	CanvasArea = canvas->getArea();

	for(int i = 0; i < 6; i++)
		cout << "Pieces[" << i << "] -> " << Pieces[i]->show() << endl;
		
	cout << endl;

	cout << "Canvas: " << canvas->showShapeName() << " of area " << canvas->getArea() << " meters^2" << endl << endl;

	// Try to select the 6 pieces randomly and insert them into the canvas
	for(int i = 0; i < 6; i++)
	{
		randomPiece = GetRandomPiece(Pieces);
		if(TryFitPiece(*randomPiece))
			cout << "Inserted " << randomPiece->showShapeName() << " piece of area " << randomPiece->getArea() << " meters^2." << endl;
		else
			cout << "Couldn't Fit! " << randomPiece->showShapeName() << " piece of area " << randomPiece->getArea() << " meters^2." << endl;

		cout << "Remaining Canvas area: " << CanvasArea << " meters^2" << endl << endl;

		randomPiece = NULL;

		if(CanvasArea == 0)
		{
			cout << "No more room for any Pieces. Exiting." << endl;
			break; 
		}
	}

	// if(CanvasArea > 0) it means that the pieces did not fill the canvas.
	// The document does not specify what is supposed to happen in this case.
	// It seems that this will almost never happen... 

	return 0;
}

float getRand(int max)
{
	return ((max-1)*((float)rand()/RAND_MAX))+1;;
}

Shape *getCanvas()
{
	int randomNumber = rand() % 6 + 1;

	switch(randomNumber)
	{
		case 1: return new Rectangle(getRand(),getRand()); 
		case 2: return new Square(getRand());
		case 3: return new Circle(getRand()); 
		case 4: return new Triangle(getRand(), getRand());
		case 5: return new Pentagon(getRand()); 
		default: return new Hexagon(getRand());
	}
}

bool TryFitPiece(Shape &piece)
{
	if(piece.getArea() < CanvasArea)
	{
		CanvasArea -= piece.getArea();
		return true;
	}

	return false;
}

Shape *GetRandomPiece(Shape *s[])
{
	int selectedIndex = AvailableIndexes > 0 ? rand() % AvailableIndexes-- : 0;
	Shape *selectedPiece = s[selectedIndex];
	RemoveAtPosition(selectedIndex, s);
	
	return selectedPiece; 
}

void RemoveAtPosition(int position, Shape *pieceArray[])
{
	if(position >=  PieceCount)
		cout << "Error! Index out of the bounds of the array" << endl;
	else
		for(int i = position; i < PieceCount; i++)
			pieceArray[i] = pieceArray[i+1];
		--PieceCount;
}



