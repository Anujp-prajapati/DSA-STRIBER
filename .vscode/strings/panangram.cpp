
// WRITE A PROGRAM TO CHECK WETHER THE SENTENCE IS PANANGRAM OR NOT.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string panangram = "afkflkmlfrjirtvnfdjferifuheroingrgdkfvdvfefrorpfvmcldofhewvnvjvofhfdddqlmnvdfiufhthequickbrownfoxjumpsoverthelazydog";
    vector<int> pan(26, 0);
    for (char ch : panangram)
    {
        int index = ch - 'a';
        pan[index]++;
    }
    for (int count : pan)
    {
        if (count == 0)
        {
            cout << "not panangram" << endl;
            return 0;
        }
    }
    cout << " panangram" << endl;
    return 0;
}
