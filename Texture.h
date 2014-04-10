#ifndef __TEXTURE_H__
#define __TEXTURE_H__

#include "Sprite.h"

#include <SDL2/SDL.h>


/**
 * This class extends the sprite class
 * with a SDL Texture (This is the general gameobject class)
 */
class Texture :public Sprite
{
	private:
		SDL_Texture *texture;

	public:
		SDL_Texture* getTexture();
		Texture(int posX,int posY,int width, int height,SDL_Texture *texture);
		
	
		
};
#endif
