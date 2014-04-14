#include "SDLHelper.h"

/**
 * Loads a SDL Texture and return a pöinter 
   to this texture
  */
 SDL_Texture* SDLHelper::loadTexture(std::string file, SDL_Renderer *renderer){
	//Initialize to nullptr to avoid dangling pointer issues
	SDL_Texture *texture = 0;
	//Load the image
	SDL_Surface *loadedImage = IMG_Load(file.c_str());
	//If the loading went ok, convert to texture and return the texture
	if (loadedImage != 0){
		texture = SDL_CreateTextureFromSurface(renderer, loadedImage);
		SDL_FreeSurface(loadedImage);
		//Make sure converting went ok too
		if (texture == 0)
			std::cout << "SDL Error" << SDL_GetError();
	}
	else
		std::cout << "SDL Error" << SDL_GetError();

	return texture;
}
/**
 *	render a texture with the given renderer
 */
void SDLHelper::renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y){
	//Setup the destination rectangle to be at the position we want
	SDL_Rect dst;
	dst.x = x;
	dst.y = y;
	//Query the texture to get its width and height to use
	SDL_QueryTexture(tex, NULL, NULL, &dst.w, &dst.h);
	SDL_RenderCopy(ren, tex, NULL, &dst);
}
