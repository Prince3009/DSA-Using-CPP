#include<bits/stdc++.h>
using namespace std;
int concOnes(int arr[], int n){
    int count = 0;
    int maxm = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
            maxm = max(maxm, count);
        }
        else{
            count = 0;
        }
    }
    return maxm;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << concOnes(arr, n);
}