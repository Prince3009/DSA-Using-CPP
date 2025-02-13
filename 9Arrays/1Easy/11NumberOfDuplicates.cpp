#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    cout << "Number of duplicate elements: " << count;
    return 0;
}