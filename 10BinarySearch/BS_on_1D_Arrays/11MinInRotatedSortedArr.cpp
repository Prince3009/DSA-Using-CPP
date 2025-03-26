/*
Input: nums = [3,4,5,1,2]
Output: 1

Input: nums = [4,5,6,7,0,1,2]
Output: 0
*/
#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        // If mid element is greater than high, the minimum is in the right half
        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } 
        // Otherwise, the minimum is in the left half (including mid)
        else {
            high = mid;
        }
    }
    return arr[low]; // The minimum element
}

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMin(arr) << endl;

    return 0;
}
