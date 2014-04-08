#include "sprite.h"


Sprite::Sprite(int posX,int posY,int width,int height)
{
	this->posX = posX;
	this->posY = posY;
	this->width = width;
	this->height = height;
	this->alive = true;

}
Sprite::~Sprite()
{
	
}
bool Sprite::isAlive()
{
	return this->alive;
}
void Sprite::destroy()
{
	this->alive = false;
}
void Sprite::translate(int x, int y)
 {
 	this->posX += x;
 	this->posY += y;
 }
 int Sprite::getX()
 {
 	return this->posX;
 }
 int Sprite::getY()
 {
 	return this->posY;
 }
 
