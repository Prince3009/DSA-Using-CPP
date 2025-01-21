#include<bits/stdc++.h>
using namespace std;
void checkPrime(int n){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 2){
        cout << "Prime number" << endl;
    }
    else{
        cout << "Not a prime number" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    checkPrime(n);
}