#ifndef __SHOT_H__
#define __SHOT_H__
#include "Enemy.h"
#include "Texture.h"
#include "Fighter.h"

class Fighter;
class Shot : public Texture
{
	public:
		Shot(int posX,int posY,int width, int height,SDL_Texture *texture);
		bool checkCollision(Sprite *s);
		void collision(Sprite *s);
		void collision(Enemy *e);
		void collision(Fighter *f);
};
#endif
