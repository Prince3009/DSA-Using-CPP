/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.

Input: piles = [3,6,7,11], h = 8
Output: 4

Input: piles = [30,11,23,4,20], h = 5
Output: 30
*/
#include <iostream>
#include <vector>
#include <cmath>  // For ceil function

using namespace std;

// Function to find the maximum element in the array
int findMax(vector<int>& arr) {
    int maxm = arr[0];  
    for (int i = 1; i < arr.size(); i++) {
        if (maxm < arr[i]) {
            maxm = arr[i];  
        }
    }
    return maxm;
}

// Function to calculate total hours needed if eating speed is 'mid'
long long findTotalHrs(vector<int>& arr, int mid) {
    long long totalHrs = 0; 
    for (int i = 0; i < arr.size(); i++) { 
        totalHrs += ceil((double)arr[i] / mid); // Calculate hours required per pile
    }
    return totalHrs; 
}

// Function to find the minimum eating speed required to finish all bananas within 'h' hours
int minEatingSpeed(vector<int>& arr, int h) {
    int low = 1, high = findMax(arr);    // Search space: min speed is 1, max speed is max pile size
    int ans = high;                       // Initialize answer with the highest possible eating speed

    
    while (low <= high) {
        int mid = (low + high) / 2; 
        long long totalHrs = findTotalHrs(arr, mid); 

        if (totalHrs <= h) { 
            // If we can finish within 'h' hours, try a smaller eating speed
            ans = mid;
            high = mid - 1; // Search in the lower half
        } else {
            // If we exceed 'h' hours, we need to eat faster
            low = mid + 1; // Search in the upper half
        }
    }
    return ans; 
}

int main() {
    int n, h;
    cin >> n;

    vector<int> piles(n);

    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    cin >> h;

    int result = minEatingSpeed(piles, h);
    cout << result << endl;
    return 0;
}
