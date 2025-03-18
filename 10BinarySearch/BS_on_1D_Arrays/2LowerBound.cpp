//Smallest index such that arr[index] >= target
#include<bits/stdc++.h>
using namespace std;
int lowerBound(int arr[], int n, int target){
    int low = 0, high = n-1;
    int ans = n; //If the target value is greater than every elememt then it will return the size
    while(low <= high){
        int mid = (low+high)/2;              //To avoid overflow we can use [low + (high-low) / 2]
        if(arr[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
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
    cout << lowerBound(arr, n, target);
}