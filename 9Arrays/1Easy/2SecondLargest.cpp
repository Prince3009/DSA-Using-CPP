#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n){
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int secondLargest = -1;   //Here we can also take INT_MIN if the array contains negative values
    for(int i = 0; i < n; i++){
        if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << secondLargest(arr, n) << endl;
}