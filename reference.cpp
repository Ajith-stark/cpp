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
    public: ----> public
        char a= 'A';

        void sayHI(){
            cout<< endl<<" Hey ! I am from BASE class 😄 "<<endl;
        }
        
        void showPrivateandProtected(){
            cout<<" I am derived 1 => b & c values is: "<< b << tab << c <<endl ;
        }

    protected: ----> protected
        char c= 'C';
*/
    public:

    void showPrivateandProtected(){
        cout<<" I am derived 1 => c values is: "<< c <<endl ;

    }

    
};



class derived2: private base{
/*
-------------------base class props & methods---------------------
    public: ----> private:
        char a= 'A';

        void sayHI(){
            cout<< endl<<" Hey ! I am from BASE class 😄 "<<endl;
        }
        
        void showPrivateandProtected(){
            cout<<" I am derived 1 => b & c values is: "<< b << tab << c <<endl ;
        }
        
    protected: ----> private:
        char c= 'C';
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
    public: ----> protected
        char a= 'A';

        void sayHI(){
            cout<< endl<<" Hey ! I am from BASE class 😄 "<<endl;
        }
        
        void showPrivateandProtected(){
            cout<<" I am derived 1 => b & c values is: "<< b << tab << c <<endl ;
        }
        
    protected: ----> protected
        char c= 'C';
*/
    public:

        void showProtected(){
            sayHI();
            cout<< " I am derived 3 => a & c value is: " << a << tab << c <<endl;

        }
    
};

class multilevel : public derived3{
/*
   base  ---->     derived3     ---->   multilevel 
    
    -------------------base class props & methods---------------------

    public: ----> protected ----> protected 
        char a= 'A';

        void sayHI(){
            cout<< endl<<" Hey ! I am from BASE class 😄 "<<endl;
        }
        
        void showPrivateandProtected(){
            cout<<" I am derived 1 => b & c values is: "<< b << tab << c <<endl ;
        }
        
    protected: ----> protected ----> protected
        char c= 'C';

    public:----> public
        void showProtected(){
            sayHI();
            cout<< " I am derived 3 => a & c value is: " << a << tab << c <<endl;
        }

*/

    public:
    multilevel(){
        sayHI();
        cout << " I am multilevel => a & c value is: " <<a << tab << c <<endl;
        cout<< " value of c from derived 3 is :" << c << endl;
    }
};









int main(){

    derived1 derived1_Obj;
    derived1_Obj .sayHI();
    derived1_Obj .showPrivateandProtected();
    cout << tab << derived1_Obj.a <<endl;
    

    derived2 derived2_obj ;
     // derived2_obj .sayHI();
    // cout << endl << derived2_obj .a <<endl;
    derived2_obj .showPrivate();


    derived3 derived3__Obj ;
    // derived3__Obj  .sayHI();
    // cout << endl << derived3__Obj .a <<endl;
    derived3__Obj .showProtected();


    multilevel Multi;
    Multi.showProtected();
    
}