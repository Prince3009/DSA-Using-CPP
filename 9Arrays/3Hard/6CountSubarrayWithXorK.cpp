/*
Given an integer array arr and an integer K, return the number of contiguous subarrays whose XOR equals K.

Example 1:
Input:
arr = [4, 2, 2, 6, 4]
K = 6
Output: 4
Explanation:
The subarrays whose XOR equals 6 are:       [4, 2]
                                            [2, 2, 6]
                                            [6]
                                            [4, 2, 2, 6, 4]                                       
*/

#include <iostream>
#include <vector>
using namespace std;

int countSubarraysWithXOR(vector<int>& arr, int K) {
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        int Xor = 0; 
        for (int j = i; j < n; j++) {
            Xor ^= arr[j];

            if (Xor == K) {
                count++; 
            }
        }
    }

    return count;
}

int main() {
    int n, K;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> K;

    int result = countSubarraysWithXOR(arr, K);
    cout << "Number of subarrays with XOR " << K << " is: " << result << endl;

    return 0;
}
