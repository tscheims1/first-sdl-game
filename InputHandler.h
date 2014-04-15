#ifndef __INPUTHANDLER_H__
#define __INPUTHANDLER_H__
#include <SDL2/SDL.h>
#define KEYMAPSIZE 20
class InputHandler
{
	private:
		
		
	public:
		InputHandler();
		~InputHandler();	
		void input(SDL_Event event);
		int* getkeyMap();
		const int UP;
		const int DOWN;
		const int LEFT;
		const int RIGHT;
		const int FIRE1;
		
		int keyMap[KEYMAPSIZE];
};
#endif
