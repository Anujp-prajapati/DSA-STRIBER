// write a program to print the number in a string for example
//  "abc1jj2u3def" output: 123
//  "abc4o5y6def" output: 456
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fun(string s)
{
    vector<char> v;
    for (char &ch : s)
    {
        if (isalpha(ch))
        {
            v.push_back(ch);
        }
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
}
int main()
{
    string s = "1a4b6n8j9u1";
    fun(s);
}