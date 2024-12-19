#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
        long revNum = 0;           //using long to handle bigger values
        while(x){
            int lastDigit = x % 10;
            revNum = (revNum * 10) + lastDigit;

            // Check if revNum exceeds the range of a 32-bit signed integer
            if(revNum > INT_MAX || revNum < INT_MIN){      
                return 0;
            }
            x /= 10;
        }
        return revNum;
    }

int main(){
    int n;
    cin >> n;
    int result = reverse(n);
    cout << "Reversed number: " << result << endl;
    return 0;
}