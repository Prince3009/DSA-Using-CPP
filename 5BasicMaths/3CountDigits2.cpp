//Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.
/*Example :
Input: n = 12
Output: 2
Explanation: 1, 2 when both divide 12 leaves remainder 0.

Input: n = 2446
Output: 1
Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.
*/
#include <bits/stdc++.h>
using namespace std;
int evenlyDivides(int n) {
        int originalValue = n;
        int count = 0;
        while(n > 0){
            int lastDigit = n % 10;
            if(lastDigit != 0 && originalValue % lastDigit == 0){
               count++;
            }
            n = n/10;
        }
        return count;
    }

int main(){
    int n;
    cin >> n;
    int result = evenlyDivides(n);
    cout << result << endl;
}