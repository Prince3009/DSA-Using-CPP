#include<bits/stdc++.h>
using namespace std;
vector<int> unionArray(int arr1[], int n, int arr2[], int m){
    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i < m; i++){
        st.insert(arr2[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
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
    vector<int> result = unionArray(arr1, n, arr2, m);
    for(auto it : result){
        cout << it << " ";
    }
    
}