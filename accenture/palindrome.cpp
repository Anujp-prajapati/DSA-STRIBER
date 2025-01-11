// write a program to check wether the string is palindrome or not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, revstr;
    cout << "enter a string ";
    getline(cin, str1);
    revstr = str1;
    reverse(revstr.begin(), revstr.end());
    if (str1 == revstr)
    {
        cout << "palindrome";
        return 1;
    }
    else
    {
        cout << "not palindrome";
        return 0;
        }
    return 0;
}