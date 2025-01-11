#include <bits/stdc++.h>
using namespace std;

void consecutive_ones()
{
    int arr[] = {1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; // Array containing 1s and 0s
    int n = sizeof(arr) / sizeof(arr[0]);                            // Calculate the size of the array

    int max_count = 0, current_count = 0; // Initialize counters

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            current_count++;                           // Increment current streak of consecutive 1s
            max_count = max(max_count, current_count); // Update the maximum streak
        }
        else
        {
            current_count = 0; 
        }
    }

    cout << "The maximum number of consecutive 1's is: " << max_count << endl; 
}

int main()
{
    consecutive_ones(); 
    return 0;
}
