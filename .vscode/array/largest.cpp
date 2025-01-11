// write a program to print the largest element in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 9, 2, 4};
    int largest = arr[0];
    // int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "the largest element is :" << largest << endl;
    return 0;
};
