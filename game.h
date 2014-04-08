#ifndef __GAME_H__
#define __GAME_H__
#include "sprite.h"
#include "texture.h"

#include <SDL2/SDL.h>
#include <string>
#include <vector>

/*
 * This class represents a Game Instance
 * This class provides a Game loop and Setup SDL and SDL Image
 */
class Game
{
	private:
		SDL_Window *win;
		SDL_Renderer *renderer;
		int screenResolutionX;
		int screenResolutionY;
		std::vector<Texture*> textures;
	public:
		/**
		 * Constructor
		 */
		Game(char **argv,int argc);
		~Game();
		
		/**
		 * Gameloop
		 */
		void loop();
		
		
	
};
#endif
