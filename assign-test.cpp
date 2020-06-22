#include<iostream>

#define tab "\t"
using namespace std;

class myClass{
  private:
    int data;
    
  public:
    myClass(int);
    myClass(myClass &);
    friend void print(myClass );
    
};

myClass::myClass(int d){
  data=d;
}

myClass::myClass(myClass & Copy){
	data=Copy.data;
}

void print(myClass obj){
  cout<< "The value is : " << obj.data<<endl;
}


int main(){	
  myClass myObj(5);
  print(myObj);
  myClass myObj2(myObj);
  print(myObj2);
  return 0;
  }		