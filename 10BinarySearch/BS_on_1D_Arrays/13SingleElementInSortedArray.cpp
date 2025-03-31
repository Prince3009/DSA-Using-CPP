/*
Example 1:
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2

Example 2:
Input: nums = [3,3,7,7,10,11,11]
Output: 10
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the single non-duplicate element in a sorted array
int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();

    // If the array contains only one element, return that element
    if(n == 1) return arr[0];

    // Check if the first element is the unique one
    if(arr[0] != arr[1]) return arr[0];

    // Check if the last element is the unique one
    if(arr[n-1] != arr[n-2]) return arr[n-1];

    // Binary Search to find the single non-duplicate element
    int low = 1, high = n - 2; // Start from index 1 to n-2 (since 0 and n-1 are already checked)

    while (low <= high) {
        int mid = (low + high) / 2; // Find the middle index

        // If mid is the unique element, return it
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }

        /*
          The pattern in the array:
          - Pairs are always (X, X), (Y, Y), etc.
          - The unique element disrupts this pattern.

          If `mid` is part of a valid pair:
            - If `mid` is odd and arr[mid-1] == arr[mid], the unique element is on the right.
            - If `mid` is even and arr[mid] == arr[mid+1], the unique element is on the right.

          Otherwise, it's on the left.
        */
        if ((mid % 2 == 1 && arr[mid - 1] == arr[mid]) || 
            (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            low = mid + 1; // Move right
        } else {
            high = mid - 1; // Move left
        }
    }

    return -1; // This should never be reached if the input is valid
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = singleNonDuplicate(arr);
    cout << result << endl;

    return 0;
}
