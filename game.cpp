#include "game.h"


#include <string>
#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "SDLHelper.h"

/*
 * Setup the game
 * Init SDL and SDL_image
 * allocate memory for all necessary game objects 
 * @param char** argv
 * @param int argc
 */
Game::Game(char **argv,int argc)
{
	screenResolutionX = 800;
	screenResolutionY = 600;
	
	if ( SDL_Init(SDL_INIT_EVERYTHING) == -1 ) 
	{
		std::cout << "Could not initialize SDL: " << SDL_GetError();
		exit(1);
		
	}
	/*
	 * Init SDL_IMAGE
	 */
	IMG_Init(IMG_INIT_JPG);
	win = SDL_CreateWindow("Hello World",50,50,screenResolutionX,screenResolutionY, SDL_WINDOW_SHOWN);
	if(win == 0)
	{
		std::cout << SDL_GetError();
		exit(1);
		
	}
	
	
	
	
	renderer = SDL_CreateRenderer(win,-1,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if(renderer == 0)
	{
		std::cout<< SDL_GetError();
		exit(1);
	}
	
		
	
	
}
/**
 * Release all memory
 * TODO: Release all Textures and Gameobjects
 */
Game::~Game()
{
	SDL_DestroyRenderer(this->renderer);
	SDL_DestroyWindow(this->win);
	IMG_Quit();
	SDL_Quit();
}
/**
 * A game loop
 */
void Game::loop()
{
	SDL_Event event;
	bool quit = false;
	while(!quit)
	{
		SDL_Delay(20);
		while(SDL_PollEvent(&event))
		{
			if(event.type ==SDL_QUIT)
			{
				quit = true;
			}
			if(event.type == SDL_KEYDOWN)
			{
				for(int i = 0; i < 10; i++)
				{
						
					textures.push_back(new Texture(50*i,70*i,1,1,SDLHelper::loadTexture("Hamster_in_hand_klein.jpg",this->renderer)));
				
				}
				
				SDL_Texture *texture = SDLHelper::loadTexture("Hamster_in_hand1.jpg",this->renderer);
				
				
				
				SDL_RenderClear(renderer);
				
				SDLHelper::renderTexture(texture,renderer,60,60);
				for(int i = 0; i < textures.size();i++)
				{
					SDLHelper::renderTexture(textures[i]->getTexture(),renderer,textures[i]->getX(),textures[i]->getY());
				}
				SDL_RenderPresent(renderer);
				
			}
			if(event.type == SDL_MOUSEBUTTONDOWN)
			{
				
			}
		}
	}
}




