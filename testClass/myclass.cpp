#include<iostream>
#include "myclass.h"
#define tab "\t"
using namespace std;

base::base(){
	cout << "base obj created "<<endl;
}

base::base(int d){
	data = d;
}
// void base::print(){
// 	cout<< data<< endl;
// }

void base::say(){
	cout<< "hello babe"<< endl;
}
base::~base()
{
	cout<<"base obj destroyed"<<endl;
}




derived::derived(){
	cout <<"derived obj created"<<endl;

}
derived::derived(int d){
	data=d;
}
derived::~derived(){
	cout <<"derived obj destroyed"<<endl;
	
}
void derived::print(){
	cout<< data<<endl;
}