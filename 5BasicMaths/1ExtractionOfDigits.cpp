#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the digit: " ;
    cin >> n;
    while(n > 0){
        int lastDigit = n % 10;
        cout << lastDigit << endl;
        n = n / 10;
    }
}