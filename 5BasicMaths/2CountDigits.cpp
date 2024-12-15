#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    while(n > 0){
        int lastDigit = n % 10;
        count++;
        n /= 10;
    }
    cout << "Number of digits: " << count << endl;


    //Another way
//     int count = (int)(log10(n) + 1);
//     cout << "Number of digits: " << count << endl;
//     return 0;
}