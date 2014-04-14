#include "Rectangle.h"
using namespace Utils;


/**
 * represents a rectagle
 */
Rectangle::Rectangle(int posX,int posY,int width,int height)
{
	this->posX = posX;
	this->posY = posY;
	this->width =width;
	this->height = height;
}
bool Rectangle::intersectsObject(Rectangle r)
{
	//std::cout <<"r1:"<< this->posX << " - "<< this->posY << "bis "<< this->width << " ---"<<this->height <<std::endl;
	//std::cout <<"r2:"<< r.getX() << " - "<< r.getY() << "bis "<< r.getWidth() << " ---"<< r.getHeight() <<std::endl<<std::endl;
	/*check uper left corner
	 */
	 if((this->posX >= r.getX() && this->posX <= r.getWidth()+r.getX()) &&
	 	 this->posY >= r.getY() && this->posY <= r.getHeight()+r.getY())
 	{
 		return true;	
 	}
	
 	/*
 	 * check upper right corner
 	 */
 	 if((this->posX+this->width >= r.getX() && this->posX+this->width <= r.getWidth()+r.getX()) &&
	 	 this->posY >= r.getY() && this->posY <= r.getHeight()+r.getY())
 	{
 		return true;	
 	}
 	
 	/*
 	 *check bottom left corner
 	 */
 	 if((this->posX >= r.getX() && this->posX <= r.getWidth()+r.getX()) &&
	 	 this->posY+this->width >= r.getY() && this->posY+this->width <= r.getHeight()+r.getY())
 	{
 		return true;	
 	}
 	/*
 	 *check bottom right corner
 	 */
 	 if((this->posX+this->width >= r.getX() && this->posX+this->width <= r.getWidth()+r.getX()) &&
	 	 this->posY+this->width >= r.getY() && this->posY+this->width <= r.getHeight()+r.getY())
 	{
 		return true;	
 	}
 	
 	/*
	 * check other rectangle
	 */	 	
	/*check uper left corner
	 */
	 if((r.getX() >= this->posX&& r.getX()  <= this->posX+this->width) &&
	 	 r.getY() >= this->posY&& r.getY()  <= this->posY+this->width)
 	{
 		return true;	
 	}
 	
	 if((r.getX()+r.getWidth() >= this->posX&& r.getX()+r.getWidth()  <= this->posX+this->width) &&
 	 r.getY() >= this->posY&& r.getY()  <= this->posY+this->width)
 	{
 		return true;	
 	}
 	
 	if((r.getX() >= this->posX&& r.getX()  <= this->posX+this->width) &&
 	 r.getY()+r.getWidth() >= this->posY&& r.getY()+r.getWidth()  <= this->posY+this->width)
 	{
 		return true;	
 	}
 	if((r.getX()+r.getWidth() >= this->posX&& r.getX()+r.getWidth()  <= this->posX+this->width) &&
 	 r.getY()+r.getWidth() >= this->posY&& r.getY()+r.getWidth()  <= this->posY+this->width)
 	{
 		return true;	
 	}
 	
 	return false;
	
}
/**
 * comomon getter / setter
 */
int Rectangle::getX()
{
	return this->posX;
}
int Rectangle::getY()
{
	return this->posY;
}
int Rectangle::getWidth()
{
	return this->width;
}
int Rectangle::getHeight()
{
	return this->height;
}
void Rectangle::translate(int x, int y)
{
	this->posX += x;
	this->posY += y;
}
