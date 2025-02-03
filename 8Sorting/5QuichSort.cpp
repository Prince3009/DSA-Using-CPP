// Quick sort - Divide and conquer algorithm
// Pick a pivot element(Element in the first, last, middle or any random number)
//  Divide the array into two sub-arrays, according to a pivot element.
// Smaller on the left and larger element on the right of pivot element
//  Recursively sort the sub-arrays.
//  Combine the sorted sub-arrays into a single sorted array.

#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[low]; // Choosing the first element as the pivot
    int i = low;          // Left pointer (starting at the first element)
    int j = high;         // Right pointer (starting at the last element)

    while (i < j)
    {
        // Move i forward if elements are smaller or equal to the pivot
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        // Move j backward if elements are larger  to the pivot
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]); // Swap elements to correct positions
        }
    }

    // Swap pivot with its correct position(arr[low] is pivot element)
    swap(arr[low], arr[j]);
    return j; // return index of pivot element
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high); // Partition the array

        quickSort(arr, low, pi - 1);  // Recursively sort left half
        quickSort(arr, pi + 1, high); // Recursively sort right half
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
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}