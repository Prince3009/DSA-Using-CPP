/*
Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
Output: 3
Explanation: Let us see what happened in the first three days. x means flower bloomed and _ means flower did not bloom in the garden.
We need 3 bouquets each should contain 1 flower.
After day 1: [x, _, _, _, _]   // we can only make one bouquet.
After day 2: [x, _, _, _, x]   // we can only make two bouquets.
After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.
*/


#include <iostream>
#include <vector>
#include <algorithm>  // For min_element() and max_element()
using namespace std;

// Function to find the minimum value in the array
int findMin(vector<int>& arr) {
    int min = arr[0];  
    for (int i = 1; i < arr.size(); i++) {
        if (min > arr[i]) {
            min = arr[i]; 
        }
    }
    return min;
}

// Function to find the maximum value in the array
int findMax(vector<int>& arr) {
    int max = arr[0];  
    for (int i = 1; i < arr.size(); i++) {
        if (max < arr[i]) {
            max = arr[i]; 
        }
    }
    return max;
}

// Function to check if it's possible to make `m` bouquets with `k` flowers each on `day`
bool possible(vector<int>& arr, int day, int m, int k) {
    int count = 0;  // To count consecutive bloomed flowers
    int noOfBouq = 0;  // To count number of bouquets formed

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= day) {
            count++;  // Flower can be used for bouquet
        } else {
            noOfBouq += count / k;  // Create bouquets from previous consecutive flowers
            count = 0;  // Reset count since we hit an unavailable flower
        }
    }
    noOfBouq += count / k;  // Consider the last segment of consecutive flowers

    return noOfBouq >= m;  // Return true if we can form at least `m` bouquets
}

// Function to find the minimum number of days required to make `m` bouquets with `k` flowers each
int minDays(vector<int>& arr, int m, int k) {
    int n = arr.size();
    
    // If total required flowers exceed available flowers, return -1
    if ((long long) m * k > n) return -1;

    int low = findMin(arr), high = findMax(arr);
    int ans = high;

    // Binary Search for the minimum number of days
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Avoid integer overflow

        if (possible(arr, mid, m, k)) {
            ans = mid;  // Store the potential answer
            high = mid - 1;  // Search in the left half (try fewer days)
        } else {
            low = mid + 1;  // Search in the right half (try more days)
        }
    }
    return ans;
}

int main() {
    int n, m, k;

    cin >> n;

    vector<int> bloomDay(n);
    
    for (int i = 0; i < n; i++) {
        cin >> bloomDay[i];
    }

    cin >> m;

    cin >> k;


    int result = minDays(bloomDay, m, k);
    
    cout << result << endl;

    return 0;
}
