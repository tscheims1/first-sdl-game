#include "InputHandler.h"
#include <SDL2/SDL.h>
#include <iostream>
InputHandler::InputHandler() :
	UP(0),
	DOWN(1),
	LEFT(2),
	RIGHT(3),
	FIRE1(4)

{
	/*
	 *init keymap with 0
	 */
	
	for(int i = 0; i < KEYMAPSIZE;i++)
	{
		keyMap[i] = false;
	}
}
int*  InputHandler::getkeyMap()
{
	return this->keyMap;
}

void InputHandler::input(SDL_Event event)
{
		
	
		/*
		 * Keyboardinput
		 */
		if(event.type == SDL_KEYDOWN ||event.type == SDL_KEYUP)
		{
			bool keySate = event.type == SDL_KEYDOWN ? true: false;
			switch(event.key.keysym.sym)
			{

				case SDLK_DOWN:
					this->keyMap[DOWN] = keySate;
					std::cout << "down_presseed";
					break;
				case SDLK_UP:
					this->keyMap[UP]  = keySate;
					break;
				case SDLK_LEFT:
					this->keyMap[LEFT] = keySate;
					break;
				case SDLK_RIGHT:
					this->keyMap[RIGHT] = keySate;
					break;
				case SDLK_SPACE:
					this->keyMap[FIRE1] = keySate;
					break;
			}
		}
		
}
InputHandler::~InputHandler()
{
//	delete [] this->keyMap;
}
