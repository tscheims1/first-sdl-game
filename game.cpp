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
	this->init();
		
	
	
}
void Game::init()
{
	for(int i = 0; i < 10; i++)
	{
			
		enemies.push_back(new Enemy(50*i,70*i,40,30,SDLHelper::loadTexture("Hamster_in_hand_klein.jpg",this->renderer)));
	
	}
	fighter = new Fighter(this->screenResolutionX/2,this->screenResolutionY/2,40,30,SDLHelper::loadTexture("Hamster_in_hand_klein.jpg",this->renderer));
}

void Game::checkCollision()
{
	
	for(int i = 0; i < this->enemies.size();i++)
	{
		bool col = this->fighter->checkCollision(this->enemies[i]);
		if( this->fighter->checkCollision(this->enemies[i]))
		{
			std::cout << "Collision detected";
		}
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
			
			/*
			 * Keyboardinput
			 */
			if(event.type == SDL_KEYDOWN)
			{
				switch(event.key.keysym.sym)
				{

					case SDLK_DOWN:
						fighter->translate(0,Game::UNIT);	
						break;
					case SDLK_UP:
						fighter->translate(0,-Game::UNIT);
						break;
					case SDLK_LEFT:
						fighter->translate(-Game::UNIT,0);
						break;
					case SDLK_RIGHT:
						fighter->translate(Game::UNIT,0);
						break;
				}
				
				SDL_Texture *texture = SDLHelper::loadTexture("Hamster_in_hand1.jpg",this->renderer);
				
				
				
				SDL_RenderClear(renderer);
				
				SDLHelper::renderTexture(texture,renderer,60,60);
				for(int i = 0; i < enemies.size();i++)
				{
					SDLHelper::renderTexture(enemies[i]->getTexture(),renderer,enemies[i]->getX(),enemies[i]->getY());
				}
				SDLHelper::renderTexture(fighter->getTexture(),renderer,fighter->getX(),fighter->getY());
				SDL_RenderPresent(renderer);
				
			}
			if(event.type == SDL_MOUSEBUTTONDOWN)
			{
				
			}
			
			this->checkCollision();
		}
	}
}




