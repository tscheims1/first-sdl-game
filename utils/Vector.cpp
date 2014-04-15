#include "Vector.h"
#include <cmath>

using namespace Utils;
Vector::Vector()
{
	
}
Vector::Vector(double xPos,double yPos,double length)
{
	this->setVector(xPos,yPos,length);
}
void Vector::setVector(double xPos,double yPos,double length)
{
	double unit = sqrt(xPos*xPos+yPos*yPos);
	this->xPos = xPos/unit*length;
	this->yPos = yPos/unit*length;
	this->length = length;
}
double Vector::getX()
{
	return this->xPos;
}
double Vector::getY()
{
	return this->yPos;
}
