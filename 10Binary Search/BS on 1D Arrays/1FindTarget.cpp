#include<bits/stdc++.h>
using namespace std;


// //Iterative approach implementation
// int binarySearch(int arr[], int n, int target){
//     int low = 0;
//     int high = n - 1;
//     while(low <= high){
//         int mid = low + (high - low) / 2;
//         if(arr[mid] == target){
//             return mid;
//         }
//         else if(arr[mid] < target){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return -1; // Element not found
// }
// int main(){
//     int n; 
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     cout << binarySearch(arr, n, target);
// }






// // Recursive code implementation
int binarySearch(int arr[], int low, int high, int target) {
    // Base case: If low index exceeds high, target is not found
    if (low > high) 
        return -1;

    int mid = low + (high - low) / 2; // To avoid overflow

    // If target is found at mid
    if (arr[mid] == target) 
        return mid;

    // If target is smaller, search in the left half
    if (arr[mid] > target) 
        return binarySearch(arr, low, mid - 1, target);

    // If target is larger, search in the right half
    return binarySearch(arr, mid + 1, high, target);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << binarySearch(arr, 0, n - 1, target);
    return 0;
}
