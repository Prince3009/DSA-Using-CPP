/*
For unique elements
Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/
#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If target is found, return the index
        if (arr[mid] == target) return mid;

        // Check if the left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target <= arr[mid]) {
                high = mid - 1;  // Search in the left half
            } else {
                low = mid + 1;   // Search in the right half
            }
        }

        // Otherwise, the right half must be sorted
        else {
            if (arr[mid] <= target && target <= arr[high]) {
                low = mid + 1;   // Search in the right half
            } else {
                high = mid - 1;  // Search in the left half
            }
        }
    }
    return -1;  // Target not found
}

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    int result = search(arr, target);

    return 0;
}
