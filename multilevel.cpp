#include<iostream>
#include <string.h>
#define tab "\t"
using namespace std;


class base{

    public:
        char a= 'A';

        void sayHI(){
            cout<< endl<<" Hey ! I am from BASE class 😄 "<<endl;
        }
        
        void printBaseProps(){
            cout<<" I am base    class => a , b & c values is: "<< a<<tab<<b << tab << c <<endl ;
        }

    private:
        char b= 'B';
        
    protected: 
        char c= 'C';
        
};



class derived: public base {
    /*
    -------------------base class props & methods---------------------
        public: ----> public
            char a= 'A';

            void sayHI(){
                cout<< endl<<" Hey ! I am from BASE class 😄 "<<endl;
            }
            
            void printBaseProps(){
                cout<<" I am base class => a , b & c values is: "<< a<<tab<<b << tab << c <<endl ;
            }

        protected: ----> protected
            char c= 'C';
    */
    public:

        void printDerivedProps(){
            cout<<" I am derived class => a  & c values is: "<< a << tab << c <<endl ;
        }
    
};



class multilevel : public derived{
    /*    
    -------------------base & derived class props & methods---------------------

        public: ----> public ----> public 
            char a= 'A';

            void sayHI(){
                cout<< endl<<" Hey ! I am from BASE class 😄 "<<endl;
            }
            
            void printBaseProps(){
                cout<<" I am base class => a , b & c values is: "<< a<<tab<<b << tab << c <<endl ;
            }
            
            
        protected: ----> protected ----> protected
            char c= 'C';

    */
    public:

        void printMultiProps(){
            cout<<" I am derived class => a  & c values is: "<< a << tab << c <<endl ;
        }

};



int main(){

    base Base;
    Base.sayHI();
    Base.printBaseProps();

    derived derived_Obj;
    derived_Obj.sayHI();
    derived_Obj.printBaseProps();
    derived_Obj.printDerivedProps();

    multilevel Multi;
    Multi.sayHI();
    Multi.printBaseProps();
    Multi.printDerivedProps();
    Multi.printMultiProps();
    
}