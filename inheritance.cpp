#include <iostream>
using namespace std;

/* 
Inheritance: is all about reusing code from other classes

What we need ?
=> Base class (Parent)
=> Derived class (Children)

Importance:
=> Improves code understanding
=> Easy to organize and maintain
=> Avoid code duplication
*/

// Base class

/* 
In this block of code we are going to use 
an example of a person and a student

Every person have a name, age and date of birth so as to the student
but a student have studentId or school so instead of 
declaring again name age and dob in class Student
we can reuse code of class Parent using inheritance 

Let us dive into this!!!
*/

class Parent {
	public:
		string name;
		string dob;
		int age;
		/*
		 We use virtual functions in parent class
		 Virtual functions: are functions in parent which
		can be redefined in the derived class we need to use virtual functions 
		in order to redefine them in derived class we have two types of virtual functions:
		=>Pure ones and => Normal ones. 
		The one we used here are normal now in abstract we are going to see pure ones 
		*/
		
		virtual void whoAreYou(){
			cout << "I am a person" << endl;
		}
};

// class student have properties of person 
//no need to define them again in student class

class Student : public Parent{
	public:
		int studentId;
		string schoolName;
		
		void whoAreYou() override{
			cout << "I am a student" << endl;
		}
};

int main(){
	Student student1;
	student1.name = "Rukundo Furaha Divin";
	student1.age = 10;
	student1.dob = "01/12/2030";
	student1.studentId = 1111222200;
	student1.schoolName = "Rwanda d1 academy";
	student1.whoAreYou();
	
	
	cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Date of Birth: " << student1.dob << endl;
    cout << "Student ID: " << student1.studentId << endl;
    cout << "School: " << student1.schoolName << endl;
	return 0;
}

