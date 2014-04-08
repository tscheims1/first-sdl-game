#ifndef __SDLHELPER_H__
#define __SDLHELPER_H__
#include <SDL2/SDL.h>
#include <SDL2/SDL_Image.h>
#include <iostream>
#include <string>

/**
 * A SDL Helper class
 */ 
class SDLHelper
{
	public:
		static SDL_Texture *loadTexture(std::string file, SDL_Renderer *renderer);
		static void renderTexture(SDL_Texture *texture, SDL_Renderer *renderer,int x,int y);
};
#endif
