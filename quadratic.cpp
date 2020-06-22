#include<iostream>
#include<math.h>


#define tab "\t"
using namespace std;

void solveQuad(double a, double b, double c){
	if (!a) {cout << " Not a quadratic eqn "<<endl ; return ;}
	double d= (b*b) - (4*a*c);
	double sqrt_val= sqrt(abs(d));

	switch( (d>=1) ? 1: (d<0)? -1: 0 ){

		case 1: 
			cout << "Roots are real and different "<< endl;
			double num1 , num2;
			num1 = (-b + sqrt_val)/(2*a);
			num2 =  (-b - sqrt_val)/(2*a);
			cout << num1 << endl <<num2 <<endl;
			break;

		case -1:
			cout << "Roots are complex "<< endl;
			double num;
			num= -b/(2*a);
 			cout << num << " + i" << sqrt_val <<endl  
 				 << num << " - i" << sqrt_val <<endl;
			break;

		default:
			cout << "Roots are real and same " <<endl;
			num= -b/(2*a);
			cout << num <<endl;


	}
}
int main(){	

    int a , b , c;
    cout<<"Enter quadratic equation coefficents : "  ;
    cin >> a >> b >> c;
    solveQuad(a, b, c);

}