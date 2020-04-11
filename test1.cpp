#include<iostream>
#include<string.h>

using namespace std;

void Print (int args[][3],int len1,int len2){
    cout <<"{";
    for (int i=0;i<len1;i++){
        cout  << " { " ;
        for (int j=0;j<len2;j++){
            cout<<args[i][j] <<",";
        }
        cout  << "} ," ;
    }
    cout <<"}"<<endl;
}

void Print(char const* ptrChar){

    for (int i=0;; i++){
            char d= *(ptrChar+i); // char d= (*ptrchar++);
            if (d=='\0'){ break; }
            cout<< d<<endl ;
    }

    cout << ptrChar<<endl;
    char d[30];
    strcpy(d,ptrChar);
    // cout << "\t"<<d<<endl;

    return;

    while (true){
        char d= *ptrChar++;  // char d= (*ptrchar++);
        if (d=='\0'){ break; }
        cout<< d<<endl ;
    }

}
int main(){
    int multi[][3]={{45,45,3},{4,8,7},{9,6,2},{8,6,5}};
    int d[]={4,4,5,5,5};

    cout <<"----------single dimension----------"<<endl;
    for (int i=0; i<5; i++ ) { cout  << *(d+i)<<endl;}

    cout <<"----------multi dimensional----------"<<endl
    << " {";
    for (int i=0; i<5; i++ ) {
            int *ptr = *(multi+i);
            cout <<"{ ";
            for(int j=0;j<3;j++) cout <<*ptr++ <<"," ;
            cout <<"} ";
    }
    cout << " }"<<endl;

    Print("Hello world !");
    
}
