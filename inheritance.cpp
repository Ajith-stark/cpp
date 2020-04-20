#include<iostream>
#define tab "\t"
using namespace std;



class base{

    public:
        char a= 'A';

        void sayHI(){
            cout<< endl<<" Hey ! I am from BASE class 😄 "<<endl;
        }
        
        void showPrivateandProtected(){
            cout<<" I am derived 1 => b & c values is: "<< b << tab << c <<endl ;
        }

    private:
        char b= 'B';
        
    protected: 
        char c= 'C';
    
        

};



class derived1: public base {
    /*
    -------------------base class props & methods---------------------

    */
    public:

        void showPrivateandProtected(){
            cout<<" I am derived 1 => c values is: "<< c <<endl ;

        }

    
};



class derived2: private base{
    /*
    -------------------base class props & methods---------------------

    */
    public:

        void showPrivate(){
            sayHI();
            cout<< " I am derived 2 => a & c value is: " << a << tab << c <<endl;
        }
};


class derived3: protected base{
    /*  
    -------------------base class props & methods---------------------

    */
    public:

        void showProtected(){
            sayHI();
            cout<< " I am derived 3 => a & c value is: " << a << tab << c <<endl;

        }
    
};




int main(){


    
}