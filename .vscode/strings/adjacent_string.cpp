// write a program to check wether in the string is there any adjacent upercase and lowercase together.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = "";

    for (char ch : input)
    {

        if (!isupper(ch))
        {
            result += ch;
        }
    }

    cout << "String after removing capital letters: " << result << endl;

    return 0;
}
