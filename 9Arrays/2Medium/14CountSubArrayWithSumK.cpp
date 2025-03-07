/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [1,1,1], k = 2
Output: 2

Example 2:
Input: nums = [1,2,3], k = 3
Output: 2
*/


#include<bits/stdc++.h>
using namespace std;

// int countSubarray(int arr[], int n, int k){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         int sum = 0;
//         for(int j = i; j < n; j++){
//             sum += arr[j];
//             if(sum == k) count++;
//         }
//     }
//     return count;
// }

int countSubarray(int arr[], int n, int k) {
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int count = 0, preSum = 0;
    for(int i = 0; i < n; i++){
        preSum += arr[i];
        int remove = preSum - k;
        count += mpp[remove];
        mpp[preSum] += 1;
    }
    return count;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k; 
    cin >> k;
    cout << countSubarray(arr, n, k);
}