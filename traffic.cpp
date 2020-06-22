#include<iostream>
#include<time.h>
#define tab "\t"
using namespace std;
void make(int *arr){
    int i=0;
    while(i<5){
        cout << *arr++ <<endl;
        if (*arr =='\0') cout<<"d";
        i++;
    }
}
int main(){
    int lane[3]={1,3,4};
    make(lane);
}
