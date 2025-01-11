// write a program to find the missing number in an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 5};
    bool flag = false;
    int i, j;
    int n = sizeof(arr) / sizeof(arr[0]) + 1;

    for (i = 1; i <= n; i++)
    {
        flag = false;
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = true;
                break;
            }
        }
        if (!flag)

        {

            cout << "the missing number is";
            cout << j;
            break;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 5};                 // Given array
//     int n = sizeof(arr) / sizeof(arr[0]) + 1; // Calculate the size of the complete array (missing one element)

//     bool flag;
//     int i, j;

//     for (i = 1; i <= n; i++) // Iterate from 1 to n (inclusive)
//     {
//         flag = false;
//         for (j = 0; j < n - 1; j++) // Iterate through the given array to check for the number i
//         {
//             if (arr[j] == i) // If the current number is found in the array
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if (!flag) // If the number i is not found in the array
//         {
//             cout << "The missing number is: " << i << endl;
//             break; // Exit the loop once the missing number is found
//         }
//     }

//     return 0;
// }
