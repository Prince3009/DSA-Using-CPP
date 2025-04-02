#include <iostream>
#include <vector>
#include <algorithm>  // For min_element() and max_element()
using namespace std;

// Function to find the minimum value in the array
int findMin(vector<int>& arr) {
    int min = arr[0];  // Initialize min with the first element
    for (int i = 1; i < arr.size(); i++) {
        if (min > arr[i]) {
            min = arr[i];  // Update min if a smaller element is found
        }
    }
    return min;
}

// Function to find the maximum value in the array
int findMax(vector<int>& arr) {
    int max = arr[0];  // Initialize max with the first element
    for (int i = 1; i < arr.size(); i++) {
        if (max < arr[i]) {
            max = arr[i];  // Update max if a larger element is found
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

// Main function with user input
int main() {
    int n, m, k;
    
    // Taking input for bloomDay array size
    cout << "Enter the number of flowers: ";
    cin >> n;

    vector<int> bloomDay(n);
    
    // Taking input for bloomDay array elements
    cout << "Enter the bloom days of each flower: ";
    for (int i = 0; i < n; i++) {
        cin >> bloomDay[i];
    }

    // Taking input for number of bouquets and flowers per bouquet
    cout << "Enter the number of bouquets (m): ";
    cin >> m;
    
    cout << "Enter the number of flowers required per bouquet (k): ";
    cin >> k;

    // Calling function to find minimum days
    int result = minDays(bloomDay, m, k);
    
    // Printing result
    if (result == -1) {
        cout << "It is not possible to make " << m << " bouquets with " << k << " flowers each." << endl;
    } else {
        cout << "Minimum days required: " << result << endl;
    }

    return 0;
}
