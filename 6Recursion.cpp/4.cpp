//Print sum of N nautural numbers(Parameterised recursion)
#include<bits/stdc++.h>
using namespace std;
// void f(int i, int sum, int n){
//     if(i > n){
//         cout << sum << endl;
//         return;
//     }
//     f(i+1, sum+i, n);
// }

// int main(){
//     int n;
//     cin >> n;
//     f(1, 0, n);
// }



//Another method(Using fuctional recursion)
// int f(int n){
//     if(n == 0)
//         return 0;
//     return n + f(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << f(n) << endl;
//     return 0;
// }



//Print factorial of a number
int f(int n){
    if(n == 0)
        return 1;
    return n * f(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}