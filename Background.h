#ifndef __BACKGROUND_H__
#define __BACKGROUND_H__
#include "Texture.h"
class Background : public Texture
{
	public:
		Background(int posX,int posY,int width, int height,SDL_Texture *texture);
};
#endif
