/**Driver Code*/

/**
Programmer: Zachary Roland
Project number: 1
Project Desc: Quadratic Expression class
Course: COSC-2436-007 (92905) III Data Structures
Date:   1/23/2024
*/
//RectangleMain.cpp
#include <iostream>
#include <string>

#include "Rectangle.cpp"

using namespace std;

int main()
{
	//class
	Rectangle newRectangle;
	
	//variables
	double rectLength = 0, rectWidth = 0;
	
	//setting the length
	cout << "Please enter the length of the rectangle: " << endl;
	cin >> rectLength;
	
	//setting the width
	cout << "Please enter the width of the rectangle: " << endl;
	cin >> rectWidth;
	
	newRectangle.set(rectLength, rectWidth);
	
	//printing the length, width, and area of the rectangle
	cout << "length of rectangle: " << newRectangle.getLength() << endl;
	cout << "width of rectangle: " << newRectangle.getWidth() << endl;
	cout << "area of rectangle: " << newRectangle.getArea();
}
