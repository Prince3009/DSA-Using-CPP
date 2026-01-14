#include<bits/stdc++.h>
using namespace std;

int main(){

    //creation
    //unordered_map <key, value> map_name;
    unordered_map <string, int> um;

    //insertion
    //1
    pair<string, int> pair1 = make_pair("Prince", 2);
    um.insert(pair1);

    //2
    pair<string, int> pair2("Kumar", 3);
    um.insert(pair2);

    //3
    um["Chourasia"] = 1;


    //Searching
    cout << um["Prince"] << endl;   //Output: 2 (prints value)
    cout << um.at("Kumar") << endl;

    cout << um["unknown_key"] << endl;   //Output: 0(no such key, value pair exists)

    //Size 
    cout << um.size() << endl;    // 4 times insertion including unknown_key
    
    //Count (prints 0 if the value is not there and 1 if the value is present)
    cout << um.count("Prince") << endl;
    cout << um.count("unknown_key") << endl;

    //Deletion
    um.erase("Choursasia");


    //To access full map
    for(auto m : um){
        cout << m.first << "->" << m.second << endl;  //Since the map is unordered so it will print data in random order, if we want data in sequential form then use map only 
    }
}