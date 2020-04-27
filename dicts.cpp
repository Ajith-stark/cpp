#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    //create a map that stores strings indexed by strings
    std::map<std::string, std::string> m;

    //add some items to the map
    m["cat"] = "mieow";
    m["dog"] = "woof";
    m["horse"] = "neigh";
    m["fish"] = "bubble";

    //now loop through all of the key-value pairs
    //in the map and print them out
    for ( auto item : m )
    {
        //item.first is the key
        std::cout << item.first << " goes ";

        //item.second is the value
        std::cout << item.second << std::endl;
    }

    //finally, look up the sound of a cat
    std::cout << "What is the sound of a cat? " << m["cats"] 
              << std::endl;
    char d[10];
    string da;
    getline(cin,da);
    cout << da;
    if (da=="") cout << "yes";

    return 0;
}
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string.h>
using namespace std;


int main() {
    int n =0;
    cin >> n;
    map<string, unsigned int> phoneBook;
    map<string, unsigned int>::iterator itr; 
    for (int i=0 ; i<3 ; i++){
        string name;
        unsigned int ph=0;
        cin >> name >> ph;
        phoneBook[name]=ph;
    }
    for (int i=0 ; i<3 ; i++){
        string name;
        cin >> name ;
        if (phoneBook[name]) cout<< name<<"="<<phoneBook[name] << endl;
        else cout<< "Not found"<< endl;
    }
    

    return 0;
}
*/