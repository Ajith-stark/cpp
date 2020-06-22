#include <bits/stdc++.h>
#define tab "\t"
#define format setw(15) << setfill(' ')<< setiosflags(ios::left)
#define format2 setw(14) << setfill(' ')<< setiosflags(ios::left)

using namespace std;

// Complete the formingMagicSquare function below.
int formingMagicSquare(vector<vector<int>> s) {
	int magicConst=-1;

	for(auto row:s){
		int rowSum=0;
		for (auto eles: row) rowSum+=eles;
		if (magicConst <rowSum) magicConst= rowSum;
	}

	for(int i=0; i< s.size(); i++){
		int colSum=0;
		for (int j=0;j<s.size();j++) {
			colSum+= s[j][i];
		}
		if (magicConst <colSum) magicConst= colSum;
	}

	for(int i=0; i< s.size(); i++){
		
		for (int j=0;j<s.size();j++) {
			
		}
		
	}


	
	return magicConst;



}

int main()
{

    // vector<vector<int>> s(3);
    // s={{4,9,2},{3,5,7},{8,1,5}};
    // for (int i = 0; i < 3; i++) {
    //     s[i].resize(3);

    //     for (int j = 0; j < 3; j++) {
    //         cin >> s[i][j];
    //     }

    //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // }

    // int result = formingMagicSquare(s);

    // cout << result << "\n";
	int arr[3];
	int jrr[3]={7,7,7};
	
	for (auto err :arr)
		cout<< err <<" + ";

    return 0;
}
