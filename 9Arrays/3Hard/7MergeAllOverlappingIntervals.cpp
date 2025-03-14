/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

Example 2:
Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
*/

#include<bits/stdc++.h>
using namespace std;

// //Brute force approach
// vector<vector<int>> mergeInterval(vector<vector<int>>& arr){
//     int n = arr.size();
//     sort(arr.begin(), arr.end());

//     vector<vector<int>> ans;
//     for(int i = 0 ; i < n; i++){
//         int start = arr[i][0];
//         int end = arr[i][1];
//         if(!ans.empty() && end <= arr.back()[1]){
//             continue;
//         }
//         for(int j = i+1; j < n; j++){
//             if(arr[j][0] <= end){
//                 end = max(end, arr[j][1]);
//             }
//             else{
//                 break;
//             }
//         }
//         ans.push_back({start, end});
//     }
//     return ans;
// }

vector<vector<int>> mergeInterval(vector<vector<int>>& arr) {
    int n = arr.size();
    vector<vector<int>> ans;

    // Step 1: Sort intervals based on the start time
    sort(arr.begin(), arr.end());

    // Step 2: Iterate through the sorted intervals and merge overlapping ones
    for (int i = 0; i < n; i++) {
        // If ans is empty or current interval does not overlap, add it
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        } 
        else {
            // Merge overlapping intervals by updating the end time
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        } 
    }
    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    //Enter the intervals (start end)
    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> result = mergeInterval(intervals);

    cout << "Merged Intervals:\n";
    for (auto& interval : result) {
        cout << interval[0] << " " << interval[1] << endl;
    }

    return 0;
}