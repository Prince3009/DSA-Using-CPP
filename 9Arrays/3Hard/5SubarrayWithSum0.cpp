/*
Given an array arr containing both positive and negative integers, the task is to compute the length of the largest subarray that has a sum of 0.
Examples:

Input: arr[] = [15, -2, 2, -8, 1, 7, 10, 23]
Output: 5
Explanation: The largest subarray with a sum of 0 is [-2, 2, -8, 1, 7].

Input: arr[] = [2, 10, 4]
Output: 0
Explanation: There is no subarray with a sum of 0.
*/


#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find the length of the longest subarray with sum 0
int maxLengthZeroSumSubarray(vector<int>& arr) {
    unordered_map<int, int> preSumMap; // Stores (prefix_sum, first occurrence index)
    int sum = 0, maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        // If sum becomes zero, update max_length
        if (sum == 0) {
            maxLen = max(maxLen, i + 1);
        }

        // If sum already exists in map, compute the subarray length
        if (preSumMap.find(sum) != preSumMap.end()) {
            maxLen = max(maxLen, i - preSumMap[sum]);
        } else {
            preSumMap[sum] = i; // Store first occurrence
        }
    }

    return maxLen;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the function and display the result
    int result = maxLengthZeroSumSubarray(arr);
    cout << result << endl;

    return 0;
}
