//Print numbers in reverse order 5 4 3 2 1
#include<bits/stdc++.h>
using namespace std;

// void f(int i, int n){
//     if(i < 1)
//     return;
//     cout << i << endl;
//     f(i-1, n);

// }

// int main(){
//     int n;
//     cin >> n;
//     f(n,n);
// }


//Another method(Backtracking)

void f(int i, int n){
    if(i > n)
    return;
    f(i+1, n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    f(1,n);
}