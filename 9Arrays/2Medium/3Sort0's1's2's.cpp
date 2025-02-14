// Example 1:

// Input: arr = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: arr = [2,0,1]
// Output: [0,1,2]


#include<bits/stdc++.h>
using namespace std;
void sortArray(int arr[], int n){
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) count0++;
        else if(arr[i] == 1) count1++;
        else count2++;
    }
    for(int i = 0; i < count0; i++){
        arr[i] = 0;
    }
    for(int i = count0; i < count0+count1; i++){
        arr[i] = 1;
    }
    for(int i = count0+count1; i < n; i++){
        arr[i] = 2;
    }
}
int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sortArray(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
 
}