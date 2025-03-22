/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Input: nums = [], target = 0
Output: [-1,-1]
*/

#include <iostream>
#include <vector>
using namespace std;


// //Method 1 : By using upper and lower bound
// int lowerBound(vector<int>& arr, int target) {
//     int n = arr.size();
//     int low = 0, high = n - 1;
//     int ans = n;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (arr[mid] >= target) {
//             ans = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// int upperBound(vector<int>& arr, int target) {
//     int n = arr.size();
//     int low = 0, high = n - 1;
//     int ans = n;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (arr[mid] > target) {
//             ans = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return ans;
// }

// vector<int> searchRange(vector<int>& arr, int target) {
//     int n = arr.size();
//     int lb = lowerBound(arr, target);
//     if (lb == n || arr[lb] != target) {
//         return {-1, -1};
//     }
//     return {lb, upperBound(arr, target) - 1};
// }


//Method 2 : Directly use binary search
int firstOccurance(vector<int>& arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int lastOccurance(vector<int>& arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == target){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& arr, int target) {
    int first = firstOccurance(arr, target);
    int last = lastOccurance(arr, target);
    return {first, last};
}
int main() {
    int n, target;
    cin >> n; 
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    
    vector<int> result = searchRange(nums, target);
    cout << result[0] << " " << result[1] << "\n";
    
    return 0;
}