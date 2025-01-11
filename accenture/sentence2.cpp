#include <bits/stdc++.h>
using namespace std;

int extractNumber(const string &word)
{
    int num = 0;
    for (char ch : word)
    {
        if (isdigit(ch))
        {
            num = num * 10 + (ch - '0');
        }
    }
    return num;
}

string removeDigits(const string &word)
{
    string result;
    for (char ch : word)
    {
        if (!isdigit(ch))
        {
            result += ch;
        }
    }
    return result;
}

bool compare(const string &a, const string &b)
{
    return extractNumber(a) < extractNumber(b);
}

void sort_sentence(const string &s)
{
    vector<string> words;
    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), compare);

    for (const string &w : words)
    {
        cout << removeDigits(w) << " ";
    }
    cout << endl;
}

int main()
{
    string sentence = "HI11 I25 AM37 ANUJ42 KUMAR51 PRAJAPATI57 STUDYING72 B.TECH81  CURRENTLY69 ";
    sort_sentence(sentence);
    return 0;
}