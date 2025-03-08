/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Example 1:
Input: nums = [3,2,3]
Output: [3]

Example 2:
Input: nums = [1]
Output: [1]

Example 3:
Input: nums = [1,2]
Output: [1,2]
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &arr)
{
    int n = arr.size();
    int num1 = -1, num2 = -1, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num1)
        {
            count1++;
        }
        else if (arr[i] == num2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            num1 = arr[i];
            count1 = 1;
        }
        else if (count2 == 0)
        {
            num2 = arr[i];
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    if (num1 == num2)
        return {num1};

    count1 = count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num1)
            count1++;
        if (arr[i] == num2)
            count2++;
    }
    vector<int> result;
    if (count1 > n / 3)
        result.push_back(num1);
    if (count2 > n / 3)
        result.push_back(num2);
    return result;
}

int main(){
    int n; 
    cin  >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> result = majorityElement(arr);
    for(auto it : result){
        cout << it << " ";
    }
}