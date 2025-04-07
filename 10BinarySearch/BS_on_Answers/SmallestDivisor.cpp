#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to find the maximum element in the array
int findMax(vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

// Function to check if a given divisor 'mid' can divide all elements in such a way
// that the sum of their ceilings is less than or equal to the threshold
bool possible(vector<int>& arr, int mid, int threshold) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += ceil((double)arr[i] / mid);
    }
    return sum <= threshold;
}

// Function to find the smallest divisor such that the sum of all ceil(arr[i]/divisor) is <= threshold
int smallestDivisor(vector<int>& arr, int threshold) {
    int low = 1, high = findMax(arr);
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (possible(arr, mid, threshold)) {
            ans = mid;        // Possible to reduce the divisor, try smaller one
            high = mid - 1;
        } else {
            low = mid + 1;    // Not possible, try bigger divisor
        }
    }
    return ans;
}

int main() {
    int n, threshold;

    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> threshold;

    int result = smallestDivisor(arr, threshold);
    cout << "Smallest Divisor: " << result << endl;

    return 0;
}
