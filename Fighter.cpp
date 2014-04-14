#include "Fighter.h"

Fighter::Fighter(int posX,int posY,int width, int height,SDL_Texture *texture) :Texture(posX,posY,width, height,texture)
{

}

bool Fighter::checkCollision(Sprite *s)
{
	if(Sprite::checkCollision(s))
	{
		this->collision(s);
		return true;
	}
	return false;
}
void Fighter::collision(Sprite *t)
{
	
}
void Fighter::collision(Enemy *e)
{
	this->alive = false;
	e->collision(this);
}
/**
 * Fire a shot
 * and the the shot reference back
 * @return Shot* 
 */
Shot* Fighter::fire(SDL_Texture *texture)
{
	return new Shot(this->posX+(this->width/2),this->posY-22,5,22,texture);
}

