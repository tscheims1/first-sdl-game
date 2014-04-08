#ifndef __SPRITE_H__
#define __SPRITE_H__
#include <string>

/**
 * This class represents a single sprite
 */ 
class Sprite
{
	protected: 
		int posX;
		int posY;
		int width;
		int height;
		bool alive;
	
	public:
		Sprite(int posX,int posY,int width,int height);
		~Sprite();
		bool isAlive();
		void destroy();
		void translate(int x, int y);
		int getX();
		int getY();
		
		
		
};

#endif
