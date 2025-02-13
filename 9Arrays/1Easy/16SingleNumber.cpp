#include<bits/stdc++.h>
using namespace std;

// //Brute-force method
// int singleNumber(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         int count = 0;
//         for(int j = 0; j < n; j++){
//             if(arr[i] == arr[j]) count++;
//         }
//         if(count == 1){
//             return arr[i];
//         }
//     }
//     return -1; // If no single number is found
// }


//Optimal Approach(Uisng XOR)
int singleNumber(int arr[], int n){
    int result = 0;                         //Asssigning 0 to store unique number
    for(int i = 0; i < n; i++){
        result ^= arr[i];                  // Applying XOR operation, as a^a = 0 and a^0 = a        
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << singleNumber(arr, n);
}