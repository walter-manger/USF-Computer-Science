// Walter Manger U54576622

#include <iostream>
#include <string>

using namespace std;

#ifndef SHAPES_H
#define SHAPES_H

#define PI 3.14159

class Shape
{
public:
	virtual float getArea(void) = 0;
	virtual string show(void) = 0;
	virtual string showShapeName(void) = 0;
};


class Rectangle : public Shape
{
public:
	Rectangle(float width, float height);
	float getArea(void);
	virtual string show(void);
	virtual string showShapeName(void);
private:
	float width;
	float height;
};


class Square : public Rectangle
{
public:
	Square(float dimension);
	string show(void);
	string showShapeName(void);
};


class Circle : public Shape
{
public:
	Circle(float radius);
	float getArea(void);
	string show(void);
	string showShapeName(void);
private:
	float radius;
};


class Triangle : public Shape
{
public:
	Triangle(float width, float height);
	float getArea(void);
	string show(void);
	string showShapeName(void);
private:
	float width;
	float height;
};


class Pentagon : public Shape
{
public: 
	Pentagon(float edgeLength);
	float getArea(void);
	string show(void);
	string showShapeName(void);
private:
	float edgeLength;
};


class Hexagon : public Shape
{
public:
	Hexagon(float edgeLength);
	float getArea(void);
	string show(void);
	string showShapeName(void);
private:
	float edgeLength;
};

#endif
