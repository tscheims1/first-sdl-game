#ifndef __GAME_H__
#define __GAME_H__
#include "Sprite.h"
#include "Texture.h"
#include "Fighter.h"
#include "Background.h"
#include "Utils/Rectangle.h"
#include "Enemy.h"
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
		Fighter *fighter;
		Background *background;
		std::vector<Texture*> enemies;
		
		/*
		 * initialize all necessary game objects
		 */
		void init();
		void checkCollision();
		
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
		
		
		/**
		 * A Gameunit
		 */
		static const int UNIT = 20;	
	
};
#endif
