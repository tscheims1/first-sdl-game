#ifndef __VECTOR_H__
#define __VECTOR_H__
namespace Utils
{
	class Vector
	{
		private:
			double xPos;
			double yPos;
			double length;
		public:
			Vector();
			Vector(double xPos,double yPos,double length);
			void setVector(double xPos,double yPos,double length);
			double getX();
			double getY();
	};
}
#endif
