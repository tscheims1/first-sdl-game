#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#include <iostream>
namespace Utils
{
	class Rectangle
	{
		private:
			 int posX;
			 int posY;
			 int width;
			 int height;
			 
		public:
			Rectangle(int posX,int posY,int width, int height);
			bool intersectsObject(Rectangle r);
			int getX();
			int getY();
			int getWidth();
			int getHeight();
			void translate(int x, int y);
	};
}
#endif
