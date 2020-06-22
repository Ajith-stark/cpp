#include<iostream>
/*
⚠️ WARNING ⚠️ 
Please do not write this code as it is , make change variable name and function name 
except class name & variable m & n because it is given in question.
otherwise you are proving your self as dumbest in the world.
*/
using namespace std;

class integer{ 
  private:
    int m;
    int n;
    
  public:
    integer(){
        m=0;
        n=0;
    }

    integer(int arg1, int arg2){
        m=arg1;
        n=arg2;
    }

    void operator++(int){
        m++;
        n++;
    }

    void display(){
        cout << "m value is : "<<m <<endl<<"n value is : "<<n<<endl;
    }
      
};

int main(){
    integer myInt(2,4);
    myInt++;
    myInt.display();
}