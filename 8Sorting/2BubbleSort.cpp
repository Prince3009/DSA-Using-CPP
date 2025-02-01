// Bubble Sort - Pushes the maximum to trhe last by adjacent swapping positions
/*
🔹 How Bubble Sort Works
        Compare adjacent elements and swap them if needed.
        Move the largest element to the end (it "bubbles" up).
        Repeat the process for the remaining elements (ignoring the last sorted elements).
        Stop when no swaps are needed in a pass, meaning the array is sorted.

*/
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}