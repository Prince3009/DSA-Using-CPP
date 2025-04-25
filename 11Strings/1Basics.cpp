#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Prince";
    cout << str << endl;          //Output - Prince

    str = "Kumar";           //Dynamic -> Runtime resize(c an't do this in char arrays)
    cout << str << endl;     //Output - Kumar


    //Concatenation in strings
    string str1 = "abc";
    string str2 = "def";
    string str3 = str1 + str2;
    cout << str3 << endl;    //Output - abcdef


    //Comparison
    cout << (str1 == str2) << endl;   //Output - 0
    cout << (str1 > str2) << endl;    //Output - 0
    cout << (str1 <= str2) << endl;  //Output - 1

    //Length
    cout << str3.length() << endl;    //Output - 6


    //Input 
    string str4;
    cin >> str4; //single word 
    cout << str4 << endl;

    cin.ignore();

    string str5;            // 🔥 This clears the newline left by cin >>
    getline(cin, str5);     //For complete sentence
    cout << str5 << endl;



    //Reverse a string using two pointer approach
    string ori;
    cin >> ori;
    int n = ori.size();
    int start = 0, end = n-1;
    while(start < end){
        swap(ori[start], ori[end]);
        start++;
        end--;
    }
    cout << ori << endl;
}