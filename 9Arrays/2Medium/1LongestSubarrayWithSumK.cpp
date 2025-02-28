#include<bits/stdc++.h>
using namespace std;


// //Brute force approach
// int longestSubarray(int arr[], int n, int k){
//     int maxLen = 0;
//     for(int i = 0; i < n; i++){
//         int sum = 0;
//         for(int j = i; j < n; j++){
//             sum += arr[j];
//             if(sum == k) maxLen = max(maxLen, j-i+1);
//         }
//     }
//     return maxLen;
// }



//Optimal approach(if the array contains only positive values)
// int longestSubarray(int arr[], int n, int k){
//     int left = 0, right = 0;
//     int sum = arr[0];
//     int maxLen = 0;
//     while(right < n){
//         while(left <= right && sum > k){
//             sum -= arr[left];
//             left++;
//         }
//         if(sum == k) maxLen = max(maxLen, right-left+1);
//         right++;
//         if(right < n) sum+=arr[right];
//     }
//     return maxLen;
// }



//Optimal approach if the array contains negative numbers also
int longestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.
    if(n == 0) return 0;
    
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}



int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >>arr[i];
    }
    int k;
    cin >> k;
    cout << longestSubarray(arr, k);
}