/*
Given an unsorted array arr[] of integers and an integer x, find the floor and ceiling of x in arr[].
Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].
Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].
Return an array of integers denoting the [floor, ceil]. Return -1 for floor or ceiling if the floor or ceiling is not present.

Input: x = 7 , arr[] = [5, 6, 8, 9, 6, 5, 5, 6]
Output: 6, 8
Explanation: Floor of 7 is 6 and ceil of 7 is 8.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int>& arr, int x) {
        // Sorting the array to enable binary search
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        int low = 0, high = n - 1;
        int floor = -1, ceil = -1;

        // Finding Floor (Largest element <= x)
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= x) {
                floor = arr[mid]; // Store element, not index
                low = mid + 1; // Move right
            } else {
                high = mid - 1;
            }
        }

        // Reset variables for Ceiling Search
        low = 0, high = n - 1;

        // Finding Ceil (Smallest element >= x)
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {
                ceil = arr[mid]; // Store element, not index
                high = mid - 1; // Move left
            } else {
                low = mid + 1;
            }
        }

        return {floor, ceil};
    }
};


int main() {
    int n, x;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cin >> x;

    Solution sol;
    vector<int> result = sol.getFloorAndCeil(arr, x);

    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;

    return 0;
}
