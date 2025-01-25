//Print name N times using recursion
#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i > n) 
    return;
    cout << "Prince" << endl;
    f(i+1, n);     //recursive call with updated value of i
}

int main(){
    int n;
    cin >> n;
    f(1,n);
}