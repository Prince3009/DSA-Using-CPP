//Hashing - 
//Number hashing
/*
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
*/





//By using map
/*
Why is this method using `map<int, int>` more efficient than using an array?

 **Handles Large and Negative Numbers**  
   - If we use `int hash[1000000]`, it assumes the values are within a limited range (e.g., 0 to 999999).  
   - If negative numbers or very large values exist, an array approach won't work.  
   - `map<int, int>` dynamically manages all possible integer values.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<int,int> mpp;                        // Declare a map to store frequency of each number

     // Count the frequency of each element in the array
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    int q; 
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;         // Print the frequency of the number
    }
    return 0;
}