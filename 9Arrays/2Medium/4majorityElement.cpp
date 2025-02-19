// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:

// Input: nums = [3,2,3]
// Output: 3

#include<bits/stdc++.h>
using namespace std;

//Brute-force approach
// int majorityElement(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         int count  = 0;
//         for(int j = 0; j < n; j++){
//             if(arr[i] == arr[j]) count++;
//         }
//         if(count > n/2) return arr[i];
//     }
//     return -1;
// }




// //Better approach(By using hashing)
// // it.first → The number from nums (key in the map).
// // it.second → The count of occurrences of that number in nums (value in the map).

// int majorityElement(int arr[], int n){
//     map<int, int> mpp;
//     for(int i = 0; i < n; i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp){
//         if(it.second > n/2) return it.first;
//     }
//     return -1;  // Majority element doesn't exist in the array. It's possible in the case when the array has duplicate elements.
// }



//Optimal solution(Moore's voting algorithm)
int majorityElement(int arr[], int n){
    int count  = 0;
    int element;

    // Step 1: Finding the Candidate
    for(int i = 0; i < n; i++){
        if(count == 0){
            element = arr[i];            // Set current element as candidate
            count = 1;
        }
        else if(arr[i] == element){
            count++;                   // Increase count if the same element appears
        }
        else{
            count--;                   // Decrease count for different elements
        }
    }

    // Step 2: Verify if the element is Actually the Majority Element
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == element) count1++;
    }
    if(count1 > n/2){
        return element;
    }
    return -1;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << majorityElement(arr, n);
    return 0;
}
