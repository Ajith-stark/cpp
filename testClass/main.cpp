#include<iostream>
// #include "myclass.h"

#define tab "\t"
using namespace std;

class shape{
  protected:
    int width;
    int height;
    
  public:
    shape(){
      width=0;
      height=0;
    }
    shape(float w , float h){
    	width=w;
    	height=h;
    }
    virtual float area(){};
};

class circle : public shape
{
public:
	circle(float radius) : shape(radius,radius){}
	float area(){
		return (22/7.0)*width*width;
	}
};

class rectangle : public shape
{
public:
	rectangle(float w , float h): shape(w,h){}
	float area(){
		return width* height;
	}
};
 
int main(){	
	circle Circle(10);
	cout << Circle.area()<<endl;
	rectangle Rectangle(10,80);
	cout << Rectangle.area()<<endl;
	Circle= Rectangle;
	cout << Circle.area()<< endl;
}