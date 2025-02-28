/*
Given an unsorted array of integers arr, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.

Example 1:
Input: arr = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Example 2:
Input: arr = [0,3,7,2,5,8,4,6,0,1]
Output: 9
*/
#include<bits/stdc++.h>
using namespace std;


// //Brute force approach
// bool ls(int arr[], int n, int x){
//     for(int i = 0; i < n; i++){
//         if(arr[i] == x) return true;
//     }
//     return false;
// }
// int longestConSequence(int arr[], int n){
//     int longest = 1;
//     for(int i = 0; i < n; i++){
//         int count = 1;
//         int x = arr[i];
//         while(ls(arr, n, x+1) == true){
//             x = x+1;
//             count++;
//         }
//         longest = max(longest, count);
//     }
//     return longest;
// }



// //Better approach
int longestConSequence(int arr[], int n)
{
    sort(arr, arr + n);
    if (n == 0) return 0;
    int count = 1;
    int longest = 1;
    int last_smaller = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == last_smaller)
            continue;

        else if (arr[i] == last_smaller + 1)
        {
            count++;
        }
        else if (arr[i] != last_smaller)
        {
            count = 1;
        }
        last_smaller = arr[i];
        longest = max(longest, count);
    }
    return longest;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << longestConSequence(arr, n);
    return 0;
}