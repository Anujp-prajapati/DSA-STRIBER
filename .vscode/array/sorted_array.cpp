// write a program to print the sorted array.
#include <iostream>

#include <algorithm>
using namespace std;
void SortedArray(int arr[], int n)
{
    // Sort the array in ascending order
    sort(arr, arr + n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 3, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    SortedArray(arr, n);
    return 0;
}