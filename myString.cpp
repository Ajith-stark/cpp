#include<iostream>
#include<string.h>
using namespace std;

/**
 * AIM : Write a class for concatenation and printing strings
 * variable to store string data 
 * create Print() to display stored String
 * create OP + overloaded function to concatenation of 2 strings
 * 
*/

class String{
    char str[30];

    public:
    // Default constructor 
    String(){ 
        strcpy(str, "\0");
    }

    // Parameterized constructor for storing string / array of char
    String(char data[30]){
        strcpy(str, data);
    }

    // Destructor *optional
    // ~String(){ cout<< "Obj is destroyed "<<endl; }

    // Declaration of concatenation ( + OP overloaded) func
    String operator+(String str2); 

    // Display func
    void Print(){
        cout << "The string is : " << str <<endl;
    }

    // Copy constructor for initializing String type data
    String (String& copy){ strcpy(str, copy.str);}

};

// Definition of concatenation ( + OP overloaded) func
String String :: operator+(String str2){
    String temp;
    strcpy(temp.str, str);          // temp.str = str
    strcat(temp.str , str2.str) ;   // temp.str = temp.str + str2.str
    return temp;
}


int main(){

    String myStr1("Hello ");
        cout << "myString1 obj ==> ";
        myStr1.Print();

    String myStr2("world");
        cout << "myString2 obj ==> ";
        myStr2.Print();

    String result ;
        result = myStr1+myStr2; 
        cout << "Concatenated String ==> ";
        result.Print();
    
    // initializing copyStr obj with myStr1 obj (copy constructor)
    // String copyStr(myStr1);  
    //     cout << "copyStr obj  ==> ";
    //     copyStr.Print();

}

// output:
// myString1 obj ==> The string is : Hello 
// myString2 obj ==> The string is : world
// Obj is destroyed 
// Obj is destroyed 
// Concatenated String ==> The string is : Hello world
// copyStr obj  ==> The string is : Hello 
// Obj is destroyed 
// Obj is destroyed 
// Obj is destroyed 
// Obj is destroyed 