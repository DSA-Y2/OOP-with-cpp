#include <iostream>
using namespace std;
#define PI 3.14

/* 
Abstraction: is all about hiding unnecessary details and showing only essentials things
As we use abstrack keyword in java to define abstract functions in c++ we use virtual functions
let us dive deep and see how they work

example of an abstract function

virtual void functionName() = 0;
=0; means function have no name it should be defined by the subclass
*/

class Shape{
	//defining an abstract class
	//use virtual keyword and pure virtual function
	public:
		virtual int area() = 0;
};

// this child class extends base class with this operator ":"
class Rectangle: public Shape{
	public:
		int length;
		int width;
		
		int area() override{
			return length * width;
		}	
};

class Circle: public Shape{
	public:
		int radius;
		int area() override{
			return PI*radius*radius;
		}
};

int main (){
	Shape *s;
	Rectangle r;
	Circle c;
	r.length = 15;
	r.width = 10;
	
	c.radius = 14;
	
	/*better to use pointers because area is 
	defined in more than one class so to avoid confusion at runtime the base class 
	should point to address where we want our area to be calculated(I mean which class) */
	s = &r;
	cout <<"The area of rectangle is: " << s->area() << endl;
	
	s= &c;
	cout << "The area of circle is: " << s->area() << endl;
	
	return 0;
}