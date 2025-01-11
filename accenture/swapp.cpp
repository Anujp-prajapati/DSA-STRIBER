// write a program to or channge the chatacters or replace or swap two characters with each other
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "enter a string" << endl;

    cin >> s;

    char ch1, ch2;
    cout << "enter character 1 and 2 for the swapping" << endl;

    cin >> ch1;
    cin >> ch2;
    string res = "";
    for (char C : s)
    {
        if (C == ch1)
        {
            res += ch2;
        }
        else if (C == ch2)
        {
            res += ch1;
        }
        else
        {
            res += C;
        }
    }
    cout << res << endl;
}
