#include<bits/stdc++.h>
using namespace std;
vector<int> intersectionArray(int arr1[], int n, int arr2[], int m){
   int i = 0;
   int j = 0;
   vector<int> result;
   while(i < n && j < m){
    if(arr1[i] < arr2[j]) i++;
    else if(arr2[j] < arr1[i]) j++;
    else{
        result.push_back(arr1[i]);
        i++;
        j++;
    }
   }
   return result;
}
int main(){
    int n;
    cin >> n;
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    vector<int> result = intersectionArray(arr1, n, arr2, m);
    for(auto it : result){
        cout << it << " ";
    }
    
}