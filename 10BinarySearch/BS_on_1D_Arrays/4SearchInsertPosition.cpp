/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4
*/

//Same logic as lower bound
#include<bits/stdc++.h>
using namespace std;
int lowerBound(int arr[], int n, int target){
    int low = 0, high = n-1;
    int ans = n;   //If the target value is greater than every elememt then it will return the size
    while(low <= high){
        int mid = (low+high)/2;              //To avoid overflow we can use [low + (high-low) / 2]
        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << lowerBound(arr, n, target);
}