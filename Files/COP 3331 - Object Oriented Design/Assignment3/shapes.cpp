// Walter Manger U54576622

#include "shapes.h"
#include <math.h>
#include <iostream>
#include <sstream>

using namespace std;

Rectangle::Rectangle(float width, float height)
{
	this->width = width;
	this->height = height;
}

float Rectangle::getArea(void)
{
	return width*height;
}

string Rectangle::show(void)
{
	stringstream ss;
	ss << "Rectangle(" << width << "," << height << ")";
	return ss.str();
}

string Rectangle::showShapeName(void) { return "Rectangle";}



Square::Square(float dimension) : Rectangle(dimension, dimension)
{
}

string Square::show(void)
{
	stringstream ss;
	ss << "Square(" << sqrt(getArea()) << ")";
	return ss.str();
}

string Square::showShapeName(void) { return "Square";}



Circle::Circle(float radius)
{
	this->radius = radius;
}

float Circle::getArea(void)
{
	return PI*radius*radius;
}

string Circle::show(void)
{
	stringstream ss;
	ss << "Circle(" << radius << ")"; 
	return ss.str(); 
}

string Circle::showShapeName(void) { return "Circle";}



Triangle::Triangle(float width, float height)
{
	this->width = width;
	this->height = height;
}

float Triangle::getArea(void)
{
	return ((width*height)/2);
}

string Triangle::show(void)
{
	stringstream ss;
	ss << "Triangle(" << width << "," << height << ")";
	return ss.str();
}

string Triangle::showShapeName(void) { return "Triangle";}



Pentagon::Pentagon(float edgeLength)
{
	this->edgeLength = edgeLength;
}

float Pentagon::getArea(void)
{
	float apothem = ((edgeLength/2)/tan((36*PI)/180));
	return (edgeLength*apothem)*5; 
}

string Pentagon::show(void)
{
	stringstream ss;
	ss << "Pentagon(" << edgeLength << ")";
	return ss.str();
}

string Pentagon::showShapeName(void) { return "Pentagon";}



Hexagon::Hexagon(float edgeLength)
{
	this->edgeLength = edgeLength;
}

float Hexagon::getArea(void)
{
	float apothem = ((edgeLength/2)/tan((30*PI)/180));
	return (edgeLength*apothem)*6; 
}

string Hexagon::show(void)
{
	stringstream ss;
	ss << "Hexagon(" << edgeLength << ")";
	return ss.str();
}

string Hexagon::showShapeName(void) { return "Hexagon";}
