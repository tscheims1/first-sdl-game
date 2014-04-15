#ifndef __SPRITE_H__
#define __SPRITE_H__
#include <string>
#include "Utils/Rectangle.h"
#include "Utils/Vector.h"
/**
 * This class represents a single sprite
 * This class doesn't have dependencies to 
 * a specific Graphic Library
 */ 
class Sprite
{
	protected: 
		int posX;
		int posY;
		int width;
		int height;
		bool alive;
		Utils::Rectangle boundingBox;
		Utils::Vector directionVector;
	
	public:
		Sprite(int posX,int posY,int width,int height);
		~Sprite();
		bool isAlive();
		void destroy();
		void translate(int x, int y);
		int getX();
		int getY();
		Utils::Rectangle* getBoundingBox();
		bool checkCollision(Sprite *t);
		void move();
		
		
		
};

#endif
