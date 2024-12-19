#include<bits/stdc++.h>
using namespace std;

string checkArmstrong(int x){
    int sum = 0;
    int count = 0;
    int originalNumber = x;
    int temp = x;

    //loop for counting the number of digits
    while(temp > 0){
        int lastDigit = temp % 10;
        count++;
        temp /= 10;
    }
    temp = x;

    //loop for calculating the sum of digits raised to the power of count
    while(temp > 0){
        int lastDigit = temp % 10;
        sum += pow(lastDigit, count);
        temp /= 10;
    }
    if(originalNumber == sum && originalNumber > 0){
        return "Armstrong";
    }
    else{
        return "Not Armstrong";
    }
}

int main(){
    int n;
    cin >> n;
    cout << checkArmstrong(n) << endl;
    return 0;
}