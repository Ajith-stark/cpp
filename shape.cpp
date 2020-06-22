#include<iostream>
// #include "myclass.h"

#define tab "\t"
using namespace std;

class base{
	protected:
		string name;
	
  public:
	base(){}
	base(string n){
	  name=n;
	}
	void print (){
		cout <<"base class name : " << name << endl;
	}
	string getName(){return name;}
	
};

class derived: public base{
 
  public:
	derived(){}
	derived(string n){
	  name=n;
	}
	void print (){
		cout <<"derived class name : " << name << endl;
	}

	
};

class myClass{
	string name;

  	public:
	void operator=(base copy){
	name= copy.getName();
} 
	void print(){
		cout<< "my class name : "<<name << endl;
	}
};
// 
// void myClass::operator=(base copy){
// 	name= copy.getName();
// }



int main(){
	base baseObj;
	baseObj.print();

	derived derivedObj("hello");
	derivedObj.print();

	baseObj = derivedObj;
	cout << "After assigning => ";
	baseObj.print();

	myClass myClass;
	myClass = baseObj;
	myClass.print();

}