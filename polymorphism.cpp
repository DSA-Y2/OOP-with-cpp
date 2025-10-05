#include <iostream>
using namespace std;

/* 
Polymorphism means many forms

Polymorphism allows a functions 
to behave differently depending on an object calling it 

Some forms of polymorphism:

=> Compile time polymorphism 
(All about Function overloading and Operator overloading)
=> Run-time overloading 
(Achieved through inheritance and virtual functions)

In this block of code we are going to 
examine the the both forms of overloading
*/

//Compile-time polymorphism (class to examine this principal)
class Add{
	public:	
		int add(int a,int b){
			return a+b;
		}
		
		double add (double a, double b){
			return a+b;
		}
		
		int add (int a, int b, int c){
			return a+b+c;
		}
		
	/* this is known as function overloading 
	because we have a function with different parameters and 
	data types so the function to be used will be 
	determined at runtime depending on arguments passed through it */ 
};

class BaseClass{
	public:
		string baseString;
		virtual void printMe(){
			cout << "I am a base string in base class: " << baseString  << endl;
		}
		
		/* Note that here we used virtual 
		keyword to initialize the function print Me*/
};

class ChildClass: public BaseClass{
	public:
		string childString;
		void printMe() override{
			cout << "I am a child string in child class: " << childString << endl;
		}
		
		/* Now here we redefined the function printMe in the 
		child class now the kind of the output will be determined at runtime*/
};

int main(){
	Add num1;
	cout << num1.add(2,3) << endl;
	cout << num1.add(2,3,5) << endl;
	cout << num1.add(1000,1929) << endl;
	
	/* because base class can have multiple derived class it is better to use pointers in order 
	to store address of the derived class it is going to use at runtime */ 
	BaseClass *b;
	ChildClass c;
	
	b = &c;
	/* Attention  by using pointers you can access 
	members defined in base class but not in child class same analogy 
	as all students are people but not all people are students*/
	
	// this will throw an error cause base class donot have child string property
	//	b->childString = "Hello from child class";
	// but this works
	c.childString = "Hello from child class";
	b->printMe();
	
	/*	In conclusion base class and child class have 
	same method now at run time this is when we wiil 
	know what to output by use of override we print the one in child class*/
	
	return 0;
}

