#include <iostream>
using namespace std;

class Car{
	// define public variables(properties)
	public:
		string brand;
		string color;
	// define public method
		void drive(){
			cout << brand << " which is " << color << " is driving." << endl;
		}
};

int main(){
	//create an object with class Car
	Car bmw;
	//using dot operator to access the properties of the class
	bmw.brand = "Bmw";
	bmw.color = "Black";
	bmw.drive();
	return 0;
}