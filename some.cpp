#include<iostream>
#include<string.h>
#include<vector>
#define tab "\t"
using namespace std;
vector<int> countingSort(vector<int> arr) {

    unsigned int temp= arr[0];
    for (unsigned int j=0;j<arr.size();j++){
        if (temp<=arr[j]){
            temp=arr[j];
        }
    }
    // temp=temp-1;
    cout<< tab << "temp"<<temp <<endl;
    unsigned int len = temp+1;
    vector<int> mySorted(len);
    mySorted.assign(len,0);
    for(long unsigned int i=0; i<arr.size(); i++){
        unsigned int index = arr[i];
        unsigned int val = mySorted[index]++;
        mySorted[index]= mySorted[index]++;
        // cout << i <<tab << index <<tab  << tab<< mySorted[index]<< endl;
    }
return mySorted;

}
int main(){
    vector<int> result,inp;
    int s=0;
    cin>> s;
    for (unsigned int i=0;i<s;i++){
        int d;
        cin >> d;
        inp.push_back(d);
    }

    result= countingSort(inp);
    for (unsigned int i=0;i<result.size();i++){
        cout<< result[i] <<" ";
    }
    cout<< endl<<result.size();   
}