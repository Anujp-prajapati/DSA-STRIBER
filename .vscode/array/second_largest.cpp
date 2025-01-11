// write a progrm to print the second largest number from the array
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 9, 2, 4};
    int sec_largest = arr[0];
    // int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] > sec_largest)
        {
            sec_largest = arr[i - 1];
        }
    }
    cout << "the second largest  element is :" << sec_largest << endl;
    return 0;
};