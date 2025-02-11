#include<bits/stdc++.h>
using namespace std;

void rightRotateArray(int arr[], int n, int k){
    k = k % n;
    vector<int> temp;
    //int temp[n];

    //Storing the original array into temp
    for(int i = 0; i < n; i++){
        temp.push_back(arr[i]);
        // temp[i] = arr[i];
    }

    // Move the last k elements of temp to the front of arr
    for(int i = 0; i < k; i++){
        arr[i] = arr[n-k+i];
    }

    // Move the first (n-k) elements of temp to their new positions in arr
    for(int i = k; i < n; i++){
        arr[i] = temp[i-k];
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
    rightRotateArray(arr, n, r);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}