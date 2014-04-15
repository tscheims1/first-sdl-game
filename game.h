#ifndef __GAME_H__
#define __GAME_H__

#include "Sprite.h"
#include "Texture.h"
#include "Fighter.h"
#include "Background.h"
#include "Utils/Rectangle.h"
#include "Enemy.h"
#include "Shot.h"
#include "InputHandler.h"
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
		InputHandler inputHandler;
		SDL_Window *win;
		SDL_Renderer *renderer;
		SDL_Texture *shotTexture;
		int screenResolutionX;
		int screenResolutionY;
		Fighter *fighter;
		std::vector<Shot*> fightersShots;
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
		static const int MAX_FRAME_PER_SEC = 50;
	
};
#endif
