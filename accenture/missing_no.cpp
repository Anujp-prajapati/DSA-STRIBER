#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 7, 9};
    int missing;
    cout << "Enter a number to check if it's present in the array: ";
    cin >> missing;

    bool found = false; // Flag to track if the number is found

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == missing)
        {
            found = true; // Set the flag to true if the number is found
            break;        // Exit the loop early since we found the number
        }
    }

    if (found)
    {
        cout << "Number is present in the array" << endl;
    }
    else
    {
        cout << "Number is not present in the array" << endl;
    }

    return 0;
}