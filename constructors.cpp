#include <iostream>
using namespace std;

class Car{
	public:
		string brand;
		string color;
		
		/* 
		Properties of constructors
		constructor: is a special function that runs automatically 
		when an object is created which initializes properties of an object
		a) Name of constructor = Name of class
		b) It have no return
		c) It runs automatically when an object is created.
		*/
		Car(string c,string b){
			brand = b;
			color = c;
		}
		
		void drive(){
			cout << brand << " which is " << color << " is driving." << endl;
		}
};


int main(){
	// using a constructor to initialize values of the object
	Car bmw("Black","BMW");

//	or using this method

	Car toyota = {"white","Toyota"};
	bmw.drive();
	toyota.drive();
	return 0;
}