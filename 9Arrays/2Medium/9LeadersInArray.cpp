/*
You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

Examples:

Input: arr = [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]
Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
Input: arr = [10, 4, 2, 4, 1]
Output: [10, 4, 4, 1]
Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(int arr[], int n){
    vector<int> arr2;

    // //Brute force approach
    // for(int i=0; i<n; i++){
    //     int leader = true;
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] < arr[j]) {
    //             leader = false;
    //             break;
    //         }
    //     }
    //     if(leader == true){
    //         arr2.push_back(arr[i]);
    //     }
    // }
    // return arr2;

    int maxm = INT_MIN;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] >= maxm){
            arr2.push_back(arr[i]);
            maxm = arr[i];
        }
    }
    return arr2;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = leaders(arr, n);
    for(auto it : result){
        cout << it << " ";
    }
}