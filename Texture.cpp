#include "Texture.h"

Texture::Texture(int posX,int posY,int width, int height,SDL_Texture *texture) :Sprite(posX,posY,width,height)
{
	this->texture = texture;

}
Texture::~Texture()
{
	
}
SDL_Texture* Texture::getTexture()
{
	return this->texture;
}
void Texture::collision(Sprite *)
{
	
}


