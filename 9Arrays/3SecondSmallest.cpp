#include<bits/stdc++.h>
using namespace std;
int secondsmallest(int arr[], int n){
    int smallest = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    int secondsmallest = INT_MAX;   //Here we take INT_MAX so that it refers to the largest value
    for(int i = 0; i < n; i++){
        if(arr[i] > smallest && arr[i] < secondsmallest){
            secondsmallest = arr[i];
        }
    }
    return secondsmallest;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << secondsmallest(arr, n) << endl;
}