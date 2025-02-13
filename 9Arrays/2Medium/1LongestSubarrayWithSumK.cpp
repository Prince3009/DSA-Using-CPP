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
int longestSubarray(int arr[], int n, int k){
    
}



int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << longestSubarray(arr, n, k);
}