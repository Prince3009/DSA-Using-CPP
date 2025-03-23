/*
Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
Output: 4
Explanation: target = 2 occurs 4 times in the given array so the output is 4.
*/
#include<bits/stdc++.h>
using namespace std;
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

int countFreq(vector<int>& arr, int target) {
    int first = firstOccurance(arr, target);
    int last = lastOccurance(arr, target);
    if (first == -1 || last == -1) return 0;
    return last - first + 1;
}
int main() {
    int n, target;
    cin >> n; 
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    
    int result = countFreq(nums, target);
    cout << result << endl;
    
    return 0;
}