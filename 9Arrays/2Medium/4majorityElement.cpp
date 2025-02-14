// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:

// Input: nums = [3,2,3]
// Output: 3

#include<bits/stdc++.h>
using namespace std;

//Brute-force approach
int majorityElement(int arr[], int n){
    for(int i = 0; i < n; i++){
        int count  = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] ==arr[j]) count++;
        }
        if(count > n/2) return arr[i];
    }
    return -1;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << majorityElement(arr, n);
    return 0;
}
