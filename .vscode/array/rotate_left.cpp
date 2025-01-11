// Rotate an array to the left by one position.
#include <iostream>
using namespace std;
int main()
{
    int arr[10], n, i, j, temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before rotation: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    temp = arr[0];
    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    cout << "Array after rotation: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// #include <iostream>
//     using namespace std;

//     int main()
//     {
//         int arr[10], n, i, temp;

//         // Input number of elements
//         cout << "Enter the number of elements: ";
//         cin >> n;

//         // Input elements of the array
//         cout << "Enter the elements: ";
//         for (i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }

//         // Display the array before rotation
//         cout << "Array before rotation: ";
//         for (i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;

//         // Rotate the array to the left by one position
//         temp = arr[0]; // Store the first element
//         for (i = 0; i < n - 1; i++)
//         {
//             arr[i] = arr[i + 1];
//         }
//         arr[n - 1] = temp; // Assign the first element to the last position

//         // Display the array after rotation
//         cout << "Array after rotation: ";
//         for (i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;

//         return 0;
//     }
