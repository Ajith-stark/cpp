#include<iostream>
#include<string.h>
#define tab "\t"
using namespace std;



int main(){
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
