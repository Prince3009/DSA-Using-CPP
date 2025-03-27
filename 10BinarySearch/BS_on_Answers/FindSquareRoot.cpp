/*
Input: n = 4
Output: 2
Explanation: Since, 4 is a perfect square, so its square root is 2.

Input: n = 11
Output: 3
Explanation: Since, 11 is not a perfect square, floor of square root of 11 is 3.
*/

#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n){
    //Using function
    // return sqrt(n);


    // //Brute force
    // int ans = 1;
    // for(int i = 0; i*i <= n; i++){
    //     ans = i;
    // }
    // return ans;


    //Optimal approach
    int ans = 0;
    int low = 1, high = n;
    while(low <= high){            int mid = (low+high)/2;
        if(mid*mid <= n){
            ans = mid;
            low = mid + 1;
        }
        else if(mid*mid > n) {
            high = mid - 1;
        }
        return ans;
    }
}

int main(){
    int n;
    cin >> n;
    cout << squareRoot(n) << endl;
    return 0;
}