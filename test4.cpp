#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int biggest=-100;

    for (int i=0; i< 4 ; i++){

        int top=0,bot=0,mid=0;
        for (int j=0; j< 4 ; j++){
            top= arr[i][j]      +arr[i][j+1]     +arr[i][j+2];
            bot= arr[i+2][j]    +arr[i+2][j+1]  +arr[i+2][j+2];
            mid= arr[i+1][j+1];
            cout<< i <<" : top="<<top <<"  mid="<<mid <<"  bot="<<bot<<endl;
            int sum = top+mid+bot;
            if (biggest < sum) biggest=sum;
        }

    }
    cout<< biggest;

    return 0;
}
/*
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
*/