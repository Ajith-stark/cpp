#include<iostream>

#define tab "\t"
using namespace std;

class numbers{
    protected:
        int num1,num2;

};

class Add: private numbers{
    public:
    Add(int a, int b){
        num1= a;
        num2 = b;

    }
    int add(){
        return num1+num2;
    }
};

class Sub: private numbers{
    public:
    Sub(int a, int b){
        num1=a;
        num2=b;
    }
    int sub(){
        return num1-num2;
    }
};

class Arithmetic: public Add, public Sub{
    Arithmetic(){}
    Arithmetic(int arg1, int arg2):Sub(arg1, arg2), Add(arg1,arg2){
 
    }
    int add (){
        
    }
};
int main(){

}