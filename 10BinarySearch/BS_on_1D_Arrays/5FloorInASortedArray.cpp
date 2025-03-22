/*
Given a sorted array arr[] and an integer x, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the floor of x. If such an element does not exist, return -1.
Note: In case of multiple occurrences of ceil of x, return the index of the last occurrence.

Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
Output: 1
Explanation: Largest number less than or equal to 5 is 2, whose index is 1.
*/
#include<bits/stdc++.h>
using namespace std;
int findFloor(int arr[], int n, int target){
    int low = 0, high = n-1;
    int ans = n;      //If the target value is greater than every elememt then it will return the size
    while(low <= high){
        int mid = (low+high)/2;              //To avoid overflow we can use [low + (high-low) / 2]
        if(arr[mid] <= target){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << findFloor(arr, n, target);
}