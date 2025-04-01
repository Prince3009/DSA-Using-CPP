/*
arr[i] > arr[i-1] && arr[i] > arr[i+1]

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.

Input: nums = [1,2,3,4,5]
Output: 4
Explanation: In an increasing array, the last element is the peak due to assumption that element after the last is -∞.

Input: nums = [5,4,3,2,1]
Output: 0
Explanation: in a decreasing array, the first element is the peak due to the assumption that elements beyond the array boundaries are -∞.
*/

#include<bits/stdc++.h>
using namespace std;

// //Brute force approach
// int findPeakElement(vector<int>& arr) {
//     int n = arr.size();
//     for(int i = 0; i  < n; i++){
//         if(i == 0 && arr[i] > arr[i+1]) return i;
//         if(i == n-1 && arr[i] > arr[i-1]) return i;
//         if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) return i;
//     }
// }


//Optimal approach with O(log(n)) complexity
int findPeakElement(vector<int>& arr) {
    int n = arr.size();
    // If there's only one element, it is the peak by default.
        if(n == 1) return 0;

        // Check if the first or last element is a peak.
        if(arr[0] > arr[1]) return 0;
        if(arr[n-1] > arr[n-2]) return n-1;

        // Initialize binary search range, excluding first and last elements
        int low = 1, high = n-2;

        while(low <= high) {
            int mid = (low + high) / 2;

            // If mid is greater than its neighbors, it is a peak.
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
                return mid;
            }
            // If mid is greater than the left neighbor, move right
            else if(arr[mid] > arr[mid-1]) {
                low = mid + 1;
            }
            // If mid is greater than the right neighbor, move left
            else if(arr[mid] > arr[mid+1]) {
                high = mid - 1;
            }
            // If neither condition is met, move either direction
            else {
                low = mid + 1;   // or high = mid - 1; (both work)
            }
        }

        // If no peak is found, return -1 (though there should always be a peak)
        return -1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << findPeakElement(arr) << endl;
    return 0;
}