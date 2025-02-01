//Insertion sort - Takes an element and places it in its correct order
/*
🔹 How Insertion Sort Works
        Start with the second element (since a single-element list is already sorted).
        Compare it with the elements before it.
        Shift larger elements one position to the right.
        Insert the current element into its correct position.
        Repeat for all elements until the array is sorted.
*/
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }  
    }
}
int main(){
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertion_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}