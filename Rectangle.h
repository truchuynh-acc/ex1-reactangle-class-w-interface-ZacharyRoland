/**Rectangle.h Code*/
#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"
class Rectangle : RectangleInterface
{
	private:
		double length; //the length of the rectangle
		double width;
	public:
		Rectangle(); //the rectangle constructor
		void set(double newLength, double newWidth); //the setter for the rectangle's length and width
		double getLength() const; //the getter for the rectangle length
		double getWidth() const; //the getter for the rectangle width
		double getArea() const; //the getter for the rectangle area
};
#endif
