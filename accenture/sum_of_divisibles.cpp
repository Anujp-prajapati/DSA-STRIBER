#include <bits/stdc++.h>
using namespace std;
void sum_divisibles()
{
    int n = 12, m = 50;
    int sum = 0;
    for (int i = n; i <= m; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum;
}
int main()
{
    sum_divisibles();
}