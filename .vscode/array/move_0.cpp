// write a program to print or move the 0 in the last position in an array
#include <stdio.h>
#include <bits\stdc++.h>
using namespace std;

int main()
{

    int n;
    int array[n];
    cout << "enter the size of an array";
    cin >> n;
    array[n];
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
        {
            array[i] = array[i] - 1;
            i--;
        }
    }
    cout << array[n] << endl;
    return 0;
}
