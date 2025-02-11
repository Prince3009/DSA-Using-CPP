#include<bits/stdc++.h>
using namespace std;

void leftRotateArray(int arr[], int n, int k){
    vector<int> temp;                   // Temporary vector to store the original array
    k = k % n;                          // Ensure k is within bounds (if k >= n, take modulo)

    //Storing the original array into temp
    for(int i = 0; i < n; i++){
        temp.push_back(arr[i]);
    }

    // Shift elements from index k to the left
    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }

    // Move the first k elements to the end of the array
    for(int i = n-k; i < n; i++){
        arr[i] = temp[i-(n-k)];
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int r;
    cin >> r;
    leftRotateArray(arr, n, r);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}