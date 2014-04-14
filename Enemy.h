#ifndef __ENEMY_H__
#define __ENEMY_H__
#include <SDL2/SDL.h>
#include "Texture.h"
class Enemy : public Texture
{
	public:
		Enemy(int posX,int posY,int width, int height,SDL_Texture *texture);
		 void collision(Sprite *s);
};
#endif
