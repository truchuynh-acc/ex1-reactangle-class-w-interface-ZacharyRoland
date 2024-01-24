/**Rectangle.cpp Code*/
#include "Rectangle.h"

Rectangle::Rectangle()
{
	length = 1.0;
	width = 1.0;
}

void Rectangle::set(double newLength, double newWidth)
{
	if (newLength > 0.0)
	{
		length = newLength;
	}
	if (newWidth > 0.0)
	{
		width = newWidth;
	}
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getArea() const
{
	return length*width;
}
