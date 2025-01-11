// write a program to print the absolute sum or diffrence
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10] = {12, 3, 14, 56, 77, 13};
    int count = 0;
    int num = 13;
    int diffrence = 2;
    for (int i = 0; i < 10; i++)
    {
        if (abs(arr[i] - num) <= diffrence)
        {
            count++;
        }
        else
        {
            count - 1;
        }
    }
    cout << count;
}
