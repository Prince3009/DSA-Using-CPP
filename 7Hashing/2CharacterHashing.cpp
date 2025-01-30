#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int hash[26] = {0};                        // Array for storing frequencies of 'a' to 'z'
    //int hash[256] = {0};                     // Array to store frequency of each character (ASCII size)

    // Count frequency of each character in the string
    for(int i = 0; i < s.size(); i++){
        hash[s[i]-'a']++;
        //hash[s[i]]++;

    }


    int q; 
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        cout << hash[ch-'a'] << endl;                // Accessing the frequency of the queried character (ASCII value - 'a' to get index)
        // cout << hash[ch] << endl;                     // Accessing the frequency of the queried character (ASCII value)
    }
}