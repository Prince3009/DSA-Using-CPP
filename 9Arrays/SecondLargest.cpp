#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n){
    int largest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int secondLargest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i]!=largest && arr[i] > secondLargest){
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