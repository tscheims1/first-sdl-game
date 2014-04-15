#include "Shot.h"
#include "Fighter.h"
#include "Game.h"
class Game;
Shot::Shot(int posX,int posY,int width, int height,SDL_Texture *texture) : Texture(posX,posY,width,height,texture)
{
	directionVector.setVector(0,-1,Game::UNIT);
}
void Shot::collision(Sprite *s)
{
	
}
void Shot::collision(Enemy *e)
{
	
}
void Shot::collision(Fighter *f)
{
	
}

