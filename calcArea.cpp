#include<iostream>
#include<iomanip>
using namespace std;

float calcArea(float rad){
	return (22/7)*rad*rad;
}

int calcArea(int w , int h){
	return w*h;
}

double calcArea( double l , double h){
	return l*h/2;
}

int main(){	
	cout<< "Area of a circle of    3.5      is : " <<fixed << setprecision(2)<< calcArea(3.5)<<endl;
	cout<< "Area of a rectangle of 3x7      is : " <<calcArea(3,7)<<endl;
	cout<< "Area of a triangle of  7.8x8.9  is : " << fixed << setprecision(2)<< calcArea(7.8,8.9)<<endl;
}