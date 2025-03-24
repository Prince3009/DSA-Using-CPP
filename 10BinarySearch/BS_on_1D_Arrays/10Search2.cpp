/*
For duplicate elements
*/

#include <iostream>
#include <vector>

using namespace std;

bool search(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // If the target is found, return true
        if (arr[mid] == target) return true;

        // If left, middle, and right elements are equal, skip duplicates
        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low++;
            high--;
            continue;
        }

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
    return false; // Target not found
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
