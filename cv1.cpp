#include<iostream>

#define tab "\t"
using namespace std;

int main(){
    int T ;
    cin >> T;
    for (int i=1;i<=T;i++){
        int N;
        cin >> N;
        int total=0,c=0;
        while(total+1 <=N ){
            total+= ++c;
        }
        cout << c << endl;
    }
}