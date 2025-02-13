#include<bits/stdc++.h>
using namespace std;

// //Brute force solution
// int missingNumber(int arr[], int n){
//     for(int i = 0; i <= n; i++){
//         int flag = 0;
//         for(int j = 0; j < n; j++){
//             if(arr[j] == i){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag == 0){
//             return i;
//         }
//     }
//     return -1;              //If no missing number found
// }



// //Optimal solution - 1
int missingNumber(int arr[], int n){
    int sum = (n * (n + 1)) / 2;           //Sum of first n natural numbers
    int actualSum = 0;
    for(int i = 0; i < n; i++){
        actualSum += arr[i];               
    }
        //Sum of first n natural numbers - actualSum = missingNumber
    return sum - actualSum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << missingNumber(arr, n);
}