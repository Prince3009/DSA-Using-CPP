/*
Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.
Examples:

Input: n = 4
Output: 15
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
So, F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7 = 15

Input: n = 5
Output: 21
Explanation:
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6
So,  F(1) + F(2) + F(3) + F(4) + F(5)
    = 1 + 3 + 4 + 7 + 6 = 21
*/
#include<bits/stdc++.h>
using namespace std;
int sumDivisors(int n){
    int sum = 0;
        while(n > 0){
            for(int i = 1; i <= n; i++){
                if(n % i == 0){
                    sum += i;
                }
            }
            n--;
        }
        return sum;
}

int main(){
    int n;
    cin >> n;
    cout << sumDivisors(n) << endl;
}