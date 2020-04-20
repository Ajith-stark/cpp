#include<iostream>
#include<string.h>
#define tab "\t"
using namespace std;

void p(int *ptr){
    cout<<"pointer"<<endl;
    *ptr=8000;
}
void p(int &ptr){
    ptr=2000;
    cout<<"reference"<<endl;

}

class classic {

    float a=0;
    public:
    
    classic(float d){
        a=d;
           
    }
    void read(float d){
        a=d;
    }
    void print(){cout<<tab<<a<<endl;}

    friend void converToCM(classic & testObj);

    classic & just(classic & test){
        if (test.a>=2000){
            this->read(5);
            return test;
        }
     return *this;
     }

 

};

void converToCM(classic & testObj){
    testObj.a= (testObj.a)/1000;
    
}


int main(){

    {


    int val= 100;

    int *ptr= &val;
    int *copy1 = ptr;
    int &copy2= *ptr;

    val=203;
    cout<< val <<tab<<*copy1<<tab<<copy2<<endl;

    p(&val);
    cout<< val ;
    char g[100];
    // cin >> g;
    // cout<< g;
    // g="hg";



    int main =9;
    int * mainPtr= &main;

    int &a = *mainPtr;
    int &b = *mainPtr;
    int &c = main;
    main++;

    cout << a << tab << endl;
    cout << b << tab << endl;
    cout << c << tab << endl;
    
    }
    classic obj(2000);
    obj.print();
    classic test(1000);
    test.print();


    classic temp=obj.just(test);
    temp.print();
    temp.read(5);
cout<<"-------------------------------------------------------------------"<<endl;
    temp.print();
    obj.print();
    test.print();




    // classic *ptr=&obj;
    // ptr->a=1034434;
    // ptr->print();

    // int first=1;
    // int j=just(first);
     
    // cout<< first <<tab<<j;
    


}
