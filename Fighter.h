#ifndef __FIGHTER_H__
#define __FIGHTER_H__
#include "Texture.h"

class Fighter : public Texture
{
	public:
		Fighter(int posX,int posY,int width, int height,SDL_Texture *texture);
};
#endif
