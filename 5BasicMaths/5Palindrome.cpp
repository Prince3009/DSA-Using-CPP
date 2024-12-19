#include<bits/stdc++.h>.h>
using namespace std;
bool isPalindrome(int x) {
        int originalNumber = x;         //Store the real value of x
        long revNum = 0;
        while(x){
            int lastDigit = x % 10;
            revNum = (revNum * 10) + lastDigit;             //reversing the digit and storing
            x /= 10;
        }
        if(revNum == originalNumber && originalNumber >= 0){          //if x is negative then it will always return false
            return true;
        }
        else{
            return false;
        }
    }

int main(){
    int n;
    cin >> n;
    int result = isPalindrome(n);
    cout << result << endl;
}