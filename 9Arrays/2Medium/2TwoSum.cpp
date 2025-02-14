//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include<bits/stdc++.h>
using namespace std;
pair<int, int> twoSum(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == target){
                return {i, j};
            }
        }
    }
    return {-1, -1};
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
    pair<int, int> result =  twoSum(arr, n, target);
    if(result.first != -1)
        cout << "[" << result.first << "," << result.second << "]"<< endl;
}