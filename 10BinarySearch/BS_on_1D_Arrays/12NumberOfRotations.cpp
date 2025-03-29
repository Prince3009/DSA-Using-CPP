/*
Input: arr = [5, 1, 2, 3, 4]
Output: 1
Explanation: The given array is 5 1 2 3 4. The original sorted array is 1 2 3 4 5. We can see that the array was rotated 1 times to the right.
*/


//Same logic as to find mininum

#include<bits/stdc++.h>
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
