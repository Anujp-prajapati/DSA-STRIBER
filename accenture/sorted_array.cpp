// write a program to display whether the array is sorted or not
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cin value
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "Array is not sorted";
        }
        else
        {
            cout << "Array is sorted";
        }
    }
}