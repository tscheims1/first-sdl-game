#include "Enemy.h"
Enemy::Enemy(int posX,int posY,int width, int height,SDL_Texture *texture) :Texture(posX,posY,width, height,texture)
{
	
}
void Enemy::collision(Sprite *s)
{
	this->destroy();
	
}
