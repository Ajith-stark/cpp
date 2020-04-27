#include <iostream>
using namespace std;
typedef unsigned short int int; 

float avgOf3 (float val1,float val2,float val3){
  return (val1+val2+val3)/3;
}

float minOf3 (float val1,float val2,float val3){
  if      (val1 < val2 && val1 < val3)   return val1;
  else if (val2 < val1 && val2 < val3)   return val2;
  else    return val3;
}


int main() {
  float a=0.0,b=0.0,c=0.0;
  cout << "Enter 3 values :";
  cin >> a >> b >> c; 
  cout<< "   Average  value is : " << avgOf3(a,b,c) << endl;
  cout<< "   Smallest value is : " << minOf3(a,b,c) << endl;
  int d;
  cout << sizeof d;
}









// float minOf2(float val1, float val2){ return (val1<val2) ? val1:val2; }
// cout<< "\033[92m bold red text\033[0m\n ";

