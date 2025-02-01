/*
🔹 How Selection Sort Works
        Find the Minimum Element:
        In each pass, look for the smallest element in the unsorted part of the array.
        Swap It with the First Unsorted Element:
        Swap the smallest element with the first element of the unsorted part.
        Repeat for Remaining Elements:
        Move the boundary between the sorted and unsorted parts of the array.
*/



#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    // Outer loop to iterate through each element except the last one
    //By the time we reach the second-to-last element (n-2 index), the rest of the elements before it are already sorted. This id the reason we run first loop from 0 to n-2(not n-1)
    for (int i = 0; i <= n-2; i++)
    {
        int min = i;        // Assume the current index 'i' has the minimum element

        // Inner loop to find the smallest element in the remaining array
        for (int j = i; j <= n-1; j++)
        {
            if (arr[j] < arr[min]) // If a smaller element is found, update min index
            {
                min = j; // Update min index to the new smallest element
            }
        }

        // Swap the smallest element found with the first element of the unsorted part
        // int temp = arr[min];
        // arr[min] = arr[i];
        // arr[i] = temp;

        swap(arr[min], arr[i]); // Using STL swap function for better performance
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
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}