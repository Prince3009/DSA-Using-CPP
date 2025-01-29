//Hashing - 
//Number hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Define hash array (frequency counter)
    // Note: Adjust size as needed. For example, 1e6(1000000) for large input ranges
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;                        // Populate the hash array with frequencies
    }

    int q; 
    cin >> q;              // Number of queries
    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;                 // Output the frequency of the queried number
    }
    return 0;
}