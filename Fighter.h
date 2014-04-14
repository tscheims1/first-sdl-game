#ifndef __FIGHTER_H__
#define __FIGHTER_H__
#include "Texture.h"
#include "Enemy.h"
#include "Shot.h"

class Shot;
class Enemy;
class Fighter : public Texture
{
	
	public:
		Fighter(int posX,int posY,int width, int height,SDL_Texture *texture);
		bool checkCollision(Sprite *s);
		void collision(Sprite *s);
		void collision(Enemy *e);
		Shot* fire(SDL_Texture *texture);
};
#endif
