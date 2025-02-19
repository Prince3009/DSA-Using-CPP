// Given an integer array arr, find the 
// subarray
//  with the largest sum, and return its sum.

 

// Example 1:

// Input: arr = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

#include<bits/stdc++.h>
using namespace std;


// //Brute or better approach
// int maxSubarraySum(int arr[], int n){
//     int maxm = INT_MIN;
//     for(int i = 0; i < n; i++){
//         int sum = 0;
//         for(int j = i; j < n; j++){
//             sum += arr[j];
//             maxm = max(sum, maxm);
//         }
//     }
//     return maxm;
// }


//Optimal approach(Kadane's algorithm)
int maxSubarraySum(int arr[], int n){
    int maxm = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxm = max(maxm, sum);

        if(sum < 0){
            sum = 0;  // reset the sum if it becomes negative. This ensures that the next element is considered in the next subarray.  // with this, we are getting the maximum subarray sum in the current subarray as well.  // Hence, this approach is more efficient than the brute force approach.  // In the brute force approach, we have to consider all possible subarrays and find the maximum sum.  // Hence, this approach is more efficient.  // This also ensures that the subarray sum is always non-negative, which is a requirement for the problem statement.  // The problem statement also asks for the subarray with the largest sum, and Kadane's algorithm ensures that we get this subarray as well.  // The maximum subarray sum is the maximum sum found by Kadane's algorithm.  // In case of multiple subarrays with the same maximum sum, Kadane's algorithm will return any one of
        }
    }
    return maxm;
}
int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << maxSubarraySum(arr, n);
    return 0;
}