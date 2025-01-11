// write a program that will accept the string and swap tha all occurances of a,b and vice versa
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for (char &ch : str)
    {
        if (ch == 'a')
        {
            ch = 'b';
        }
        else if (ch == 'b')
        {

            ch = 'a';
        }
    }
    cout << str;
    return 0;
}
