/** RectangleInterface Code*/
//@RectInterface.h
#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_
class RectangleInterface
{
	public:
		/*@param: newLength is the length for the rectangle
				  newWidth is the width for the rectangle
		  @pre: newLength must be greater than zero
		  		newWidth must be greater than zero
		  @post: if newLength is greater than zero, the length
		  		 of the rectangle will be newLength, otherwise
		  		 it isn't updated
		  		 if newWidth is greater than zero, the width
		  		 of the rectangle will be newWidth, otherwise
		  		 it isn't updated
		  @return: returns true if length and width are updated,
				   false otherwise
		*/
		virtual void set (double newLength, double newWidth) = 0;
		
		/*Gets the length of the rectangle
		  @return: returns the length of the rectangle
		*/
		virtual double getLength () const = 0;
		
		/*Gets the width of the rectangle
		  @return: returns the width of the rectangle
		*/
		virtual double getWidth() const = 0;
		
		/*Gets the area of the rectangle
		  @return: returns the area of the rectangle
		*/
		virtual double getArea() const = 0;
		
		/*destroys rectangle and frees it's assigned memory*/
		virtual ~RectangleInterface() {}
};
#endif
