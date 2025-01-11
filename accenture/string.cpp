#include <iostream>
using namespace std;

// char arr[10];
// cin >> arr;

// cout << arr;

// Function to count the number of vowels in a string
int countVowels(const string &str)
{
    int count = 0;
    string vowels = "aeiou";

    for (char ch : str)
    {
        if (vowels.find(ch) != string::npos)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int vowelCount = countVowels(input);

    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
