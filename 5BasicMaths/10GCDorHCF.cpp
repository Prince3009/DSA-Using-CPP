#include<bits/stdc++.h>
using namespace std;
int findGCD(int x, int y){
    for(int i = min(x, y); i > 0; i--){
        if(x % i == 0 && y % i == 0){
            return i;
            //for lcm
            //int lcm = (x*y)/i;
        }
    }
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << "GCD of " << x << " and " << y << " is " << findGCD(x, y);
    return 0;
}


//Euclidean algorithm - if a and b are two numbers and a > b then - 
//gcd(a, b) = gcd (a % b, b) or gcd(a,b) = gcd(a-b, b)