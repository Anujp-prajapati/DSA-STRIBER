#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class solution
{
public:
    void Preimeter()
    {
        vector<int> num = {1, 2, 4, 3};
        sort(num.begin(), num.end());

        int n = num.size();
        for (int i = n - 3; i >= 0; i--)
        {
            if (num[i] + num[i + 1] > num[i + 2])
            {
                int sum = num[i] + num[i + 1] + num[i + 2];
                cout << sum << endl;
            }
        }
        }
};
int main()

{
    solution sol;
    sol.Preimeter();
}