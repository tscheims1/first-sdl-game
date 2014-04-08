#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <windows.h>
#include <SDL2/SDL.h>
#include "game.h"

int main(int argc, char** argv) {
	
	Game game(argv,argc);
	
	game.loop();
	
	return 0;
}
