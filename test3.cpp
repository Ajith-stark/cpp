#include<iostream>
#include<string.h>

using namespace std;

int main(int argc , char * argv[]){
// char d[40];
// cin.getline(d,40);
// for (int i=0; i<strlen(d);i+=2){
// 	cout<< d[i]<<endl;
// // }
// 	int a= 9;
// 	int b=2;
// 	int j= a%b ;
// 	cout<< a-j<<endl;
// 	char d1[4];
// 	char d2[4];
// 	char d3[4];
// 	cin.get(d1,4);
// 	cin.ignore();
// 	cin.get(d2,4);

// 	cin.get(d3,4);

// 	for(int i =0; i< 4 ; i++)
// 		cout<< d1[i];
// 	for(int i =0; i< 4 ; i++)
// 		cout<< d2[i];
// 	for(int i =0; i< 4 ; i++)
// 		cout<< d3[i];
// 	char d[4];
// 	cin >> d;
// 	cout<<d;
cout<< argc << endl;

for(int i =0; i< argc ; i++)
	cout<< *argv++;


}
