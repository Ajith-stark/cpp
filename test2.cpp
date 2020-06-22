#include <bits/stdc++.h>
#define tab "\t"
using namespace std;



// vector<string> split_string(string);

// // Complete the climbingLeaderboard function below.
// vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
//     int size= alice.size();
//     // vector <int> led(size);
//     // vector <int> ranks(scores.size());
//     // ranks.assign(0,scores.size());
//     // led.assign(0,size);
//     // for (int j= scores .size()-1; j>=0 ; j--){
//     //     int score= scores[j];
//     //     ranks[score]=i+1;
//     // }
      
//     for (int i=0; i< alice .size() ; i++){
//         for (int j=0; j< scores .size() ; j++){
//             int al= alice[i];
//             cout << al << tab << scores[j]<< tab<< scores .size()<< endl;
//             // int inx = 
//             if (scores[j]<=al) {
//              scores.emplace(scores.begin()+j,al);

//             }
//         }
//     }
//     return scores;
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     int scores_count;
//     cin >> scores_count;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     string scores_temp_temp;
//     getline(cin, scores_temp_temp);

//     vector<string> scores_temp = split_string(scores_temp_temp);

//     vector<int> scores(scores_count);

//     for (int i = 0; i < scores_count; i++) {
//         int scores_item = stoi(scores_temp[i]);

//         scores[i] = scores_item;
//     }

//     int alice_count;
//     cin >> alice_count;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     string alice_temp_temp;
//     getline(cin, alice_temp_temp);

//     vector<string> alice_temp = split_string(alice_temp_temp);

//     vector<int> alice(alice_count);

//     for (int i = 0; i < alice_count; i++) {
//         int alice_item = stoi(alice_temp[i]);

//         alice[i] = alice_item;
//     }

//     vector<int> result = climbingLeaderboard(scores, alice);

//     for (int i = 0; i < result.size(); i++) {
//         fout << result[i];

//         if (i != result.size() - 1) {
//             fout << "\n";
//         }
//     }

//     fout << "\n";

//     fout.close();

//     return 0;
// }

// vector<string> split_string(string input_string) {
//     string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
//         return x == y and x == ' ';
//     });

//     input_string.erase(new_end, input_string.end());

//     while (input_string[input_string.length() - 1] == ' ') {
//         input_string.pop_back();
//     }

//     vector<string> splits;
//     char delimiter = ' ';

//     size_t i = 0;
//     size_t pos = input_string.find(delimiter);

//     while (pos != string::npos) {
//         splits.push_back(input_string.substr(i, pos - i));

//         i = pos + 1;
//         pos = input_string.find(delimiter, i);
//     }

//     splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

//     return splits;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');
//     vector<short int>data;
//     vector<unsigned int>temp;
//     int rem;
//     int div=n;
//     int count=0;

//     while(div!=0){
//         rem=div%2;
//         div = (div-rem)/2;
//         data.push_back(rem);
//     }
//     reverse(data.begin(), data.end());
//     for (auto d : data)
//         cout<< d<<endl;

//     cout<< endl<< endl;

//     for( auto i : data){
//         if (i==1) {count++ ; cout<< count << "\t";}
//         else if (i==0) {temp.push_back(count);;count =0 ;}
//         temp.push_back(count);}

//     int bigg= temp[0];
//     cout<< endl<< endl;
//     for( auto t : temp)
//     { 
//         cout<<t<< endl;
//         if ( bigg<= t) bigg=t; 
//     }

//     cout<< endl<<"---"<<bigg<<endl;
//     return 0;
// }

class myClass{
    int data=0;
    public:
    myClass& setVal(int);
    myClass& printVal ();
    ~myClass(){ cout<<"Destroyed"<<endl;}
    myClass copy();
};

myClass& myClass::setVal(int d){
    data=d;
    return *this;
}
myClass& myClass::printVal(){
    cout<<"Data : "<<data<<endl;
    return *this;
}

myClass myClass::copy(){
    return *this;
}


class myClass1{
    int data=0;
    public:
    myClass1* setVal(int);
    myClass1* printVal ();
    ~myClass1(){
        cout<<"Destroyed"<<endl;
    }
};

myClass1* myClass1::setVal(int d){
    data=d;
    return this;
}
myClass1* myClass1::printVal(){
    cout<<"Data : "<<data<<endl;
    return this;
}

void printArrays(auto * elePtr ){
    while(true){
        auto d = *(elePtr++);
        if (d=='\0') break;
        cout << d <<", ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    // myClass object;
    // object.setVal(4).printVal().setVal(100).printVal();
    // // myClass1  obj;
    // // myClass1 *ptr= &obj;
    // // ptr->setVal(20)->printVal();
    // myClass temp;
    // temp = object.copy();
    // temp.printVal();
    // myClass s,t;
    // t.setVal(405);
    // s=t;
    
    // s.printVal();

    int arr[30]={3,6,8,6,47,58,264,25,46,785,78,255,59,2,5,88255,558,24,5,846};

    // printArrays("arr");
    string data="dscbb ";
    string d="rrrrr";
    data.substr();
    cout  << tab << data <<tab <<d ;
}