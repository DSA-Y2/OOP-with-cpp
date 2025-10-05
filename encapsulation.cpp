#include <iostream>
using namespace std;

/*
In this codes we are going to examine encapsulation concept

Encapsulation: is a pillar of OOP which is all 
about hiding internal details of an object and 
controlling access to its data
*/

/* 
To reach on this we use two main methods which are: 
=> Using access modifiers like: 

a) Private: This property or method defined with this modifier 
			can't be accessed outside the class
b) Public: This property  or method defined with this 
			modifier can be accessed everywhere in the codes
c) Protected: This property or method defined with this modifier
			 can only be accessed in the child class 

=> Using getters and setters
*/

/* 
In this block of code we are going to define getters 
and setters and constructors and use access modifiers
*/

class Car{
	// use private access modifier to encapsulate
	private:
		string brand;
		string color;
		int speed;
	
	// use public access modifier to access properties of 
	public:
		
		/*to use getters and setters we need to define a default constructor;
		and whenever we define constructors by 
		ourself it better to define a default constructor */
		
		Car(){}
		
		// other constructors with parameters
		Car(string b, string c,int s){
			brand = b;
			color =  c;
			speed = s;
		}
		
	// define setters
		void setBrand(string b){
			brand = b;
		}
	
		void setColor(string c){
			color = c;
		}
		
		void setSpeed(int s){
			if(s < 0){
				cout << "Speed should bot be negative";
			}
			speed = s;
		}
	
	// define getters
	
		string getBrand(){
			return brand;
		}
		
		string getColor(){
			return color;
		}
		
		int getSpeed(){
			return speed;
		}
		
		void drive(){
			cout << brand << " which is " << color << " is driving at speed of " << speed << "km/h" << endl;
		}
	

};

int main(){
	//using a constructor to set values of an object
	Car toyota = {"Toyota","Black",100};
	toyota.drive();
	
	/*this will throw an error because,
	color is a private variable it can only be accessible in class Car
	toyota.color = "red"; */
	
	/*using getters and setters to access data of object car
	 this is where the need of default constructor comes in */
	Car bmw;
	bmw.setBrand("Bmw");
	bmw.setColor("White");
	bmw.setSpeed(50);
	
	//using drive function to output the data of object
	bmw.drive();
	
	// using getters to read data of the object 
	cout << bmw.getBrand() << " which is " << bmw.getColor() << " is driving at speed " << bmw.getSpeed() << " km/h"<< endl;
	return 0;
}